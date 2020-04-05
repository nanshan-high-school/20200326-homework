#include <iostream>
using namespace std;

int main() {
    char ans;
    cout << "Encrypt? (y/n)";
    cin >> ans;
    bool encrypt = false;
    if (ans == 'y') {
        encrypt = true;
    } 

    string key;
    cin >> key;

    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string alphabetEdit = alphabet;

    int temp;
    for (int i = 0; i < key.length(); i++) {
        for (int j = 0; j < 26; j++) {
            if (key[i] == alphabetEdit[j]) {
                temp = alphabetEdit[j];  
                for (int k = j; k > i; k--) {
                    alphabetEdit[k] = alphabetEdit[k - 1];
                } 
                alphabetEdit[i] = temp;
            }
        }
    }

    string letter;
    cin >> letter;

    bool capital = false;
    string output;       
    for (int i = 0; i < letter.length(); i++) {
        capital = false;
            if ((letter[i] >= 65) && (letter[i] <= 90)) {
                letter[i] += 32;
                capital = true;
            } 
        for (int j = 0; j < 26; j++) {
            if (encrypt) {
                if (letter[i] == alphabet[j]) {
                    if (capital) {
                        output = alphabetEdit[j] - 32;
                        cout << output;
                    } else {
                        cout << alphabetEdit[j];
                    }
                }
            } else {
                if (letter[i] == alphabetEdit[j]) {
                    if (capital) {
                        output = alphabet[j] - 32;
                        cout << output;
                    } else {
                        cout << alphabet[j];
                    }
                }
            }
        }
    }    
}