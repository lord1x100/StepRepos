#include <iostream>
#include "Mass.h"
#include "Mass.cpp"

int main()
{
	try {
		srand(time(NULL));
		ArrayTemp<int> myMass(5);
		cout << myMass;
		myMass.Insert(0, 1);
		myMass.Insert(2, 0);
		myMass.Insert(4, 5);
		cout << myMass;
		myMass.Remove(0);
		myMass.Remove(1);
		myMass.Remove(5);
		cout << myMass;

	}
	catch (exception& exp)
	{
		cout << exp.what() << endl;
	}
}