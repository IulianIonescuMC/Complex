#include <iostream>
#include "Complex.h"

using namespace std;

int rezolvare_ecuatie(Complex a, Complex b, Complex c);
int rezolvare_ecuatie(Complex a, Complex b, double c);
int rezolvare_ecuatie(Complex a, double b, Complex c);
int rezolvare_ecuatie(Complex a, double b, double c);
int rezolvare_ecuatie(double a, Complex b, Complex c);
int rezolvare_ecuatie(double a, Complex b, double c);
int rezolvare_ecuatie(double a, double b, Complex c);
int rezolvare_ecuatie(double a, double b, double c);

int main() {

	int dec;
	cout << "Rezolvarea ecuatiei de gradul II cu coeficienti complecsi : " << endl;
	cout << "Dati coeficientii ecuatiei : " << endl;
	cout << "Coficientul lui x^2 este de tip : " << endl;
	cout << "- real (apasati 1);" << endl;
	cout << "- complex (apasati 2);" << endl;
	cin >> dec;
	if (dec == 1) {
		// a - real
		double a1;
		cout << "Dati valoarea lui a : ";
		cin >> a1;
		cout << endl;
		cout << "Coficientul lui x^1 este de tip : " << endl;
		cout << "- real (apasati 1);" << endl;
		cout << "- complex (apasati 2);" << endl;
		cin >> dec;
		if (dec == 1) {
			// b - real
			double b1;
			cout << "Dati valoarea lui b : ";
			cin >> b1;
			cout << endl;
			cout << "Coficientul lui x^0 este de tip : " << endl;
			cout << "- real (apasati 1);" << endl;
			cout << "- complex (apasati 2);" << endl;
			cin >> dec;
			if (dec == 1) {
				// c - real
				double c1;
				cout << "Dati valoarea lui c : ";
				cin >> c1;
				rezolvare_ecuatie(a1, b1, c1);
			}
			else {
				if (dec == 2) {
					// c - complex
					Complex c2;
					double x;
					cout << "Dati partea reala a lui c : ";
					cin >> x;
					c2.setRe(x);
					cout << "Dati partea imaginara a lui c : ";
					cin >> x;
					c2.setIm(x);
					rezolvare_ecuatie(a1, b1, c2);
				}
				else {
					cout << "Comanda incorecta !" << endl;
					exit(0);
				}
			}
			cout << endl;
		}
		else {
			if (dec == 2) {
				// b - complex
				Complex b2;
				double x;
				cout << "Dati partea reala a lui b : ";
				cin >> x;
				b2.setRe(x);
				cout << "Dati partea imaginara a lui b : ";
				cin >> x;
				b2.setIm(x);
				cout << endl;
				cout << "Coficientul lui x^0 este de tip : " << endl;
				cout << "- real (apasati 1);" << endl;
				cout << "- complex (apasati 2);" << endl;
				cin >> dec;
				if (dec == 1) {
					// c - real
					double c3;
					cout << "Dati valoarea lui c : ";
					cin >> c3;
					rezolvare_ecuatie(a1, b2, c3);
				}
				else {
					if (dec == 2) {
						// c - complex
						Complex c4;
						double x;
						cout << "Dati partea reala a lui c : ";
						cin >> x;
						c4.setRe(x);
						cout << "Dati partea imaginara a lui c : ";
						cin >> x;
						c4.setIm(x);
						rezolvare_ecuatie(a1, b2, c4);
					}
					else {
						cout << "Comanda incorecta !" << endl;
						exit(0);
					}
				}
				cout << endl;
			}
			else {
				cout << "Comanda incorecta !" << endl;
				exit(0);
			}
		}
	}
	else {
		if (dec == 2) {
			// a - complex
			Complex a2;
			double x;
			cout << "Dati partea reala a lui a : ";
			cin >> x;
			a2.setRe(x);
			cout << "Dati partea imaginara a lui a : ";
			cin >> x;
			a2.setIm(x);
			cout << endl;
			cout << "Coficientul lui x^1 este de tip : " << endl;
			cout << "- real (apasati 1);" << endl;
			cout << "- complex (apasati 2);" << endl;
			cin >> dec;
			if (dec == 1) {
				// b - real
				double b3;
				cout << "Dati valoarea lui b : ";
				cin >> b3;
				cout << endl;
				cout << "Coficientul lui x^0 este de tip : " << endl;
				cout << "- real (apasati 1);" << endl;
				cout << "- complex (apasati 2);" << endl;
				cin >> dec;
				if (dec == 1) {
					//c - real
					double c5;
					cout << "Dati valoarea lui c : ";
					cin >> c5;
					rezolvare_ecuatie(a2, b3, c5);
				}
				else {
					if (dec == 2) {
						// c - complex
						Complex c6;
						double x;
						cout << "Dati partea reala a lui c : ";
						cin >> x;
						c6.setRe(x);
						cout << "Dati partea imaginara a lui c : ";
						cin >> x;
						c6.setIm(x);
						rezolvare_ecuatie(a2, b3, c6);
					}
					else {
						cout << "Comanda incorecta !" << endl;
						exit(0);
					}
				}
			}
			else {
				if (dec == 2) {
					// b - complex
					Complex b4;
					double x;
					cout << "Dati partea reala a lui b : ";
					cin >> x;
					b4.setRe(x);
					cout << "Dati partea imaginara a lui b : ";
					cin >> x;
					b4.setIm(x);
					cout << endl;
					cout << "Coficientul lui x^0 este de tip : " << endl;
					cout << "- real (apasati 1);" << endl;
					cout << "- complex (apasati 2);" << endl;
					cin >> dec;
					if (dec == 1) {
						//c - real
						double c7;
						cout << "Dati valoarea lui c : ";
						cin >> c7;
						rezolvare_ecuatie(a2, b4, c7);
					}
					else {
						if (dec == 2) {
							//c - complex
							Complex c8;
							double x;
							cout << "Dati partea reala a lui c : ";
							cin >> x;
							c8.setRe(x);
							cout << "Dati partea imaginara a lui c : ";
							cin >> x;
							c8.setIm(x);
							rezolvare_ecuatie(a2, b4, c8);
						}
						else {
							cout << "Comanda incorecta !" << endl;
							exit(0);
						}
					}
				}
				else {
					cout << "Comanda incorecta !" << endl;
					exit(0);
				}
			}
		}
		else {
			cout << "Comanda incorecta !" << endl;
			exit(0);
		}
	}

	cout << endl << " Olla world !!! " << endl;
	//system("pause");
	return 0;
}

// rezolvare complex - complex - complex
int rezolvare_ecuatie(Complex a, Complex b, Complex c) {
	if (a == 0 && b == 0) {
		cout << "Se reduce la coficientul c = 0" << endl;
		if (c == 0) {
			cout << "Exista o infinitate de solutii\n";
		}
		else {
			cout << "Nu are solutii !!!\n";
		}
	}
	else {
		if (a == 0) {
			Complex x;
			cout << "Avem o ecutatie de gradul I " << endl;
			x = -c / b;
			cout << "Solutia este : " << endl;
			x.afisare();
		}
		else {
			if (b == 0) {
				Complex x, y, z;
				cout << "Avem o ecuatie simpla, patratica " << endl;
				x = -c / a;
				sqrt(x, y, z);
				cout << "Solutiile sunt :" << endl;
				y.afisare();
				cout << endl;
				z.afisare();
			}
			else {
				cout << "Avem o ecuatie de gradul II" << endl;
				Complex D;
				Complex z1, z2;
				Complex x, y;
				D = (b * b) - (4 * a * c);
				sqrt(D, x, y);
				z1 = (-b + x) / (2 * a);
				z2 = (-b + y) / (2 * a);
				cout << "Solutiile sunt :" << endl;
				z1.afisare();
				cout << endl;
				z2.afisare();
			}
		}
	}
	return 1;
}

// rezolvare complex - complex - double
int rezolvare_ecuatie(Complex a, Complex b, double c) {
	if ((a == 0) && (b == 0)) {
		cout << "Se reduce la coficientul c = 0" << endl;
		if (c == 0) {
			cout << "Exista o infinitate de solutii\n";
		}
		else {
			cout << "Nu are solutii !!!\n";
		}
	}
	else {
		if (a == 0) {
			Complex x;
			cout << "Avem o ecutatie de gradul I " << endl;
			c = -c;
			x = c / b;
			cout << "Solutia este : " << endl;
			x.afisare();
		}
		else {
			if (b == 0) {
				Complex x, y, z;
				cout << "Avem o ecuatie simpla, patratica " << endl;
				c = -c;
				x = c / a;
				sqrt(x, y, z);
				cout << "Solutiile sunt :" << endl;
				y.afisare();
				cout << endl;
				z.afisare();
			}
			else {
				cout << "Avem o ecuatie de gradul II" << endl;
				Complex D;
				Complex z1, z2;
				Complex x, y;
				D = (b * b) - (4 * a * c);
				sqrt(D, x, y);
				z1 = (-b + x) / (2 * a);
				z2 = (-b + y) / (2 * a);
				cout << "Solutiile sunt :" << endl;
				z1.afisare();
				cout << endl;
				z2.afisare();
			}
		}
	}
	return 1;
}

// rezolvare complex - double - complex
int rezolvare_ecuatie(Complex a, double b, Complex c) {
	if ((a == 0) && (b == 0)) {
		cout << "Se reduce la coficientul c = 0" << endl;
		if (c == 0) {
			cout << "Exista o infinitate de solutii\n";
		}
		else {
			cout << "Nu are solutii !!!\n";
		}
	}
	else {
		if (a == 0) {
			Complex x;
			cout << "Avem o ecutatie de gradul I " << endl;
			c = -c;
			x = c / b;
			cout << "Solutia este : " << endl;
			x.afisare();
		}
		else {
			if (b == 0) {
				Complex x, y, z;
				cout << "Avem o ecuatie simpla, patratica " << endl;
				c = -c;
				x = c / a;
				sqrt(x, y, z);
				cout << "Solutiile sunt :" << endl;
				y.afisare();
				cout << endl;
				z.afisare();
			}
			else {
				cout << "Avem o ecuatie de gradul II" << endl;
				Complex D;
				Complex z1, z2;
				Complex x, y;
				D = (b * b) - (4 * a * c);
				sqrt(D, x, y);
				z1 = (-b + x) / (2 * a);
				z2 = (-b + y) / (2 * a);
				cout << "Solutiile sunt :" << endl;
				z1.afisare();
				cout << endl;
				z2.afisare();
			}
		}
	}
	return 1;
}

// rezolvare complex - double - double
int rezolvare_ecuatie(Complex a, double b, double c) {
	if ((a == 0) && (b == 0)) {
		cout << "Se reduce la coficientul c = 0" << endl;
		if (c == 0) {
			cout << "Exista o infinitate de solutii\n";
		}
		else {
			cout << "Nu are solutii !!!\n";
		}
	}
	else {
		if (a == 0) {
			double x;
			cout << "Avem o ecutatie de gradul I " << endl;
			c = -c;
			x = c / b;
			cout << "Solutia este : " << endl;
			cout << x << endl;
		}
		else {
			if (b == 0) {
				Complex x, y, z;
				cout << "Avem o ecuatie simpla, patratica " << endl;
				c = -c;
				x = c / a;
				sqrt(x, y, z);
				cout << "Solutiile sunt :" << endl;
				y.afisare();
				cout << endl;
				z.afisare();
			}
			else {
				cout << "Avem o ecuatie de gradul II" << endl;
				Complex D;
				Complex z1, z2;
				Complex x, y;
				D = (b * b) - (4 * a * c);
				sqrt(D, x, y);
				z1 = (-b + x) / (2 * a);
				z2 = (-b + y) / (2 * a);
				cout << "Solutiile sunt :" << endl;
				z1.afisare();
				cout << endl;
				z2.afisare();
			}
		}
	}
	return 1;
}

// rezolvare double - complex - complex
int rezolvare_ecuatie(double a, Complex b, Complex c) {
	if ((a == 0) && (b == 0)) {
		cout << "Se reduce la coficientul c = 0" << endl;
		if (c == 0) {
			cout << "Exista o infinitate de solutii\n";
		}
		else {
			cout << "Nu are solutii !!!\n";
		}
	}
	else {
		if (a == 0) {
			Complex x;
			cout << "Avem o ecutatie de gradul I " << endl;
			c = -c;
			x = c / b;
			cout << "Solutia este : " << endl;
			x.afisare();
		}
		else {
			if (b == 0) {
				Complex x, y, z;
				cout << "Avem o ecuatie simpla, patratica " << endl;
				c = -c;
				x = c / a;
				sqrt(x, y, z);
				cout << "Solutiile sunt :" << endl;
				y.afisare();
				cout << endl;
				z.afisare();
			}
			else {
				cout << "Avem o ecuatie de gradul II" << endl;
				Complex D;
				Complex z1, z2;
				Complex x, y;
				D = (b * b) - (4 * a * c);
				sqrt(D, x, y);
				z1 = (-b + x) / (2 * a);
				z2 = (-b + y) / (2 * a);
				cout << "Solutiile sunt :" << endl;
				z1.afisare();
				cout << endl;
				z2.afisare();
			}
		}
	}
	return 1;
}

// rezolvare double - complex - double
int rezolvare_ecuatie(double a, Complex b, double c) {
	if ((a == 0) && (b == 0)) {
		cout << "Se reduce la coficientul c = 0" << endl;
		if (c == 0) {
			cout << "Exista o infinitate de solutii\n";
		}
		else {
			cout << "Nu are solutii !!!\n";
		}
	}
	else {
		if (a == 0) {
			Complex x;
			cout << "Avem o ecutatie de gradul I " << endl;
			c = -c;
			x = c / b;
			cout << "Solutia este : " << endl;
			x.afisare();
		}
		else {
			if (b == 0) {
				double x;
				Complex y, z;
				cout << "Avem o ecuatie simpla, patratica " << endl;
				c = -c;
				x = c / a;
				sqrt(x);
				cout << "Solutiile sunt :" << endl;
				cout << x;
				cout << endl;
				cout << -x;
			}
			else {
				cout << "Avem o ecuatie de gradul II" << endl;
				Complex D;
				Complex z1, z2;
				Complex x, y;
				D = (b * b) - (4 * a * c);
				sqrt(D, x, y);
				z1 = (-b + x) / (2 * a);
				z2 = (-b + y) / (2 * a);
				cout << "Solutiile sunt :" << endl;
				z1.afisare();
				cout << endl;
				z2.afisare();
			}
		}
	}
	return 1;
}

// rezolvare double - double - complex
int rezolvare_ecuatie(double a, double b, Complex c) {
	if ((a == 0) && (b == 0)) {
		cout << "Se reduce la coficientul c = 0" << endl;
		if (c == 0) {
			cout << "Exista o infinitate de solutii\n";
		}
		else {
			cout << "Nu are solutii !!!\n";
		}
	}
	else {
		if (a == 0) {
			Complex x;
			cout << "Avem o ecutatie de gradul I " << endl;
			c = -c;
			x = c / b;
			cout << "Solutia este : " << endl;
			x.afisare();
		}
		else {
			if (b == 0) {
				Complex x, y, z;
				cout << "Avem o ecuatie simpla, patratica " << endl;
				c = -c;
				x = c / a;
				sqrt(x, y, z);
				cout << "Solutiile sunt :" << endl;
				y.afisare();
				cout << endl;
				z.afisare();
			}
			else {
				cout << "Avem o ecuatie de gradul II" << endl;
				Complex D;
				Complex z1, z2;
				Complex x, y;
				D = (b * b) - (4 * a * c);
				sqrt(D, x, y);
				z1 = (-b + x) / (2 * a);
				z2 = (-b + y) / (2 * a);
				cout << "Solutiile sunt :" << endl;
				z1.afisare();
				cout << endl;
				z2.afisare();
			}
		}
	}
	return 1;
}

// rezolvare double - double - double
int rezolvare_ecuatie(double a, double b, double c) {
	if ((a == 0) && (b == 0)) {
		cout << "Se reduce la coficientul c = 0" << endl;
		if (c == 0) {
			cout << "Exista o infinitate de solutii\n";
		}
		else {
			cout << "Nu are solutii !!!\n";
		}
	}
	else {
		if (a == 0) {
			double x;
			cout << "Avem o ecutatie de gradul I " << endl;
			c = -c;
			x = c / b;
			cout << "Solutia este : " << endl;
			cout << x << endl;
		}
		else {
			if (b == 0) {
				double x;
				cout << "Avem o ecuatie simpla, patratica " << endl;
				c = -c;
				x = c / a;
				if (x < 0) {
					x = -x;
				}
				x = sqrt(x);
				cout << "Solutiile sunt :" << endl;
				cout << x;
				cout << endl;
				cout << -x;
			}
			else {
				cout << "Avem o ecuatie de gradul II" << endl;
				double D;
				double z1, z2;
				double x;
				D = b * b - 4 * a * c;
				if (D >= 0) {
					x = sqrt(D);
					z1 = (-b + x) / (2 * a);
					z2 = (-b - x) / (2 * a);
					cout << "Solutiile sunt :" << endl;
					cout << z1;
					cout << endl;
					cout << z2;
				}
				else {
					Complex t1, t2;
					x = sqrt(-D);
					t1.setRe(-b / (2 * a));
					t1.setIm(x / (2 * a));
					t2.setRe(-b / (2 * a));
					t2.setIm(-x / (2 * a));
					cout << "Solutiile sunt :" << endl;
					t1.afisare();
					cout << endl;
					t2.afisare();
				}
			}
		}
	}
	return 1;
}