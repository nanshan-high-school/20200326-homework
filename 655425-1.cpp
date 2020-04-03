#include <iostream>
using namespace std;

int main() {
    int d = 0;
    int i = 0;
    int k = 0;
    string s;
    cout << "請問要加密還是解密?";
    cin >> d;
    cout << "請輸入key值:";
    cin >> k;
    if (d == 0){
        cout << "訊息:";
        cin >> s;
        for (i = 0; i < s.length(); i++){
            if (s[i] >= 65, s[i] <= 90){
                s[i] += k;
                if (s[i] > 90){
                    s[i] -= 26;
                }
            }
            else if (s[i] >= 97, s[i] <= 122){
                s[i] += k;
                if (s[i] > 122){
                    s[i] -= 26;
                }
            }
        }
    }
    if (d == 1){
        cout << "密碼:";
        cin >> s;
        for (i = 0; i < s.length(); i++){
            if (s[i] >= 65, s[i] <= 90){
                s[i] -= k;
                if (s[i] < 65){
                    s[i] += 26;
                }
            }
            else if (s[i] >= 97, s[i] <= 122){
                s[i] -= k;
                if (s[i] < 97){
                    s[i] += 26;
                }
            }
        }
    }
    
        cout << s;
}
