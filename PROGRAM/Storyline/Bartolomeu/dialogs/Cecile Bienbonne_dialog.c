//#include "DIALOGS\Cecile Bienbonne_dialog.h"

void ProcessDialogEvent()
{
	ref NPChar;
	aref Link, NextDiag;

	DeleteAttribute(&Dialog,"Links");

	makeref(NPChar,CharacterRef);
	makearef(Link, Dialog.Links);
	makearef(NextDiag, NPChar.Dialog);

	ref PChar;
	PChar = GetMainCharacter();

	
	switch(Dialog.CurrentNode)
	{
		// -----------------------------------������ ������ - ������ �������
		case "First time":
			Dialog.defAni = "dialog_stay1";
			Dialog.defCam = "1";
			Dialog.defSnd = "dialogs\0\017";
			Dialog.defLinkAni = "dialog_1";
			Dialog.defLinkCam = "1";
			Dialog.defLinkSnd = "dialogs\woman\024";
			Dialog.ani = "dialog_stay2";
			Dialog.cam = "1";

			if (PChar.quest.santiago == "madame") 
			{
				dialog.snd = "Voice\CLLA\CLLA001";
				dialog.text = DLG_TEXT[0];
			        link.l1 = DLG_TEXT[1];
				link.l1.go = "begin";
			}
			else
			{
				dialog.snd = "Voice\CLLA\CLLA002";
				dialog.text = DLG_TEXT[10];
				link.l1 = DLG_TEXT[11];
				link.l1.go = "exit";
			
			}

			NextDiag.TempNode = "first time";
			
			
                        break;

                case "begin":

			dialog.snd = "Voice\CLLA\CLLA003";
			dialog.text = DLG_TEXT[2];
			link.l1 = DLG_TEXT[3];
			link.l1.go = "begin_2";
		break;

		case "begin_2":

			dialog.snd = "Voice\CLLA\CLLA004";
			dialog.text = DLG_TEXT[4];
			link.l1 = DLG_TEXT[5];
			link.l1.go = "begin_3";

		break;

		case "begin_3":

			dialog.snd = "Voice\CLLA\CLLA008";
			dialog.text = DLG_TEXT[6];
			link.l1 = DLG_TEXT[7];
			link.l1.go = "begin_4";
			
		break;

                
		case "begin_4":

			dialog.snd = "Voice\CLLA\CLLA008";
			dialog.text = DLG_TEXT[8];
			link.l1 = DLG_TEXT[9];
			link.l1.go = "begin_5";
			ChangeCharacterAddressGroup(CharacterFromID("Roxanne Lalliere"), "Guadeloupe_Port", "Officers", "houseS1_1");			
			
		break;

              
                case "begin_5":


                       NextDiag.CurrentNode = NextDiag.TempNode;
		       DialogExit();
                       AddDialogExitQuest("directjail");
               		
                 break;

              case "Exit":
			DeleteAttribute(&Locations[FindLocation("StoneHouse")],"vcskip");

			DialogExit();
			NextDiag.CurrentNode = NextDiag.TempNode;
		

                       break;

		

	}
}
