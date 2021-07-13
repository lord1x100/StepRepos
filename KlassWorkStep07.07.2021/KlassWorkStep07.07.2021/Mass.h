#pragma once
#include <iostream>
#include <ctime>
using namespace std;

template<typename T>
class ArrayTemp
{
private:
	T* mass = NULL;
	int size = 0;
public:
	ArrayTemp(int = 0);

	friend ostream& operator<<(ostream& out, ArrayTemp& arr)
	{
		try
		{
			if (arr.mass == NULL)
				throw invalid_argument("null mass argument");
			for (int i = 0; i < arr.size; i++)
			{
				out << arr.mass[i] << " ";
			}
			out << endl;
			return out;
		}
		catch (exception& exp)
		{
			cout << "Input error: " << exp.what() << endl;
		}
	}
	void Insert(T value, int index = 0);
	int GetSize() {
		return size;
	}
	/*void Push(T value, int index);*/
	T Remove(int index);

	//~ArrayTemp();

};

