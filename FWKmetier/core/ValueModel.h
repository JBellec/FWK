#ifndef VALUEMODEL_H
#define VALUEMODEL_H
namespace core{

	template<class T>
	class ValueModel : public Expression<T>{
	public:
		ValueModel();
		ValueModel(const T);
		virtual ~ValueModel();
		virtual T evaluate()const;
		virtual void setValue(T&);
	private:
		T value;
	};

	template<class T>
	ValueModel<T>::ValueModel():
	value(0)
	{

	}

	template<class T>
	ValueModel<T>::ValueModel(T _value):
		value(_value)
	{

	}
	template<class T>
	ValueModel<T>::~ValueModel()
	{

	}

	template<class T>
	T ValueModel<T>::evaluate() const
	{
		return value;
	}

	template<class T>
	void ValueModel<T>::setValue(T& v)
	{
		value = v;
	}
}
#endif
