/*
 * andmult.h
 *
 *  Created on: 19 mars 2015
 *      Author: Julien
 */

#ifndef FUZZY_ANDMULT_H_
#define FUZZY_ANDMULT_H_
#include "../core/Expression.h"

namespace fuzzy{
	template<class T>
	class Andmult : public And<T>{
	public:
		Andmult();

		virtual T evaluate(core::Expression<T>*, core::Expression<T>*)const;

	};

	template<class T>
	Andmult<T>::Andmult()
	{}

	template<class T>
	T Andmult<T>::evaluate(core::Expression<T>* l, core::Expression<T>* r)const
	{
		T left = l->evaluate();
		T right = r->evaluate();
		return left*right;
	}
}



#endif /* FUZZY_ANDMULT_H_ */
