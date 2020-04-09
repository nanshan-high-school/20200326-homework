#include <iostream>
using namespace std;

int main() {
    string code;
    cout << "提醒：只可輸入英文字母\n";
    cout << "請輸入訊息\n";
    cin >> code;
    int x;
    cout << "請問你要加密(1)還是解密(2)\n";
    cin >> x;
    int y = code.length();
    int i;
    int deltaX;
    cout << "請問位移多少?(不得大於25)\n";
    cin >> deltaX;

    if(x < 1 || x > 2){
        cout << "錯誤\n";
    }
    
    else if(x == 1){
    for(int i = 0; i < y; i++){
        code[i] += deltaX;
        if(code[i] > 122 ){
            code[i] -= 26;
        }
        if(code[i] >= 90 && code[i] <= 96){
            code[i] -= 26;
        }
        }

        cout << code;
    }
    else if(x == 2){
    for(int i = 0; i < y; i++){
        code[i] -= deltaX;
        if(code[i] < 97 && code[i] > 90){
            code[i] += 26;
        }
    if( code[i] < 65 ){
            code[i] += 26;
        }
        }
        cout << code;
    }
}