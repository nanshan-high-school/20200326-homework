#include <iostream>
using namespace std;

int main() {
    int password;
    do {
        cout << "請輸入加密或解密，加密請按1，解密請按2:";
        cin >> password;
    } while (password < 1 || password > 2);
    
    int distance;
    cout << "請輸入位移數:";
    cin >> distance;

    string word;
    cout << "請輸入英文:";
    cin >> word;

    for (int i = 0; i < word.length(); i++) {
        if (password == 1) {
            if (word[i] == 90) {
                word[i] = 65;
                word[i] = distance - 1 + word[i];
            } else if (word[i] == 122) {
                word[i] = 97;
                word[i] = distance - 1 + word[i];
            } else {
                word[i] = distance + word[i];   
            }           
        } else if (password == 2) {
            if (word[i] == 65) {
                word[i] = 90;
                word[i] = word[i] - (distance - 1); 
            } else if (word[i] == 97) {
                word[i] = 122;
                word[i] = word[i] - (distance - 1);
            } else {
                word[i] = word[i] - distance; 
            }            
        }
    }

    cout << word;
}
