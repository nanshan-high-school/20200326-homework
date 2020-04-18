#include <iostream>
using namespace std;

int main() {
    int system,distance;
    string i;

    cout <<"字串為? :";
    cin >> i;

    cout <<"請問要解密(0)還是加密(1)?";
    cin >> system;

    cout <<"間距為多少? :";
    cin >> distance;

    if(system == 0){
    for(int n = 0;n < i.length();n++){
      if(i [n] >= 65 && i [n] <= 122){
        if((i [n] + distance) / 122 >= 1){
         i [n] ='a'+ i [n] - 123 + distance;
       }
       else{
       i [n] += distance;
       }
      }
      else{
      i [n]=i [n];
      }
    cout <<(char) i [n];
    } 
  }
  else{
    for(int n = 0;n < i.length(); n++){
      if(i [n]>=65 && i [n] <= 122){
        if((i [n] - distance) / 65 <= 1){
        i [n] = 'z'-i [n] -66 + distance;
        }
        else {
        i [n] -= distance;
        }
      }
      else {
      i [n] = i [n];
      }
    cout<< (char) i [n];
    }
  }
}
