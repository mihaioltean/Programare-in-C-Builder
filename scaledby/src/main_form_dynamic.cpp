#include "main_form_dynamic.h"
//---------------------------------------------------------------------------
__fastcall t_my_form1::t_my_form1(TComponent* Owner, int a):
	TCustomForm(Owner, a)
{
	Caption = "ScaleBy example";
	BorderStyle = bsDialog;

	int scaled_margin = MulDiv(10, Screen->PixelsPerInch, 96);

	l_number = new TLabel(this);
	l_number->Parent = this;
	l_number->Top = scaled_margin;
	l_number->Left = scaled_margin;
	l_number->Width = 75;
	l_number->Caption = "Enter a number";

	e_number = new TEdit(this);
	e_number->Parent = this;
	e_number->Top = scaled_margin;
	e_number->Left = scaled_margin + l_number->Width + scaled_margin;
	e_number->Width = 75;
	e_number->Text = "100";
	e_number->ScaleBy(Screen->PixelsPerInch, 96);


	bb_ok = new TBitBtn(this);
	bb_ok->Parent = this;
	bb_ok->Top = e_number->Top + e_number->Height + scaled_margin;
	bb_ok->Left = scaled_margin;
	bb_ok->Kind = bkOK;
	bb_ok->ScaleBy(Screen->PixelsPerInch, 96);

	bb_cancel = new TBitBtn(this);
	bb_cancel->Parent = this;
	bb_cancel->Top = e_number->Top + e_number->Height + scaled_margin;
	bb_cancel->Left = scaled_margin + bb_ok->Width + scaled_margin;
	bb_cancel->Kind = bkCancel;
	bb_cancel->ScaleBy(Screen->PixelsPerInch, 96);

	ClientWidth = scaled_margin + bb_ok->Width + scaled_margin + bb_cancel->Width + scaled_margin;

	ClientHeight = bb_ok->Top + bb_ok->Height + scaled_margin;
}
//---------------------------------------------------------------------------

