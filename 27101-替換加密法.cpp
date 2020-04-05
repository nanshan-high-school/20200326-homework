#include <iostream>
using namespace std;

int main() {
    string normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    string password = "FCABDHXNEWOSMTIJQPZKGLRVYUfcabdhxnewosmtijqpzkglrvyu";

    int number;
    do {
        cout << "請輸入加密或解密，加密請按1，解密請按2:";
        cin >> number;
    } while (number < 1 || number > 2);

    string word;
    cout << "請輸入英文:";
    cin >> word;

    for (int i = 0; i < word.length(); i++) {
        if (number == 1) {
            for (int j = 0; j < normal.length(); j++) {
                if ((int)(word[i] & 0Xff) == (int)(normal[j] & 0xff)) {  
                    word[i] = password[j];
                    break;
                }
            }
        } else if (number == 2) {
            for (int j = 0; j < password.length(); j++) {
                if ((int)(word[i] & 0Xff) == (int)(password[j] & 0xff)) {
                    word[i] = normal[j];
                    break;
                }
            }
        }
    }

    cout << word;
}
