#include<iostream>
using namespace std;  
int main() {
     string s;
     int i,letter;
     while(cin >> s >> letter) {
          for(i = 0;i < s.length();i++)
             s += letter;
          cout << "加密:" << s << "\n";   
          for(i = 0;i < s.length();i++)
             s -= letter;
          cout << "解密:" << s << "\n";
     }
     return 0;
}