/*
 * main.cpp
 *
 *  Created on: 1 lis 2017
 *      Author: Filip Orlovsky
 *      MinGW-w64 + ECLIPSE OXYGEN
 */

#include <conio.h>
#include <iostream>
using namespace std;

int main() {
	int opcja, x, y, s { }, i { };
	bool flaga { false };

	while (1) {
		cout << "\n 1. dwie zmienne" << "\n 2. wysw" << "\n suma" << "\n quit"
				<< endl << endl << "wybierz opcje: ";
		cin >> opcja;

		system("cls");

		switch (opcja) {
		case 1:
			flaga = true;
			cout << " x = ";
			cin >> x;
			cout << " y = ";
			cin >> y;
			cout << "\nnacisnij enter\n";
			//_getch();
			getch();
			//cin.ignore();
			//getchar();
			break;
		case 2:
			if (flaga)
				cout << "zmienne to: " << x << " " << y;
			else {
				cout << " nie dales wiec daj\n";
				cout << " x = ";
				cin >> x;
				cout << " y = ";
				cin >> y;
				flaga = true;
			}
			cout << "\nnacisnij enter\n";
			_getch();
			break;
		case 3:
			if (flaga) {
				if (x >= y)
					for (int i = x; i >= y; i--)
						s += i;
				else
					for (int i = x; i <= y; i++)
						s += i;

				cout << "suma wynosi:" << s;
				s = 0;

			}

			else {
				cout << " nie dales wiec daj\n";
				cout << " x = ";
				cin >> x;
				cout << " y = ";
				cin >> y;
				flaga = true;
			}
			cout << "\nnacisnij enter\n";
			_getch();
			break;

		case 4:
			if (flaga) {
				if (x >= y) {
					i = x;
					while (i != y) {
						s = s + i;
						i--;
					}
				} else {
					i = y;
					while (x != i) {
						s = s + i;
						i--;
					}

				}
				s++;
				cout << "suma wynosi:" << s;
				s = 0;
			} else {
				cout << " nie dales wiec daj\n";
				cout << " x = ";
				cin >> x;
				cout << " y = ";
				cin >> y;
				flaga = true;
			}
			cout << "\nnacisnij enter\n";
			_getch();
			break;

		case 5:
			if (flaga) {
				if (x >= y) {
					i = x;
					do {
						s = s + i;
						i--;
					} while (i != y);
				} else {
					i = y;
					do {
						s = s + i;
						i--;
					} while (x != i);

				}
				s++;
				cout << "suma wynosi:" << s;
				s = 0;
			} else {
				cout << " nie dales wiec daj\n";
				cout << " x = ";
				cin >> x;
				cout << " y = ";
				cin >> y;
				flaga = true;
			}
			cout << "\nnacisnij enter\n";
			_getch();
			break;

		case 6:
			if (flaga) {
				//		cout << "Maks: " << (x > y) ? x : y;



				cout << "zmienne to: " << x << " " << y;
			} else {
				cout << " nie dales wiec daj\n";
				cout << " x = ";
				cin >> x;
				cout << " y = ";
				cin >> y;
				flaga = true;
			}
			cout << "\nnacisnij enter\n";
			_getch();
			break;


		case 8:
			if (flaga) {
				if (y) {
					cout << "x/y";
					s = x / y;
					cout << "iloraz to: = " << s;
				} else
					cout << "dzielenie nie mozliwe";

			} else {
				cout << " nie dales wiec daj\n";
				cout << " x = ";
				cin >> x;
				cout << " y = ";
				cin >> y;
				flaga = true;
			}
			cout << "\nnacisnij enter\n";
			_getch();
			break;

		case 9:
			exit(0);
		default:
			cout << "wybrales opcje spoza zakresu";
		} //end switch
	} //end while

	cin.ignore();
	getchar();
	return 0;
}


