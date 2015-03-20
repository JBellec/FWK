#ifndef UNARYEXPRESSIONMODEL_H
#define UNARYEXPRESSIONMODEL_H
#include "Expression.h"
#include "UnaryExpression.h"

namespace core{

	template<class T>
	class UnaryExpressionModel{
	public:
		UnaryExpressionModel();
		UnaryExpressionModel(const T*);
		virtual ~UnaryExpressionModel();
		virtual T evaluate()const;
		virtual T evaluate(Expression<T>* o)const;

	private:
		Expression<T> operand;
		UnaryExpression<T> op;
	};


	template<class T>
	UnaryExpressionModel<T>::UnaryExpressionModel()
	{
	}

	template<class T>
	UnaryExpressionModel<T>::UnaryExpressionModel(const T* e)
	{
	}

	template<class T>
	UnaryExpressionModel<T>::~UnaryExpressionModel()
	{
	}

	template<class T>
	T UnaryExpressionModel<T>::evaluate()const
	{
		if (operand != NULL) return evaluate(operand);
	}

	template<class T>
	T UnaryExpressionModel<T>::evaluate(Expression<T>* o)const
	{
		if (op != NULL){
			return op.evaluate(o);
		}
	}

}
#endif
