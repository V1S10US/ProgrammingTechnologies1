//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Adding.h"
#include "Core.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAddingRecordForm *AddingRecordForm;
//---------------------------------------------------------------------------
__fastcall TAddingRecordForm::TAddingRecordForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAddingRecordForm::Button1Click(TObject *Sender)
{
	AnsiString name, brand, seats, mileage;
	name = Edit1->Text;
	brand = Edit2->Text;
	seats = Edit3->Text;
	mileage = Edit4->Text;

	FileRecord temp_rec;


	strcpy(temp_rec.car_name, name.c_str());
	temp_rec.car_name[name.Length() + 1]  = '\0';

	strcpy(temp_rec.car_brand, brand.c_str());
	temp_rec.car_brand[brand.Length() + 1]  = '\0';

	//strcpy(temp_rec.num_seats, seats.c_str());
	temp_rec.num_seats = seats.ToInt();
//	temp_rec.num_seats[seats.Length() + 1]  = '\0';

	//strcpy(temp_rec.mileage, mileage.c_str());
//	temp_rec.mileage[mileage.Length() + 1]  = '\0';
	temp_rec.mileage = mileage.ToDouble();
    temp_rec.next = -1;


	AddRecord(temp_rec);

	Edit1->Text = "";
	Edit2->Text = "";
	Edit3->Text = "";
	Edit4->Text = "";

	Close();
}
//---------------------------------------------------------------------------
void __fastcall TAddingRecordForm::CancelButtonClick(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------

