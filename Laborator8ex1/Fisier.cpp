#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class FileHandler {
private:
    string FisierIn;
    string FisierOut;

public:
    FileHandler(const string& inputFile, const string& outputFile) : FisierIn(inputFile), FisierOut(outputFile) {}

    void processFile() {
        ifstream inputFileStream(FisierIn);
        if (!inputFileStream.is_open()) {
            cout << "Fisierul de intrare nu poate fi deschis." << endl;
            return;
        }

        set<string> uniqueWords;
        vector<string> wordsInOrder;
        string word;

        while (inputFileStream >> word) {
            uniqueWords.insert(word);
            wordsInOrder.push_back(word);
        }

        inputFileStream.close();

        vector<string> sortedWords(wordsInOrder.begin(), wordsInOrder.end());
        sort(sortedWords.begin(), sortedWords.end());

        ofstream outputFileStream(FisierOut);
        if (!outputFileStream.is_open()) {
            cout << "Fisierul de iesire nu poate fi deschis." << endl;
            return;
        }

        for (const auto& w : uniqueWords) {
            outputFileStream << w << endl;
        }

        outputFileStream.close();
        cout << "Fisierele au fost procesate cu succes." << endl;
    }
};

int main() {
    FileHandler handler("FisierIn.txt", "FisierOut.txt");
    handler.processFile();

    return 0;
}

