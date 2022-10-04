//---------------------------------------------------------------------------

#ifndef FileCreationFormH
#define FileCreationFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFileCreator : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TEdit *Edit1;
	TButton *CreateButton;
	TButton *CancelButton;
	void __fastcall CreateButtonClick(TObject *Sender);
	void __fastcall CancelButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFileCreator(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFileCreator *FileCreator;
//---------------------------------------------------------------------------
#endif
