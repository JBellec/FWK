
#include <iostream>
#include "./core/Expression.h"
#include "./core/UnaryExpression.h"
#include "./core/BinaryExpression.h"
#include "./core/UnaryExpressionModel.h"
#include "./core/BinaryExpressionModel.h"
#include "./core/ValueModel.h"
#include "./fuzzy/And.h"
#include "./fuzzy/Andmult.h"

int main() {

	core::ValueModel<int> v1(4);
	core::ValueModel<int> v2(2);
	fuzzy::Andmult<int> am1;
	//fuzzy::Andmin<int> am2;
	std::cout<<am1.evaluate(&v1,&v2);
	//std::cout<< am2.evaluate(&v1,&v2);
	std::cout << "!!!Hello World!!!" << std::endl; // prints !!!Hello World!!!
	return 0;
}





