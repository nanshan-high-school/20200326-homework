#include <iostream>
using namespace std;

int main() {
    string password;
    cout << "密碼：";
    cin >> password;
    int len = password.length();
    int block;
    cout << "位移量：";
    cin >> block;
    for(int i = 0; i < len; i++) {
        if(password[i] - 64 <= 26 && password[i] - 64 > 0) {
            password[i] = password[i] + block;
            if(password[i] > 90) {
                password[i] = password[i] - 26;
            }
        } else if(password[i] - 96 <= 26 && password[i] - 96 > 0) {
            password[i] = password[i] + block;
            if(password[i] > 122) {
                password[i] = password[i] - 26;
            }
        } else {
            continue;
        }
    }
    cout << password;
}
