#include "Mass.h"

template<typename T>
inline ArrayTemp<T>::ArrayTemp(int _size)
{
	try 
	{
		if (size < 0 || size>10000000000000)
			throw invalid_argument("Bad argument size: should be >= 0 and < 10000000000000");
		this->size = _size;
		this->mass = new T[_size];
	}
	catch (exception& exp)
	{
		cout << exp.what() << endl;
	}
	
}

template<typename T>
void ArrayTemp<T>::Insert(T value, int index)
{
	try
	{
		if (index<0 || index>this->size)
			throw out_of_range("index < 0 or > size of mass");
		T* helpMass = new T[this->size + 1];
		int i = 0;
		for (; i < index; i++)
		{
			helpMass[i] = this->mass[i];
		}
		helpMass[i++] = value;
		for (; i < this->size; i++)
		{
			helpMass[i] = this->mass[i];
		}
		delete[] this->mass;
		this->mass = helpMass;
		this->size++;
	}
	catch (exception& exp)
	{
		cout << "Insert error: " << exp.what() << endl;
	}
}

//template<typename T>
//void ArrayTemp<T>::Push(T value, int index)
//{
//}

template<typename T>
T ArrayTemp<T>::Remove(int index)
{
	try
	{
		if (index<0 || index>this->size)
			throw out_of_range("index < 0 or > size of mass");
		T* helpMass = new T[this->size + 1];
		int i = 0;
		for (; i < index; i++)
		{
			helpMass[i] = this->mass[i];
		}
		for (; i < this->size-1; i++)
		{
			helpMass[i] = this->mass[i+1];
		}
		T help = this->mass[index];
		delete[] this->mass;
		this->mass = helpMass;
		this->size--;

		return help;
	}
	catch (exception& exp)
	{
		cout << "Remove error: " << exp.what() << endl;
		throw;
	}
}

//template<typename T>
//ArrayTemp<T>::~ArrayTemp()
//{
//}

