#include <iostream>
using namespace std;

class Fraction {
private:
	const int num, den;
public:
	Fraction(int n, int d) : num(n), den(d) {
		if (den == 0)
			throw "tantrum";
	}
	Fraction(int n) : num(n), den(1) {}
	Fraction() : num(0), den(1)  {}
	void print() {
		cout << num << "/" << den;
	}
};


int main() {
	Fraction a(1,2);
	a.print();
	Fraction b(1,3);
	b.print();
	Fraction c(3); // 3/1
	c.print();
	
	Fraction d; // call the constructor with no parameters
	d.print();
	Fraction e(); // e is a function that returns Fractions
	//	e.print();

}
