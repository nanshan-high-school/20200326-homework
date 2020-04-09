#include <iostream>
using namespace std;

int main() {
    int answer;

    do {
        cout << "請輸入你要加密(1)還是解密(2)："; 
        cin >> answer;
    } while (answer != 1 && answer != 2);
    


    cout << "請輸入你要位移多少：";
    int move;
    cin >> move;

    cout << "你的字串?";
    string num;
    cin >> num;

    string mun;
    for (int i = 0; i <= num.length(); i++) {
        if (answer == 1) {
            num[i] += move;
        } else {
            num[i] -= move;
        }

        if (answer == 1) {
            if (num[i] >= 90 && num[i] <= 96) {
                num[i] -= 26;
            } else if (num[i] >= 123) {
                num[i] -= 26;
            } 
        } else {
            if (num[i] >= 91 && num[i] <= 96) {
                num[i] += 26;
            } else if (num[i] <= 40) {
                num[i] += 26;
            }
        }
        
        mun = num[i];
        cout << mun;
        
    }
}
