//---------------------------------------------------------------------------

#ifndef AddingH
#define AddingH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TAddingRecordForm : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAddingRecordForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAddingRecordForm *AddingRecordForm;
//---------------------------------------------------------------------------
#endif
