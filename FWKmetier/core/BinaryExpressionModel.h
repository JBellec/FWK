#ifndef BINARYEXPRESSIONMODEL_H
#define BINARYEXPRESSIONMODEL_H
#include "Expression.h"
#include "BinaryExpression.h"

namespace core{

	template<class T>
	class BinaryExpressionModel{
	public:
		BinaryExpressionModel();
		BinaryExpressionModel(const T*);
		virtual ~BinaryExpressionModel();
		virtual T evaluate()const;
		virtual T evaluate(Expression<T>*, Expression<T>*)const;

	private:
		Expression<T> left,right;
		BinaryExpression<T> op;
	};


	template<class T>
	BinaryExpressionModel<T>::BinaryExpressionModel()
	{
	}

	template<class T>
	BinaryExpressionModel<T>::BinaryExpressionModel(const T* e)
	{
	}

	template<class T>
	BinaryExpressionModel<T>::~BinaryExpressionModel()
	{
	}

	template<class T>
	T BinaryExpressionModel<T>::evaluate()const
	{
		if (left != NULL && right!=NULL) return evaluate(left,right);
	}

	template<class T>
	T BinaryExpressionModel<T>::evaluate(Expression<T>* l, Expression<T>* r)const
	{
		if (op != NULL) return op.evaluate(l,r);
	}

}
#endif
