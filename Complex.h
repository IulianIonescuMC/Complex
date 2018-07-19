#ifndef _COMPLEX_H
#define _COMPLEX_H
 // !_COMPLEX_H

class Complex {
	//structura unui numar complex
	private:
		double Re;
		double Im;

	//operatiile necesare pe numere complexe
	public:
		//refacerea constructorului
		Complex();
		Complex(double re, double im);

		//functii de setare
		double setRe(double re);
		double setIm(double im);

		//functii de return
		double getRe();
		double getIm();
		Complex informatie();
		int afisare();
		int citire();

	//functii friend pentru operatori
		//adunare
		friend Complex operator +(Complex x, Complex y);
		friend Complex operator +(Complex x, double y);
		friend Complex operator +(double x, Complex y);
		friend Complex operator +(Complex x);

		//scadere
		friend Complex operator -(Complex x, Complex y);
		friend Complex operator -(Complex x, double y);
		friend Complex operator -(double x, Complex y);
		friend Complex operator -(Complex x);

		//inmultire
		friend Complex operator *(Complex x, Complex y);
		friend Complex operator *(Complex x, double y);
		friend Complex operator *(double x, Complex y);

		//impartire
		friend Complex operator /(Complex x, Complex y);
		friend Complex operator /(Complex x, double y);
		friend Complex operator /(double x, Complex y);

		//adunare + atribuire
		friend Complex operator +=(Complex & x, Complex y);
		friend Complex operator +=(Complex & x, double y);

		//scadere + atribuire
		friend Complex operator -=(Complex & x, Complex y);
		friend Complex operator -=(Complex & x, double y);

		//inmultire + atribuire
		friend Complex operator *=(Complex & x, Complex y);
		friend Complex operator *=(Complex & x, double y);

		//impartire + atribuire
		friend Complex operator /=(Complex & x, Complex y);
		friend Complex operator /=(Complex & x, double y);

		//ridicare la putere
		friend Complex operator ^(Complex x, int n);

		//egalitate
		friend bool operator ==(Complex x, Complex y);
		friend bool operator ==(Complex x, double y);
		friend bool operator ==(double x, Complex y);

		//diferit
		friend bool operator !=(Complex x, Complex y);
		friend bool operator !=(Complex x, double y);
		friend bool operator !=(double x, Complex y);

		//modul
		friend double abs(Complex x);

		//radical
		friend int sqrt(Complex x, Complex & y, Complex & z);
};

#endif