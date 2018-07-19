#include <iostream>
#include <math.h>
#include "Complex.h"

using namespace std;

//refacerea constructorului
Complex::Complex() {
	Re = 0;
	Im = 0;
}

Complex::Complex(double x, double y) {
	Re = x;
	Im = y;
}

//functii de setare
double Complex::setRe(double re) {
	this->Re = re;
	return this->Re;
}

double Complex::setIm(double im) {
	this->Im = im;
	return this->Im;
}

//functii de return
double Complex::getRe() {
	return Re;
}

double Complex::getIm() {
	return Im;
}

Complex Complex::informatie() {
	return *this;
}

int Complex::afisare() {
	double a = Re;
	double b = Im;
	if (b == 0) {
		std::cout << a;
	}
	else {
		if (a == 0) {
			if (b >= 0) {
				if (b == 1) {
					std::cout << "i";
				}
				else {
					std::cout << "i*" << b;
				}
			}
			else {
				if (b == -1) {
					std::cout << "-i";
				}
				else {
					std::cout << "-i*" << -b;
				}
			}
		}
		else {
			if (b >= 0) {
				if (b == 1) {
					std::cout << a << "+i";
				}
				else {
					std::cout << a << "+i*" << b;
				}
			}
			else {
				if (b == -1) {
					std::cout << a << "-i";
				}
				else {
					std::cout << a << "-i*" << -b;
				}
			}
		}
	}
	return 0;
}

int Complex::citire() {
	double a, b;
	cout << "Dati partea reala : ";
	cin >> a;
	cout << endl;
	cout << "Dati partea imaginara : ";
	cin >> b;
	Re = a;
	Im = b;
	return 0;
}

//functii friend pentru operatori
//adunare
Complex operator +(Complex x) {
	return x;
}

Complex operator +(Complex x, Complex y) {
	Complex temp;
	temp.Re = x.Re + y.Re;
	temp.Im = x.Im + y.Im;
	return temp;
}

Complex operator +(Complex x, double y) {
	Complex temp;
	temp.Re = x.Re + y;
	temp.Im = x.Im;
	return temp;
}

Complex operator +(double x, Complex y) {
	Complex temp;
	temp.Re = x + y.Re;
	temp.Im = y.Im;
	return temp;
}

//scadere
Complex operator -(Complex x) {
	Complex temp;
	temp.Re = -x.Re;
	temp.Im = -x.Im;
	return temp;
}

Complex operator -(Complex x, Complex y) {
	Complex temp;
	temp.Re = x.Re - y.Re;
	temp.Im = x.Im - y.Im;
	return temp;
}

Complex operator -(Complex x, double y) {
	Complex temp;
	temp.Re = x.Re - y;
	temp.Im = x.Im;
	return temp;
}

Complex operator -(double x, Complex y) {
	Complex temp;
	temp.Re = x - y.Re;
	temp.Im = -y.Im;
	return temp;
}

//inmultire
Complex operator *(Complex x, Complex y) {
	Complex temp;
	temp.Re = x.Re * y.Re - x.Im * y.Im;
	temp.Im = x.Im * y.Re + x.Re * y.Im;
	return temp;
}

Complex operator *(Complex x, double y) {
	Complex temp;
	temp.Re = x.Re * y;
	temp.Im = x.Im * y;
	return temp;
}

Complex operator *(double x, Complex y) {
	Complex temp;
	temp.Re = x * y.Re;
	temp.Im = x * y.Im;
	return temp;
}

//impartire
Complex operator /(Complex x, Complex y) {
	Complex temp(0, 0);
	if (y.Re == 0 && y.Im == 0) {
		return temp;
	}
	temp.Re = (x.Re * y.Re + x.Im * y.Im) / (y.Re * y.Re + y.Im * y.Im);
	temp.Im = (x.Im * y.Re - x.Re * y.Im) / (y.Re * y.Re + y.Im * y.Im);
	return temp;
}

Complex operator /(Complex x, double y) {
	Complex temp(0, 0);
	if (y == 0) {
		return temp;
	}
	temp.Re = x.Re / y;
	temp.Im = x.Im / y;
	return temp;
}

Complex operator /(double x, Complex y) {
	Complex temp;
	if (y.Re == 0 && y.Im == 0) {
		return temp;
	}
	temp.Re = (x*y.Re) / (y.Re * y.Re + y.Im * y.Im);
	temp.Im = - (x*y.Im) / (y.Re * y.Re + y.Im * y.Im);
	return temp;
}

//adunare + atribuire
Complex operator +=(Complex & x, Complex y) {
	x.Re = x.Re + y.Re;
	x.Im = x.Im + y.Im;
	return x;
}

Complex operator +=(Complex & x, double y) {
	x.Re = x.Re + y;
	return x;
}

//scadere + atribuire
Complex operator -=(Complex & x, Complex y) {
	x.Re = x.Re - y.Re;
	x.Im = x.Im - y.Im;
	return x;
}

Complex operator -=(Complex & x, double y) {
	x.Re = x.Re - y;
	return x;
}

//inmultire + atribuire
Complex operator *=(Complex & x, Complex y) {
	x = x * y;
	return x;
}

Complex operator *=(Complex & x, double y) {
	x = x * y;
	return x;
}

//impartire + atribuire
Complex operator /=(Complex & x, Complex y) {
	x = x / y;
	return x;
}

Complex operator /=(Complex & x, double y) {
	x = x / y;
	return x;
}

//ridicare la putere
Complex operator ^(Complex x, int n) {
	int it;
	Complex temp(1, 0);
	if (n == 0) {
		return temp;
	}
	else {
		temp = x;
		for (it = 1; it < n; it++) {
			temp = temp * x;
		}
		return temp;
	}
}

//egalitate
bool operator ==(Complex x, Complex y) {
	
	if (x.Re == y.Re && x.Im == y.Im) {
		return true;
	}
	return false;
}

bool operator ==(Complex x, double y) {
	
	if (x.Re == y && x.Im == 0) {
		return true;
	}
	return false;
}

bool operator ==(double x, Complex y) {
	
	if (x == y.Re && y.Im == 0) {
		return true;
	}
	return false;
}

//diferit
bool operator !=(Complex x, Complex y) {
	
	if (x.Re != y.Re || x.Im != y.Im) {
		return true;
	}
	return false;
}

bool operator !=(Complex x, double y) {
	if (x.Re != y || ( x.Re == y && x.Im != 0)) {
		return true;
	}
	return false;
}

bool operator !=(double x, Complex y) {
	if (x != y.Re || ( y.Re == x &&  y.Im != 0)) {
		return true;
	}
	return false;
}

//modul
double abs(Complex x) {
	return sqrt(x.Re*x.Re + x.Im*x.Im);
}

//radical
int sqrt(Complex x, Complex & y, Complex & z) {
	double t1, t2, t3, t4;
	y.setRe(0);
	y.setIm(0);
	z.setRe(0);
	z.setIm(0);

	t1 = sqrt((x.Re + sqrt(x.Re * x.Re + x.Im * x.Im)) / 2);
	t2 = - sqrt((x.Re + sqrt(x.Re * x.Re + x.Im * x.Im)) / 2);
	t3 = sqrt(( - x.Re + sqrt(x.Re * x.Re + x.Im * x.Im)) / 2);
	t4 = - sqrt((- x.Re + sqrt(x.Re * x.Re + x.Im * x.Im)) / 2);

	if (x.Im > 0) {
		y.setRe(t1);
		y.setIm(t3);

		z.setRe(t2);
		z.setIm(t4);
	}
	else {
		y.setRe(t1);
		y.setIm(t4);

		z.setRe(t2);
		z.setIm(t3);
	}
	if (x.Re != 0 && x.Im != 0) {
		if (y.Re == 0 && y.Im == 0) {
			return 0;
		}
		if (z.Re == 0 && z.Im == 0) {
			return 0;
		}
	}
	return 1;
}