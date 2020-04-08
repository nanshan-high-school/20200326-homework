#include <iostream>
using namespace std;
int main() {
    int choice = 0;
    cout << "要加密還是解密？(加密打1，解密打2):";
    cin >> choice;

    int key = 0;
    int word;
    if (choice == 1) {
        cout << "請問key？";
        cin >> key;

        cout << "請輸入要加密的字串:";
        string word;
        cin >> word;
        for (int i = 0;word[i] != '\0'; i++) {
            if (word[i] >= 'A' && word[i] <= 'Z') {
                word [i]+=key;
            if (word[i]>'Z'){
                    word[i] -=26;
                }
                cout << word[i];
            } else if (word[i] >= 'a' && word[i] <= 'z') {
                word [i]+=key;
                if (word[i]>'z'){
                    word[i] -=26;
                }
                cout << word[i];
            } else {
                cout << word [i];
            }
        }

    } else if (choice == 2) {
        cout << "請問key？";
        cin >> key;

        cout << "請輸入要加密的字串:";
        string word;
        cin >> word;
        for (int i = 0;word[i] != '\0'; i++) {
            if (word[i] >= 'A' && word[i] <= 'Z') {
                word [i]-=key;
            if (word[i]<'A'){
                    word[i] +=26;
                }
                cout << word[i];
            } else if (word[i] >= 'a' && word[i] <= 'z') {
                word [i]+=key;
                if (word[i]<'a'){
                    word[i] +=26;
                }
                cout << word[i];
            } else {
                cout << word [i];
            }
        }
    }
}
