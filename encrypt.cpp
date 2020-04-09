#include <iostream>
using namespace std;

int getLength(string code){
    int i = 0;
    while(code[i] != '\0'){
        i++;
    }
    return i;
}

int main(){
    string code;
    int add, move;
    cin >> code >> add >> move;
    int len = getLength(code);
    for(int i = 0; i < len; i++){
        if(code[i] >= 'a' && code[i] <= 'z'){
            code[i] += add;
            if(code[i] > 'z'){
                code[i] -= 26;
            }
            if(code[i] < 'a'){
                code[i] += 26;
            }
        }
    }
    string codeTemp = code;
    for(int i = 0; i < len; i++){
        int move2 = i + move;
        while(move2 >= len){
            move2 -= len;
        }
        while(move2 < 0){
            move2 += len;
        }
        code[i] = codeTemp[move2];
    }

    cout << code;
}
