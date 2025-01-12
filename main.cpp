#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum)
{
    srand(time(NULL));
    int satluku = rand() % maxnum; // arvotaan satunnaisluku 1-20 väliltä

    int arvaus = 0;
    int arvaukset = 0;


    cout << "Arvaa luku väliltä 1-" << maxnum << endl; // pyydetään kättäjää antamaan luku


    while (arvaus != satluku) {
        cin >> arvaus;
        arvaukset++;


    if (satluku == arvaus) {
        cout << "oikein!" << endl;
    } else if (arvaus < satluku) {
        cout << "luku on isompi" << endl;
    } else {
        cout << "luku on pienempi" << endl;
    }

    }

     return arvaukset; // Palautetaan arvauksien määrä

}

int main() {
    int maxnum = 20; // Maksimiarvo, johon asti satunnainen luku arvotaan
    int arvaukset = game(maxnum);
    cout << "Sait oikean vastauksen " << arvaukset << " yrityksella." << endl;
    return 0;

}
