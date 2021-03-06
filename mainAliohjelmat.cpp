#include "Aliohjelmat.h"
#include "KorttiPakkaEsittely.h"
#include <iostream>
#include <string>
#include <algorithm>

int PelaajienMäärät() {
	int maara;
	std::cout << "Tama on juomapeli\nSyota pelaajien maara: ";
	std::cin >> maara;
	return maara;
}

void PelaajienNimetTaulukkoon(std::string *pelaajienNimet, int pelaajienmaara) {
	for (int x = 0; x < pelaajienmaara; x++) {
		std::cout << "Syota nimesi " << x + 1 << ". pelaaja" << std::endl;
		std::cin >> pelaajienNimet[x];
		std::cin.ignore();
	}
}

void NumerotTaulukkoon(int *numerot) {
	for (int x = 0; x < 52; x++) { //Taulukkoon numerot luvut 0-51
		numerot[x] = x;
	}
}


void PelataanKortti(KorttiPakka* uusi, int numerot, int vuoro, int pelaajat, std::string nimi) {
	std::cout << "Nosta kortti " << nimi << std::endl;
	system("pause");
	uusi->TulostaKorttiPakasta(numerot);
}


int Vuoro(int kenenVuoro, int pelaajienMäärä) {
	if (kenenVuoro == pelaajienMäärä + 1)
		return 1;
	else
	{
		return kenenVuoro++;
	}
}

void PelinAlustus(std::string pelaajienNimet[], int pelaajienMäärä, int numerot[], KorttiPakka* uusi) {
	uusi->KorteilleArvot();
	pelaajienMäärä = PelaajienMäärät();
	PelaajienNimetTaulukkoon(pelaajienNimet, pelaajienMäärä);
	NumerotTaulukkoon(numerot);
	std::random_shuffle(numerot, numerot + 52); //Sekoitetaan taulukon "Numerot" luvut
}

void PelinLopetus() {
	system("cls");
	std::cout << "Korttipakka on nyt kayty lapi, ohjelma sulkeutuu\n"
}