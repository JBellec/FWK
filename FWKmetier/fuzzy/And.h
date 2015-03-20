/*
 * and.h
 *
 *  Created on: 18 mars 2015
 *      Author: Julien
 */

#ifndef FUZZY_AND_H_
#define FUZZY_AND_H_
#include "../core/UnaryExpression.h"
#include "../core/BinaryExpression.h"


namespace fuzzy{
	template<class T>
	class And: public core::BinaryExpression<T>{

	};
}



#endif /* FUZZY_AND_H_ */
