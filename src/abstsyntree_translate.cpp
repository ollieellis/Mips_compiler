#include "abstsyntree.hpp"
int32_t const_::translate(){
  return value;
}
int32_t identifier::translate(){
  return symtab[id];//check
}
int32_t str_lit::translate(){
  return str;
}
int32_t identifier::translate()
  return id;
}
	//arithmetic
	int32_t plus_expr::translate(){
			int32_t Lval, Rval;
			Lval = L->translate();
			Rval = R->translate();
			value = Lval+Rval;
			//std::cout << "plus_expr: " << Lval << " + " << Rval <<" = "<< value << "\n";
			return (value);
	}
	int32_t minus_expr::translate(){
			int32_t Lval, Rval;
			Lval = L->translate();
			Rval = R->translate();
			value = Lval-Rval;
			return value;
	}
	int32_t times_expr::translate(){
			int32_t Lval, Rval;
			Lval = L->translate();
			Rval = R->translate();
			value = Lval*Rval;
			return value;
	}
	int32_t div_expr::translate(){
			int32_t Lval, Rval;
			Lval = L->translate();
			Rval = R->translate();
			value = Lval/Rval;
			return value;
	}
	void translate(nodePtr program){
	}
