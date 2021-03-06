#include "KorttiPakkaEsittely.h"
#include <string>

//Aliohjelmien esittelyt
int PelaajienMäärät();
void PelaajienNimetTaulukkoon(std::string *pelaajienNimet, int pelaajienmaara);
void NumerotTaulukkoon(int *numerot);
int Vuoro(int kenenVuoro, int pelaajienMäärä);
void PelataanKortti(KorttiPakka* uusi, int numerot, int vuoro, int pelaajat, std::string nimi);
void PelinAlustus(std::string pelaajienNimet[], int pelaajienMäärä, int numerot[], KorttiPakka* uusi);
void PelinLopetus();