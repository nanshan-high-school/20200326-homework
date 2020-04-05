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

    int key;
    cin >> key;

    string input;
    cin >> input;

    string output;
    for (int i = 0; i < input.length(); i++) {        
        input[i] -= 40;
        if (encrypt) {
            input[i] += key;
        } else {
            input[i] -= key;
        }

        if (encrypt) {
            if (input[i] >= 51 && input[i] <= 56) {            
                input[i] -= 26;         
            } else if (input[i] >= 83) {
                input[i] -= 26;
            }
        } else {
            if (input[i] >= 51 && input[i] <= 56) {
                input[i] += 26;
            } else if (input[i] <= 0) {
                input[i] += 26;
            }            
        }
        output = input[i] + 40;
        cout << output;
    }
}