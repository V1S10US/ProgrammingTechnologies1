//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FileCreationForm.h"
#include "Core.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFileCreator *FileCreator;
//---------------------------------------------------------------------------
__fastcall TFileCreator::TFileCreator(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFileCreator::Button1Click(TObject *Sender)
{
	AnsiString new_filename = Edit1->Text;
	char c_filename[150];

	new_filename = new_filename + ".bin";

	strcpy(c_filename, new_filename.c_str());

    *FILENAME = *c_filename;
	AddFile(c_filename);
	//OpenFile(c_filename);

	Close();
}
//---------------------------------------------------------------------------
