#pragma once
#include <iostream>
#include <string>

using namespace std;

class Vector {
private:
	static const int MAX_SIZE = 10;
	int size;
	int vector[MAX_SIZE];
public:
	Vector() : size(0) {}
	Vector(int);
	Vector(const Vector& other) {
		size = other.size;
		for (int i = 0; i < size; i++) {
			vector[i] = other.vector[i];
		}
	}
	~Vector() {
		// Нічого не робимо, так як vector має статичний розмір
	}

	void setSize(int value) { size = value; };
	int getSize() { return size; };

	int Norm();
	friend Vector& operator +(const Vector& vector1, const Vector& vector2);
	friend bool operator ==(const Vector& vector1, const Vector& vector2);
	friend bool operator >(const Vector& vector1, const Vector& vector2);
	friend bool operator <(const Vector& vector1, const Vector& vector2);
	Vector& operator ++();
	Vector& operator --();
	Vector operator ++(int);
	Vector operator --(int);
	Vector& operator = (const Vector& other);
	friend ostream& operator << (ostream&, const Vector&);
	friend istream& operator >> (istream&, Vector&);
	int& operator[](int index);
	operator string() const;

};