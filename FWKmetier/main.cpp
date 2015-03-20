
#include <iostream>
#include "../FWKmetier/core/Expression.h"
#include "../FWKmetier/core/UnaryExpression.h"
#include "../FWKmetier/core/BinaryExpression.h"
#include "../FWKmetier/core/UnaryExpressionModel.h"
#include "../FWKmetier/core/BinaryExpressionModel.h"
#include "../FWKmetier/core/ValueModel.h"
#include "../FWKmetier/fuzzy/And.h"
#include "../FWKmetier/fuzzy/Andmult.h"

int main() {

	core::ValueModel<int> v1(4);
	core::ValueModel<int> v2(2);
	fuzzy::Andmult<int> am1;
	fuzzy::Andmin<int> am2;
	std::cout<<am1.evaluate(&v1,&v2);
	std::cout<< am2.evaluate(&v1,&v2);
	std::cout << "!!!Hello World!!!" << std::endl; // prints !!!Hello World!!!
	return 0;
}





