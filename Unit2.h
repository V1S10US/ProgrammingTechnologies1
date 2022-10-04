//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TAboutFrame : public TFrame
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
private:	// User declarations
public:		// User declarations
	__fastcall TAboutFrame(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAboutFrame *AboutFrame;
//---------------------------------------------------------------------------
#endif
