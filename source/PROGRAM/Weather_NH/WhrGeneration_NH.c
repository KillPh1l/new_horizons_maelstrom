#include "Weather_NH\WhrGenerateValues_NH.c"
#include "Weather_NH\WhrFogRainCheck_NH.c"
#include "Weather_NH\WhrDebugInfo_NH.c"

#define GENERATIONDEBUG 0

#define WIND2WAVESPEED 0.25
#define WIND2WAVELENGTH 6.0
#define WIND2AMPLITUDE 0.3

// #define RAIN2AMPLITUDE 0.15
// #define RAIN2WAVELENGTH 0.25
// #define RAIN2ANIM 0.01
// #define RAIN2FOAMV 0.025
// #define RAIN2BUMPSCALE 0.35
#define RAIN2AMPLITUDE 2.0
#define RAIN2WIND 1.0

#define WIND2WAVELENGTH2 1.5
#define WIND2AMPLITUDE2 0.1
#define WIND2BUMPSCALE 1.0
#define WIND2FOAMV 0.175

#define AMPLITUDERANDOM 0.4
#define SCALERANDOM 0.4
#define FOAMRANDOM 0.025

#define NIGHTCOLORBLEND 6.0
#define FOG2TRANSPARENCY 150.0

#define SHORECOLORDISTANCE 30.0

#define RANDOMDEBUG 1

void Whr_ResetOvrd(){
	OWeatherAngle = -50.0;
	OWABallast = -50.0;
	OFog = -50;
	OFBallast = -50;
	ORain = -50;
	ORBallast = -50;
	OWind = -50;
	OWBallast = -50;
	gWeatherOvrd = false;
}

void Whr_Generator(int iHour){
// ====================================================================
// JL - Less Random Weather Generator -- hopefully
// ====================================================================

	bool bWhrTornado = false;
	bool bWhrStorm = false;
	
	if(gWeatherInit == 1){
		goldRain = rand(100);
		goldFog = rand(20);
		oldWind = rand(25) + 5;		// LDH 09Feb09
		fWeatherAngleOld = frand(PIm2);
		gWeatherInit = 0;
		fogBallast = 0; 
		rainBallast = 0; 
		windBallast = 0; 
		windABallast = 0;
		Trace(" !gWeatherInit Whr_Generator() - Initialized ");
	}

	//Logit("BugTracker - goldFog: " + goldFog + " goldRain: " + goldRain + " oldWind: " + oldWind + " gWeatherInit: " + gWeatherInit);
	curTime = iHour; //Causing problems
	bWeatherIsStorm = false; // screwface
	bWeatherIsRain = false; // screwface

	rWind = rand(MAX_WINDCHANGE);
	rFog = rand(MAX_FOGCHANGE); 
	rRain = rand(MAX_RAINCHANGE);
	rWindA = frand(MAX_ANGLECHANGE);
	
	Whr_GenerateValues(FREE_FOG);
	
	//--Testing Settings--------------------------------------------------------
	
	wRain = 0;
	// fog = 0;
	//curTime = 6;
	// winds = 30;
	//rainBallast = 20;

	//--Testing Settings--------------------------------------------------------
	
	if(gWeatherOvrd){
		if(oWeatherAngle != -50.0){fWindA = OWeatherAngle;	}
		if(OWABallast != -50.0){windABallast = OWABallast; }
		if(OFog != -50){fog = OFog;}
		if(OFBallast != - 50){fogBallast = OFBallast;}
		if(ORain != -50){wRain = ORain;}
		if(ORBallast != -50){rainBallast = ORBallast;}
		if(OWind != -50){winds = OWind;}
		if(OWBallast != -50){windBallast = OWBallast;}
		Whr_ResetOvrd();
	}
	
	if (CheckAttribute(&WeatherParams,"Storm")) { bWhrStorm = sti(WeatherParams.Storm); } 
	if (CheckAttribute(&WeatherParams,"Tornado")) { bWhrTornado = sti(WeatherParams.Tornado); } 
	WeatherParams.Storm = false;
	WeatherParams.Tornado = false;
	
	if(bWhrStorm){
		wRain = 95;
		winds = 25;
		windBallast = 10;
		rainBallast = 10;
		fog = 75;
		bWeatherIsStorm = true; // screwface
	}
	if(bWhrTornado){
		wRain = 100;
		winds = 30;
		windBallast = 20;
		rainBallast = 20;
		fog = 75;
	}
	btornado = bWhrTornado; //screwface
	bstorm = bWhrStorm; //screwface
	
	goldRain = wRain;	
	goldFog = fog;
	oldWind = winds;
	fWeatherAngleOld = fWindA;
	
	if(windABallast >=  MAX_ABALLAST || windABallast <= -MAX_ABALLAST ){ windABallast = 0;}
	if(rainBallast  >=  MAX_RBALLAST )                                 { rainBallast = -MAX_RBALLAST;}
	if(rainBallast  <= -MAX_RBALLAST )                                 { rainBallast =  MAX_RBALLAST;}
	if(windBallast  >=  MAX_WBALLAST )                                 { windBallast = -MAX_WBALLAST;}
	if(windBallast  <= -MAX_WBALLAST )                                 { windBallast =  MAX_WBALLAST;}
	if(fogBallast   >=  MAX_FBALLAST )                                 { fogBallast  = -MAX_FBALLAST;}
	if(fogBallast   <= -MAX_FBALLAST )                                 { fogBallast  =  MAX_FBALLAST;}
	
	if(wRain >= 85 && winds <= 10){ windBallast = 15;}
	if(winds <= 25 && wRain >= 90){ rainBallast = -15;}
	if(fog > 0 && curTime >= 7 && curTime <= 20 && wRain <= 75){fogBallast = -30;}
	if(fogBallast < 0 && curTime > 20 || curTime < 7){fogBallast = 0;}
	if(fogBallast < 0 && curTime >= 7 && curTime <=20 && wRain > 75){fogBallast = 0;}
	
	minwind = winds - rand(2);
	maxwind = winds + rand(2);
	if(minwind < 5){minwind = 5;}	// LDH up from 0 - 12Feb09
	if(maxwind > 30){maxwind = 30;}
	if(minwind > maxwind){ minwind = maxwind; } // JL - Temporary catch all for weird wind bug
	
	// Whr_InitGValues(); //Setup generic values based on ToD
	Whr_FogRainCheck();	 //Set wRain and fog values

	// NK & Mith-->
	// LDH fixes - 16Mar09
	string direction1, direction2, direction3;

	fSeaA = PIm2 - fWindA;
	if (fSeaA >= (3.0 * PId2))
	{
		fSeaB = (fSeaA + PId2 - PIm2);
	}
	else
	{
		fSeaB = fSeaA + PId2;
	}
	WeathersNH.Wind.Angle = fWindA;
	WeathersNH.Wind.Speed.Min = minwind;
	WeathersNH.Wind.Speed.Max = maxwind;
	float seaWindSpeed = Whr_GetFloat(WeathersNH,"Wind.Speed");
	WeathersNH.Wind.seaWindSpeed = seaWindSpeed;

	// trace("winds: " + winds + " Realized winds" + seaWindSpeed);

	float effectiveRain = (wRain-70)*RAIN2WIND;
	if (effectiveRain < 0) effectiveRain = 0;

	// Bupmscale the sea grainyness
	float bumpscale = 0.05 + frnd()*0.05;
	WeathersNH.Sea2.BumpScale = bumpscale;
	WeathersNH.Sea2.PosShift = 1.0;

	// Wave amplitude
	float Amp1rand = 2.0*(frnd()-0.5)*AMPLITUDERANDOM + 1.0;
	float Amp1 = (4.0 + WIND2AMPLITUDE*(seaWindSpeed*Amp1rand + RAIN2AMPLITUDE*effectiveRain));
	WeathersNH.Sea2.Amp1 = Amp1;
	WeathersNH.Sea2.AnimSpeed1 = 4.0;

	// Wave Length
	float Scale1rand = 2.0*(frnd()-0.5)*SCALERANDOM + 1.0;
	float scale1 = WIND2WAVELENGTH/(seaWindSpeed + effectiveRain);
	if (scale1 > 1.0) {scale1 = 1.0;}
	scale1 = scale1*Scale1rand; 
	WeathersNH.Sea2.Scale1 = scale1;


	string waveSpeedX = f2s(-WIND2WAVESPEED*(seaWindSpeed + effectiveRain)*sin(fWindA), 2);
	string waveSpeedZ = f2s(-WIND2WAVESPEED*(seaWindSpeed + effectiveRain)*cos(fWindA), 2);
	WeathersNH.Sea2.MoveSpeed1 = waveSpeedX + ", 0.0, " + waveSpeedZ;

	// Amplitude 2
	float Amp2rand = 2.0*(frnd()-0.5)*AMPLITUDERANDOM + 1.0;
	float Amp2 = 1 + WIND2AMPLITUDE*WIND2AMPLITUDE2*(seaWindSpeed + effectiveRain);
	WeathersNH.Sea2.Amp2 = Amp2*Amp2rand;
	WeathersNH.Sea2.AnimSpeed2 = 4.0;

	// Wavelength 2
	float Scale2rand = 2.0*(frnd()-0.5)*SCALERANDOM + 1.0;
	WeathersNH.Sea2.Scale2 = WIND2WAVELENGTH*WIND2WAVELENGTH2/(seaWindSpeed + effectiveRain)*Scale2rand;


	// float randomDir = frnd()*PI;
	// trace("random dir: " + randomDir);
	string waveSpeed2X = f2s(-WIND2WAVESPEED*WIND2WAVELENGTH2*(seaWindSpeed + effectiveRain)*sin(fWindA), 2);
	string waveSpeed2Z = f2s(-WIND2WAVESPEED*WIND2WAVELENGTH2*(seaWindSpeed + effectiveRain)*cos(fWindA), 2);
	WeathersNH.Sea2.MoveSpeed2 = waveSpeed2X + ", 0.0, " + waveSpeed2Z;

	// Foam properties
	float foamrand = 2.0*(frnd()-0.5)*FOAMRANDOM;
	WeathersNH.Sea2.FoamV = Amp1*(0.6 + foamrand);
	WeathersNH.Sea2.FoamK = 0.1 - 0.05*effectiveRain/RAIN2WIND/25.0;
	WeathersNH.Sea2.FoamUV = scale1*2.0;
	WeathersNH.Sea2.FoamTexDisturb = 0.2;

	// Sea properties
	WeathersNH.Sea2.Attenuation = 0.5;

	float fblend = 0;
	float fblend2 = 0;

	float transparency  = 0.5;

	// Evening
	if (curTime==23 || curTime==5)
	{
		fblend = 0.5;
	}
	// if (curTime>18)
	// {
	// 	transparency  = 0.5 - 0.5*(MakeFloat(curTime) - 18)/5.0
	// }
	// Night
	if (curTime <=4)
	{
		fblend = 1;
		transparency = 0;
	}
	// Morning
	// if (curTime >= 6 && curTime < 11)
	// {
	// 	transparency  = 0.5 - 0.5*(11-MakeFloat(curTime))/5.0
	// }
	// if (curTime == 5)
	// {
	// 	fblend = (6-MakeFloat(curTime))/3.0;
	// }



	int darkSky = argb(0,60,60,60);
	int lightSky = argb(0,255,255,255);
	int dawnDuskSky = argb(0,255,162,50);

	// if (curTime==22 || curTime==23 || curTime==5 || curTime==6) lightSky = dawnDuskSky;

	WeathersNH.Sea2.SkyColor = Whr_BlendColor( fblend, lightSky, darkSky);

	if (curTime>9 && curTime<19)
	{
		transparency = 0.4 + 0.5*abs(14-MakeFloat(curTime))/5.0;
	}

	// Apply fog and rain to transparency
	effectiveRain = (wRain-70)/30.0;
	if (effectiveRain < 0) effectiveRain = 0;

	float fog2trans = (Whr_GetFloat(WeathersNH, "Fog.SeaDensity")-0.001*FOGFACTOR)*FOG2TRANSPARENCY + effectiveRain;
	transparency = transparency - fog2trans;
	// trace("Fog to transparency: " + fog2trans);

	if (transparency < 0) transparency = 0.0;
	if (fog2trans > 1) fog2trans = 1.0;

	
	// trace("Random number: " + randomPick + " weather index: " + itmp + " Weather id: " + Weathers[itmp].id)
	int WaterColor = waterColor_shore()

	// Darken and make opaque it for evening and night
	int darkWater = argb(0,28,28,28);
	int grayWater = argb(0,100,100,100);

	WaterColor = Whr_BlendColor( fog2trans*0.8, WaterColor, grayWater);

	int darkgrayWater = argb(0,70,70,70);

	float closestdist = 0.0;
	if (CheckAttribute(worldMap, "directsail1.closestdist")){
		trace("weather Char location: " + pchar.location + " closest island: " + worldMap.closestisland + "Closest distance: " + worldMap.directsail1.closestdist);
		closestdist = worldMap.directsail1.closestdist;
		trace("closestdist: " + closestdist + "conditional: " + SHORECOLORDISTANCE);
	}else{
		trace("weather Char location: " + pchar.location);
	}

	if (pchar.location == WDM_NONE_ISLAND || closestdist > SHORECOLORDISTANCE)
	{
		WaterColor = waterColor_openSea();
		WaterColor = Whr_BlendColor( fog2trans*0.8, WaterColor, darkgrayWater);		
	}

	WaterColor = Whr_BlendColor( fblend, WaterColor, darkWater);



	WeathersNH.Sea2.WaterColor = WaterColor;
	WeathersNH.Sea2.Transparency = transparency;

	// Apply fog to Frenel and Reflection
	WeathersNH.Sea2.Frenel = 0.75 + frnd()*0.25 - fog2trans*0.25;
	WeathersNH.Sea2.Reflection = 0.75 + frnd()*0.25 - fog2trans*0.75;

	if (RANDOMDEBUG) Trace("Done with watercolor");


	// Blend fog between day and night
	int lightfog = argb(0,120,120,120);
	int darkfog = argb(0,0,0,0);
	int dawnduskfog = argb(0,143,68,58);

	// if (curTime==22 || curTime==23 || curTime==5 || curTime==6) lightfog = dawnduskfog;	
	int fogcolor = Whr_BlendColor(fblend, lightfog, darkfog);
	
	// Tint it with the water color
	fogcolor = Whr_BlendColor(0.2, fogcolor, WaterColor);

	WeathersNH.Fog.Color = fogColor;
	WeathersNH.SpecialSeaFog.Color = fogColor;

	if (RANDOMDEBUG) Trace("Done with fog");

	// Determine the skybox to use
	string skydir;


	trace("CurTime: " + curTime);
	// Night
	if (curTime >= 1 && curTime <= 3 ) {skydir = skydir_night();}

	//Twilight
	if (curTime==23 || curTime==5) {skydir = skydir_twilight1();}
	if (curTime==0 || curTime==4) {skydir = skydir_twilight2();}
	if (curTime==23 || curTime==0 || curTime==4 || curTime==5){
		if (wRain > 80) skydir_night();
	}

	// Morning day and afternoon
	if (curTime >= 6 && curTime <= 10 ) {skydir = skydir_morningAFternoon();}
	if (curTime >= 18 && curTime <= 22 ) {skydir = skydir_morningAFternoon();}
	if (curTime >= 11 && curTime <= 17 ) {skydir = skydir_day();}

	if (curTime >= 6 && curTime <= 22 && wRain >60 ) {skydir = skydir_day_overcast();}

	WeathersNH.Sky.Dir = skydir;

	if (RANDOMDEBUG) Trace("Sky.Dir generation: " + Whr_GetString(WeathersNH, "Sky.Dir"));
	if (RANDOMDEBUG) Trace("Done with skybox");

	if (GENERATIONDEBUG){

		trace("WeathersNH.Sea2.Amp:" + WeathersNH.Sea2.Amp1 + ", " + WeathersNH.Sea2.Amp2);
		trace("WeathersNH.Sea2.AnimSpeed:" + WeathersNH.Sea2.AnimSpeed1+ ", " + WeathersNH.Sea2.AnimSpeed2);
		trace("WeathersNH.Sea2.Scale:" + WeathersNH.Sea2.Scale1 + ", " + WeathersNH.Sea2.Scale2);
		trace("WeathersNH.Sea2.MoveSpeed:" + WeathersNH.Sea2.MoveSpeed1 + ", " + WeathersNH.Sea2.MoveSpeed2);

		trace("WeathersNH.Sea2.FoamV:" + WeathersNH.Sea2.FoamV);
		trace("WeathersNH.Sea2.FoamK:" + WeathersNH.Sea2.FoamK);
		trace("WeathersNH.Sea2.FoamUV:" + WeathersNH.Sea2.FoamUV);
		trace("WeathersNH.Sea2.FoamTexDisturb:" + WeathersNH.Sea2.FoamTexDisturb);


		Whr_DebugInfo();
	}

}


string f2s(float fl,int nDigAfterPoint)
{
	float fmul = pow(10.0,nDigAfterPoint);
	fl = fl + 0.5/fmul;
	int p1 = makeint(fl);
	int p2 = makeint((fl-p1)*fmul);
	if (p1 == 0 && p2 == 0) return fts(fl,nDigAfterPoint);
	string minusstr = ""; if(fl < 0) minusstr = "-";
	string decimal = "0000000000" + abs(p2);
	decimal = strRight(decimal,nDigAfterPoint);
	string retval = minusstr + abs(p1) + "." + decimal;
	while (strRight(retval,1) == "0") retval = strLeft(retval, strLen(retval)-1);
	if (strRight(retval,1) == ".")    retval = strLeft(retval, strLen(retval)-1);
	return retval;
}

//--------------------------------------------------------------------------------
// Sky randomizers (Quiet-Sun)

string skydir_twilight1()
{

	// Random number for the case, if you add more skies be sure to match the number of cases
	int skyNumber = rand(1);
	if (RANDOMDEBUG) Trace("skydir_twilight random number: " + skyNumber);

	string skydirr;
	switch(skyNumber)
    {
    case 0:
        skydirr = "weather\skies\22\";
        break;
    case 1:
        skydirr = "weather\skies\23\";
        break;
	}

	return skydirr;
}

string skydir_twilight2()
{

	// Random number for the case, if you add more skies be sure to match the number of cases
	int skyNumber = rand(3);
	if (RANDOMDEBUG) Trace("skydir_twilight random number: " + skyNumber);

	string skydirr;
	switch(skyNumber)
    {
    case 0:
        skydirr = "weather\skies\01\";
        break;
    case 1:
        skydirr = "weather\skies\05\";
        break;
    case 3:
        skydirr = "weather\skies\24\";
        break;
	}

	return skydirr;
}

string skydir_morningAFternoon()
{
	// Random number for the case, if you add more skies be sure to match the number of cases
	int skyNumber = rand(3);
	if (RANDOMDEBUG) Trace("skydir_morningAFternoon random number: " + skyNumber);

	string skydirr;
	switch(skyNumber)
    {
    case 0:
        skydirr = "weather\skies\07\";
        break;
    case 1:
        skydirr = "weather\skies\08\";
        break;
    case 2:
        skydirr = "weather\skies\09\";
        break;
    case 3:
        skydirr = "weather\skies\20\";
        break;
	}

	return skydirr;
}

string skydir_day()
{
	// Random number for the case, if you add more skies be sure to match the number of cases
	int skyNumber = rand(3);
	if (RANDOMDEBUG) Trace("skydir_day random number: " + skyNumber);

	string skydirr;
	switch(skyNumber)
    {
    case 0:
        skydirr = "weather\skies\10\";
        break;
    case 1:
        skydirr = "weather\skies\13\";
        break;
    case 2:
        skydirr = "weather\skies\16\";
        break;
    case 3:
        skydirr = "weather\skies\18\";
        break;
	}

	return skydirr;
}

string skydir_night()
{
	// Random number for the case, if you add more skies be sure to match the number of cases
	int skyNumber = 0;  // Zero for a single option
	string skydirr;
	switch(skyNumber)
    {
    case 0:
        skydirr = "weather\skies\03\";
        break;
	}

	return skydirr;
}


string skydir_day_overcast()
{
	// Random number for the case, if you add more skies be sure to match the number of cases
	int skyNumber = rand(3);
	if (RANDOMDEBUG) Trace("skydir_day_overcast random number: " + skyNumber);
	
	string skydirr;
	switch(skyNumber)
    {
    case 0:
        skydirr = "weather\skies\storm1\";
        break;
    case 1:
        skydirr = "weather\skies\storm2\";
        break;
    case 2:
        skydirr = "weather\skies\storm3\";
        break;
    case 3:
        skydirr = "weather\skies\storm4\";
        break;		
	}

	return skydirr;
}

//--------------------------------------------------------------------------------
// Color randomizers (Quiet-Sun)

int waterColor_shore()
{

	// Random number for the case, if you add more colors be sure to match the number of cases
	int colorNumber = rand(7);
	if (RANDOMDEBUG) Trace("waterColor_shore random number: " + colorNumber);

	int waterColor;
	switch(colorNumber)
    {
    case 0:
        waterColor = argb(0,0,145,137);
        break;
    case 1:
        waterColor = argb(0,2,147,153);
        break;
    case 2:
        waterColor = argb(0,2,147,153);
        break;
    case 3:
        waterColor = argb(0,8,144,177);
        break;
    case 4:
        waterColor = argb(0,5,138,181);
        break;
    case 5:
        waterColor = argb(0,12,134,183);
        break;
    case 6:
        waterColor = argb(0,18,133,190);
        break;
    case 7:
        waterColor = argb(0,94,123,151);
        break;
	}

	return waterColor;
}


int waterColor_openSea()
{

	// Random number for the case, if you add more colors be sure to match the number of cases
	int colorNumber = rand(8);
	if (RANDOMDEBUG) Trace("waterColor_openSea random number: " + colorNumber);

	int waterColor;
	switch(colorNumber)
    {
    case 0:
        waterColor = argb(0,0,85,92);
        break;
    case 1:
        waterColor = argb(0,0,83,103);
        break;
    case 2:
        waterColor = argb(0,0,88,114);
        break;
    case 3:
        waterColor = argb(0,1,82,118);
        break;
    case 4:
        waterColor = argb(0,0,85,147);
        break;
    case 5:
        waterColor = argb(0,0,77,139);
        break;
    case 6:
        waterColor = argb(0,49,78,104);
        break;
    case 7:
        waterColor = argb(0,28,68,104);
        break;
    case 8:
        waterColor = argb(0,69,87,108);
        break;
	}

	return waterColor;
}