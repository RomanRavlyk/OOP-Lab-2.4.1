#include <iostream>
#include "Vector.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

int Vector::Norm(){
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += pow(vector[i], 2);
	}
	return sqrt(sum);
}

bool operator==(const Vector & vector1, const Vector & vector2) {
	if (vector1.size != vector2.size) {
		return false;
	}

	for (int i = 0; i < vector1.size; ++i) {
		if (vector1.vector[i] != vector2.vector[i]) {
			return false;
		}
	}

	return true;
}

bool operator<(const Vector& vector1, const Vector& vector2) {
	return vector1.size < vector2.size;
}

bool operator>(const Vector& vector1, const Vector& vector2) {
	return vector1.size > vector2.size;
}

Vector& Vector::operator=(const Vector& other) {
	if (this != &other) {
		size = other.size;
		for (int i = 0; i < size; ++i) {
			vector[i] = other.vector[i];
		}
	}
	return *this;
}

Vector& operator +(const Vector& vector1, const Vector& vector2) {
	Vector result(vector1);
	for (int i = 0; i < result.size; ++i) {
		result.vector[i] += vector2.vector[i];
	}
	return result;
}

Vector& Vector::operator ++() {
	for (int i = 0; i < size; ++i) {
		vector[i]++;
		cout << " " << vector[i];
	}
	return *this;
}

Vector& Vector::operator --() {
	for (int i = 0; i < size; ++i) {
		vector[i]--;
		cout << " " << vector[i];
	}
	return *this;
}

Vector Vector::operator ++(int)
{
	Vector t(*this);
	cout << getSize() + 1;
	return t;
}

Vector Vector::operator --(int)
{
	Vector t(*this);
	cout << getSize() - 1;
	return t;
}

ostream& operator << (ostream& out, const Vector& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Vector& r)
{
	cout << " Enter size = "; in >> r.size;
	
	for (int i = 0; i < r.size; i++) {
		cout << "Enter vector Elements: ";
		in >> r.vector[i];
	}
	
	cout << endl;
	return in;
}

Vector::operator string() const {
	stringstream ss;
	ss << "Your array: ";
	for (int i = 0; i < size; i++) {
		ss << vector[i] << " ";
	}
	ss << endl;
	return ss.str();
}


int& Vector::operator[](int index) {
	return vector[index];
}
