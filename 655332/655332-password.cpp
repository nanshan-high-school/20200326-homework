#include <iostream>
using namespace std;

int main() {
    string pw;
    cout << "歡迎來到肚肚密碼系統(只能小寫喔)\n";
    cout << "請問你想加密(y)還是解密(n)?\n";
    char ans;
    cin >> ans;
    if (ans == 'y'){
        cout << "請問密碼是?\n";
        cin >> pw;
        for (int x = 0; x <= pw.length(); x++){
            if (pw[x] <= 'w'){
                pw[x] += 3;
            } else if (pw[x] == 'x'){
                pw[x] = 'a';
            } else if (pw[x] == 'y'){
                pw[x] = 'b';
            } else if (pw[x] == 'z'){
                pw[x] = 'c';
            }    
        }
        cout << "加密中" << "\n";    
        cout << pw << "\n";    
    } else if (ans == 'n'){
        cout << "請問密碼是?\n";
        cin >> pw;
        for (int x = 0; x <= pw.length(); x++){
            if (pw[x] >= 'd'){
                pw[x] -= 3;
            } else if (pw[x] == 'a'){
                pw[x] = 'x';
            } else if (pw[x] == 'b'){
                pw[x] = 'y';
            } else if (pw[x] == 'c'){
                pw[x] = 'z';
            }    
        }
        cout << "解密中" << "\n";    
        cout << pw << "\n";    
    } else {
        cout << "來亂的交不到女朋友\n";
    }
    cout << "出品自杜杜有大肚肚有限公司\n"; 
}  