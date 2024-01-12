#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

class NrAparitii {
private:
    map<string, unsigned> nrAparitii;

public:
    void processFile(const string& FisierIn) {
        ifstream fisierIn(FisierIn);
        if (!fisierIn.is_open()) {
            cout << "Fisierul nu poate fi deschis." << endl;
            return;
        }

        string cuvant;
        while (fisierIn >> cuvant) {
            cuvant.erase(remove_if(cuvant.begin(), cuvant.end(), ispunct), cuvant.end());
            transform(cuvant.begin(), cuvant.end(), cuvant.begin(), ::tolower);

            nrAparitii[cuvant]++;
        }

        fisierIn.close();

        for (const auto& pair : nrAparitii) {
            cout << pair.first << ": " << pair.second << " aparitii" << endl;
        }
    }
};

int main() {
    NrAparitii nrAparitii;
    nrAparitii.processFile("FisierIn.txt");

    return 0;
}
