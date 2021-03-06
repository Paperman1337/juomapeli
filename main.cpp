#include "mainHeader.h"

int main() {
	KorttiPakka* uusi = new KorttiPakka(); //Osoitinobjekti KorttiPakka luokkaan
	srand(time(0)); //Alustetaan aika
	PelinAlustus(pelaajienNimet, pelaajienMäärä, numerot, uusi);

	for (int x = 0; x < 52; x++) {
		PelataanKortti(uusi, numerot[x], kenenVuoro, pelaajienMäärä, pelaajienNimet[kenenVuoro-1]);
		kenenVuoro = Vuoro(kenenVuoro, pelaajienMäärä);
	}

	PelinLopetus();

	system("pause");
	return 0;
}