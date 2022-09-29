//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ToolWin.hpp>
#include <Vcl.CustomizeDlg.hpp>

//
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *StringGrid1;
	TMainMenu *MainMenu1;
	TMenuItem *Open1;
	TMenuItem *Open2;
	TMenuItem *Search1;
	TMenuItem *Open3;
	TMenuItem *New1;
	TMenuItem *AddRecord;
	TMenuItem *Add2;
	TMenuItem *Edit1;
	TMenuItem *SearchByField1;
	TMenuItem *SearchByField2;
	TMenuItem *About1;
	TOpenDialog *OpenDialog1;
	TMenuItem *Exit2;
	TOpenDialog *NewDialog;
	TOpenDialog *OpenDialog2;
	TSaveDialog *SaveDialog1;
	TMenuItem *Save1;
	void __fastcall Open3Click(TObject *Sender);
	void __fastcall AddRecordClick(TObject *Sender);
	void __fastcall About1Click(TObject *Sender);
	void __fastcall New1Click(TObject *Sender);
	void __fastcall Exit2Click(TObject *Sender);
	void __fastcall Save1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
