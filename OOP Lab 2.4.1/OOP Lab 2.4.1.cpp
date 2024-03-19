#include <iostream>
#include "Vector.h"
#include <string>

using namespace std;

int main() {
	Vector vector1;
	Vector vector2;

	cin >> vector1;
	cout << vector1 << endl;
	cin >> vector2;
	cout << vector2 << endl;
	vector1.Norm();
	vector2.Norm();
	cout << "Are vectors equal?: "; 
	if (vector1 == vector2) { cout <<  "yes" << endl; } 
	else cout << "no" << endl;
	cout << "Are vector1 > vector2: "; 
	if (vector1 > vector2) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "Are vector1 < vector2: "; 
	if (vector1 < vector2) { cout << "yes" << endl; }
	else cout << "no" << endl;
	vector1 = vector2;
	cout << "After vectors equals: ";
	cout << vector1 << endl;
	cout << "frst index = " << vector1[1] << endl; 
	cout << "Vector increment: "; ++vector1; cout << endl;
	cout << "Vector decrement: "; --vector1; cout << endl;
	cout << "Vector post increment: "; vector1++; cout << endl;
	cout << "Vector post decrement: "; vector1--; cout << endl;
	string();

	return 0;
}