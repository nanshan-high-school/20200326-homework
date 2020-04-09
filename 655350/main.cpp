#include <iostream>
using namespace std;

int main() {
    string Cc;
    cout << "請問你想加密(1)/解密(2):";
    char ans;
    cin >> ans;
    if (ans == '1'){
        cout << "請問密碼是:";
        cin >> Cc;
        for (int i = 0; i <= Cc.length(); i++){
            if (Cc[i] <= 'u'){
                Cc[i] += 5;
            } else if (Cc[i] == 'v'){
                Cc[i] = 'a';
            } else if (Cc[i] == 'w'){
                Cc[i] = 'b';
            } else if (Cc[i] == 'x'){
                Cc[i] = 'c';
            } else if (Cc[i] == 'y'){
                Cc[i] = 'd';
            } else if (Cc[i] == 'z'){
                Cc[i] = 'e';
            }    
        }    
        cout << Cc << "\n";    
    } else if (ans == '2'){
        cout << "請問密碼是:";
        cin >> Cc;
        for (int i = 0; i <= Cc.length(); i++){
            if (Cc[i] >= 'f'){
                Cc[i] -= 5;
            } else if (Cc[i] == 'a'){
                Cc[i] = 'v';
            } else if (Cc[i] == 'b'){
                Cc[i] = 'w';
            } else if (Cc[i] == 'c'){
                Cc[i] = 'x';
            } else if (Cc[i] == 'd'){
                Cc[i] = 'y';
            } else if (Cc[i] == 'e'){
                Cc[i] = 'z';
            }    
        }    
        cout << Cc << "\n";    
    } else {
        cout << "這智商......\n";
    } 
}