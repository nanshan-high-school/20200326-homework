#include <iostream>
using namespace std;

int main() {
string word;
int x = 0;
char code;

cout << "如果加密 輸入 e 如果解密 輸入 d" << endl;
cin >> code;
    if (code == 'e') {
        cout << "輸入字";
        cin >> word;

        cout << "輸入間隔";
        cin >> x;    
            for (int i = 0;word [i] != '\0';i++ ) {
                if (word [i]  >= 'A'&& word [i]  < 'Z') {
                word [i]  += x;
                }else if (word [i]  >= 'a' && word [i]  < 'z') {
                word [i]  += x;
                }else if (word [i] == 'Z') {
                word[i]  = 65;
                }else if (word [i] == 'z') {
                word[i]  = 97;
                }      
            }   
    cout << word;
    
    } else if (code == 'd') {
        cout << "輸入字";
        cin >> word;
        
        cout << "輸入間隔";
        cin >> x;    
            for (int i = 0;word [i] != '\0';i++ ) {
                if (word [i]  > 'A'&& word [i]  <= 'Z') {
                word [i]  -= x;
                }else if (word [i]  > 'a' && word [i]  <= 'z') {
                word [i]  -= x;
                }else if (word [i] == 'A') {
                word[i]  = 90;
                }else if (word [i] == 'a') {
                word[i]  = 122;
                }      
            }
    cout << word; 
    }
}
