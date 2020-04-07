#include <iostream>
using namespace std;
int main() {
    char bigAlphabet[78] ;
    char smallAlphabet[78] ;
    int mode =0;
    string code;

    cout << "加密按1，解密按2";
    cin >> mode;
    
    cout << "輸入密碼";
    cin >> code;
    
    int controlDigital;
    
    cin >> controlDigital;

    int len = code.length(); 
    for(int i = 0; i < 26; i++ ){
        bigAlphabet[i] = 'A' + i;
        bigAlphabet[i + 26] = 'A' + i;
        bigAlphabet[i + 52] = 'A' + i;
        smallAlphabet[i] = 'a' + i;
        smallAlphabet[i + 26] = 'a' + i;
        smallAlphabet[i + 52] = 'a' + i;
        
    }

    /*for(int i = 0; i < 78; i++ ){
        cout << bigAlphabet[i] << "\n";
        cout << smallAlphabet[i] << "\n";
    }
    */

    if(mode == 1){
        for(int i = 0; i < len; i++){
            if(code[i] <= 57 && code[i] >= 48){
                code[i] = code[i];
            }else if(code[i] <= 90 && code[i] >= 65){
                if(code[i] == 65){
                    code[i] = bigAlphabet[26 + controlDigital];
                }else if(code[i] == 90){
                    code[i] = bigAlphabet[51 + controlDigital];
                }else{
                    code[i] = bigAlphabet[code[i] - 'A' + 26 + controlDigital];
                }                
            }else{
                if(code[i] <= 122 && code[i] >= 97){
                    if(code[i] == 122){
                        code[i] = smallAlphabet[51 + controlDigital];
                    }else if(code[i] == 97){
                        code[i] = smallAlphabet[26 + controlDigital];
                    }else{
                        code[i] = smallAlphabet[code[i] - 'a' + 26 + controlDigital];
                }
                }
            }
        }
    }else if(mode == 2){
        for(int i = 0; i < len; i++){
            if(code[i] <= 57 && code[i] >= 48){
                code[i] = code[i];
            }else if(code[i] <= 90 && code[i] >= 65){
                if(code[i] == 65){
                    code[i] = bigAlphabet[26 - controlDigital];
                }else if(code[i] == 90){
                    code[i] = bigAlphabet[51 - controlDigital];
                }else{
                    code[i] = bigAlphabet[code[i] - 'a' + 26 - controlDigital];
                }                
            }else{
                if(code[i] <= 122 && code[i] >= 97){
                    if(code[i] == 122){
                        code[i] = smallAlphabet[51 - controlDigital];
                    }else if(code[i] == 97){
                        code[i] = smallAlphabet[26 - controlDigital];
                    }
                }else{
                    code[i] = smallAlphabet[code[i] - 'a' + 26 - controlDigital];
                }
            }
        }        
    }
    cout << code;
}
