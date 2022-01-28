#include "main_form_dynamic.h"
#include "res.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------
__fastcall t_my_form1::t_my_form1(TComponent* Owner, int a):TCustomForm(Owner, a)
{
	Caption = "Base example";

	button1 = new TBitBtn(this);
	button1->Parent = this;
	button1->Top = 100;
	button1->Left = 100;
	button1->Caption = "Hello";
	button1->OnClick = button1_on_click;
}
//---------------------------------------------------------------------------
void __fastcall t_my_form1::button1_on_click(System::TObject* Sender)
{
	ShowMessage("Hello world!");
}
//---------------------------------------------------------------------------