#include <iostream>
#include <string>
using namespace std;

int main() {
    int length,placement,password;
    string code2,code;
    do{
        cout << "加密輸入1，解密輸入2:\n";
        cin >> password;
    }while(password < 1 || password > 2);
    cout << "輸入位移:\n";
    cin >> placement;
    cout << "輸入密碼:\n";
    cin.get();
    getline(cin,code);
    length = code.length();
    if(password == 1){
        cout << "\n密文:\n";
        for(int i = 0; i < length; i++){
            code2[i] = code[i];
            if (code[i] <= 90 && code[i] >= 65){
                code2[i] += placement;
                if (code2[i] > 90){
                    code2[i] -= 26;
                }
            }else if (code[i] <= 122 && code[i] >= 97){
                code2[i] += placement;
                if (code2[i] > 122){
                    code2[i] -= 26;
                }
            }
            cout << code2[i];
        }
    }else if(password == 2){
        cout << "原文:\n";
        for(int i = 0; i < length; i++){
            code2[i] = code[i];
            if (code[i] <= 90 && code[i] >= 65){
                code2[i] -= placement;
                if (code2[i] < 65){
                    code2[i] += 26;
                }
            }else if (code[i] <= 122 && code[i] >= 97){
                code2[i] -= placement;
                if (code2[i] < 97){
                    code2[i] += 26;
                }
            }
            cout << code2[i];
        }
    }
}
