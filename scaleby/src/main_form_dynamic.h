#ifndef main_form_dynamic_H
#define main_form_dynamic_H
//---------------------------------------------------------------------------
#include <vcl.h>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class t_my_form1: public TCustomForm{
	private:

	TLabel* l_number;
	TEdit* e_number;
	TBitBtn *bb_ok, *bb_cancel;

public:
	__fastcall t_my_form1(TComponent* Owner, int dummy_param);
	// Note the dummy_param.
	// It is critical to have it if you want to create forms dynamically
};
//---------------------------------------------------------------------------

#endif
