#include <iostream>
using namespace std;

int main() {
  char crypt;
  cout << "Enter D for decryption,\n      E for encryption:\n";
  cin >> crypt;

  int key;
  do { cout << "Enter the key of the encryption:\n";
  cin >> key;
  } while (key < 0 || key > 25);

  string text;
  cout << "Enter the text:\n";
  cin >> text;

  if (crypt == 'E' || crypt == 'e') {
    for (int n = 0; text[n] != '\0'; n++) {
      if (text[n] >= 0 && text[n] <= 64) {
      } else if (text[n] >= 0 && text[n] <= 64) {
      } else if (text[n] >= 91 && text[n] <= 96) {
      } else if (text[n] >= 123) {
      } else {
        int letter = text[n] + key;
        if (letter >= 91 && letter <= 96) {
          text[n] = char(letter - 26);
        } else if (letter >= 123) {
          text[n] = char(letter - 26);
        } else {
          text[n] = letter;
        }
      }
    }
  }

  if (crypt == 'D' || crypt == 'd') {
    for (int n = 0; text[n] != '\0'; n++) {
      if (text[n] >= 0 && text[n] <= 64) {
      } else if (text[n] >= 0 && text[n] <= 64) {
      } else if (text[n] >= 91 && text[n] <= 96) {
      } else if (text[n] >= 123) {
      } else {
      char letter = text[n] - key;
        if (letter >= 91 && letter <= 96) {
          text[n] = letter + 26;
        } else if (letter <= 64) {
          text[n] = letter + 26;
        } else {
          text[n] = letter;
        }
      }
    }
  }

  cout << "The new text is:\n" << text;
}
