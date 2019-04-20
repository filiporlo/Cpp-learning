/*
 * main.cpp
 *
 *  Created on: 1 lis 2017
 *      Author: filip
 */


#include <iostream>

using namespace std;

enum class Tpraca_silnikow {
	cala_wstecz = -100,
	pol_wstecz = -50,
	bardzo_wolno_wstecz = -25,
	stop = 0,
	bardzo_wolno_naprzod = 5,
	wolno_naprzod = 25,
	pol_naprzod = 50,
	cala_naprzod = 100
};

enum Todtwarzanie {
	play, stop, pause = 16, rewind_tape
};




int main() {

	cout << "Kapitan na mostku sygnalizuje telegrafem." << endl;
	Tpraca_silnikow telegraf = Tpraca_silnikow::stop;

	telegraf = Tpraca_silnikow::wolno_naprzod;

	using Tsilniki = Tpraca_silnikow;

	telegraf = Tsilniki::pol_naprzod;

	cout << "Mowi mechanik Kapitan przez telegraf rozkazal: ";

	switch (telegraf) {

	case Tpraca_silnikow::bardzo_wolno_naprzod:
		cout << "*bardzo wolno naprzod*" << endl;
		break;

	case Tsilniki::pol_naprzod:
		cout << "*pol naprzod*" << endl;
		break;

	case Tpraca_silnikow::cala_naprzod:
		cout << "*cala naprzod*" << endl;
		break;

	default:
		break;
	}

	int moc_silnikow = static_cast<int>(telegraf);
	cout << "co oznacza" << moc_silnikow << "% mocy silnikow " << endl;

	constexpr int liczba_kotwic { 2 }, liczba_ladowni { 6 };
	
	for (int i { }; i < liczba_kotwic; i++) {
		cout << "Opuszczamy kotwice nr " << i << "(z " << liczba_kotwic << ")"
				<< endl;

	}
	cout << "obserwujemy kazdo z " << liczba_ladowni << " ladowni" << endl;

	
	cin.ignore();
	getchar();
	
}


