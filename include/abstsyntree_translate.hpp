//------------------ temporary code store

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
			//std::cout << "minus_expr: " << Lval << " - " << Rval <<" = "<< value << "\n";
			return (value);
	}
	int32_t mult_expr::translate(){
			int32_t Lval, Rval;
			Lval = L->translate();
			Rval = R->translate();
			value = Lval*Rval;
			//std::cout << "mult_expr: " << Lval << " * " << Rval <<" = "<< value << "\n";
			return (value);
	}
	int32_t div_expr::translate(){
			int32_t Lval, Rval;
			Lval = L->translate();
			Rval = R->translate();
			value = Lval/Rval;
			//std::cout << "div"_expr: " << Lval << " / " << Rval <<" = "<< value << "\n";
			return (value);
	}
	void translate(nodePtr program){
	}
