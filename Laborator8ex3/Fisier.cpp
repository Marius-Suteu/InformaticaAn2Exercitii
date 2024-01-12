#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

class Fisier {
private:
    string FisierIn;
    string FisierOut;

public:
    Fisier(const string FisierIn, const string FisierOut) {
        this->FisierIn = FisierIn;
        this->FisierOut = FisierOut;
    }

    void procesareFisier() {
        ifstream inFisier(FisierIn);
        if (!inFisier.is_open()) {
            cout << "Fisierul de intrare nu poate fi deschis." << endl;
            return;
        }

        map<unsigned, map<string, unsigned>> nrCuvinteLinie;
        string linie;
        unsigned nrLinie = 0;

        while (getline(inFisier, linie)) {
            istringstream iss(linie);
            string cuvant;

            while (iss >> cuvant) {
                cuvant.erase(remove_if(cuvant.begin(), cuvant.end(), ispunct), cuvant.end());
                transform(cuvant.begin(), cuvant.end(), cuvant.begin(), ::tolower);

                nrCuvinteLinie[nrLinie][cuvant]++;
            }

            nrLinie++;
        }

        inFisier.close();

        for (const auto& liniePair : nrCuvinteLinie) {
            unsigned linieNum = liniePair.first;
            const map<string, unsigned>& wordCount = liniePair.second;

            cout << "Linia " << linieNum << ":" << endl;

            for (const auto& wordPair : wordCount) {
                cout << "\t" << wordPair.first << ": " << wordPair.second << " aparitii" << endl;
            }
        }
    }
};

int main() {
    Fisier fisier("FisierIn.txt", "FisierOut.txt");
    fisier.procesareFisier();

    return 0;
}
