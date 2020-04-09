#include <iostream>
using namespace std;

int main() {
	int choice;
	string code;
	int codelong;
	int space;
	
	cout << "請問你要加密(1)還是解密(2)?\n";
	cin >> choice;
	cout << "請輸入密碼的位移:";
	cin >> space;

	if (choice == 1) {
		cin >> code;
		
		for (int k = 1; code[k - 1] != '\0'; k++) {
			codelong = k;
		}
		
		int change[codelong];
		
		for (int j = 0; j < codelong; j++) {
			change[j] = (int)code[j];
		}

		for (int i = 0; i < codelong; i++) {
			if (((int)code[i] >= 65 && (int)code[i] <= 90) || ((int)code[i] >= 97 && (int)	code[i] <= 122)) {
				if ((int)code[i] == 90) {
					change[i] = 65 + (space - 1);
					code[i] = (char)change[i]; 
				} else if ((int)code[i] == 122) {
					change[i] = 97 + (space - 1);
					code[i] = (char)change[i]; 
				} else {
					change[i] += space;
					code[i] = (char)change[i]; 
				} 
			}
		}	
	} else if (choice == 2) {
		cin >> code;
		
		for (int k = 1; code[k - 1] != '\0'; k++) {
			codelong = k;
		}
		
		int change[codelong];
		
		for (int j = 0; j < codelong; j++) {
			change[j] = (int)code[j];
		}

		for (int i = 0; i < codelong; i++) {
			if (((int)code[i] >= 65 && (int)code[i] <= 90) || ((int)code[i] >= 97 && (int)	code[i] <= 122)) {
				if ((int)code[i] == 65) {
					change[i] = 90 - (space - 1);
					code[i] = (char)change[i]; 
				} else if ((int)code[i] == 97) {
					change[i] = 122 + (space - 1);
					code[i] = (char)change[i]; 
				} else {
					change[i] -= space;
					code[i] = (char)change[i]; 
				} 
			}
		}	
	} else {
		cout << "\n輸入錯誤";
	}
	cout << code;
}
		
