//------------------ temporary code store

int32_t const_::evaluate(){
  return value;
}
int32_t identifier::evaluate(){
  return symtab[id];//check
}
int32_t str_lit::evaluate(){
  return str;
}
int32_t identifier::evaluate()
  return id;
}
	//arithmetic
	int32_t plus_expr::evaluate(){
			int32_t Lval, Rval;
			Lval = L->evaluate();
			Rval = R->evaluate();
			value = Lval+Rval;
			//std::cout << "plus_expr: " << Lval << " + " << Rval <<" = "<< value << "\n";
			return (value);
	}
	int32_t minus_expr::evaluate(){
			int32_t Lval, Rval;
			Lval = L->evaluate();
			Rval = R->evaluate();
			value = Lval-Rval;
			//std::cout << "minus_expr: " << Lval << " - " << Rval <<" = "<< value << "\n";
			return (value);
	}
	int32_t mult_expr::evaluate(){
			int32_t Lval, Rval;
			Lval = L->evaluate();
			Rval = R->evaluate();
			value = Lval*Rval;
			//std::cout << "mult_expr: " << Lval << " * " << Rval <<" = "<< value << "\n";
			return (value);
	}
	int32_t div_expr::evaluate(){
			int32_t Lval, Rval;
			Lval = L->evaluate();
			Rval = R->evaluate();
			value = Lval/Rval;
			//std::cout << "div"_expr: " << Lval << " / " << Rval <<" = "<< value << "\n";
			return (value);
	}
	void evaluate(nodePtr program){
	}
