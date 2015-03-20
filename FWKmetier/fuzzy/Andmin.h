/*
 * Andmin.h
 *
 *  Created on: 19 mars 2015
 *      Author: Julien
 */

#ifndef FUZZY_ANDMIN_H_
#define FUZZY_ANDMIN_H_
#include "../core/Expression.h"

namespace fuzzy{
	template<class T>
	class Andmin : public And<T>{
	public:
		Andmin();

		virtual T evaluate(core::Expression<T>*, core::Expression<T>*)const;

	};

	template<class T>
	Andmin<T>::Andmin()
	{}

	template<class T>
	T Andmin<T>::evaluate(core::Expression<T>* l, core::Expression<T>* r)const
	{
		T left = l->evaluate();
		T right = r->evaluate();

		if(left<rigth)
			return left;
		else
			return right;
	}
}



#endif /* FUZZY_ANDMIN_H_ */
