#include <iostream>
using namespace std;
int main() {
  int k;
  cout << "masukkan bilangan bulat :";
  cin >> k;
  char c;
  cout << "\nmasukkan karakter :";
  cin >> c;
  int d;
  cout << "\nmasukkan digit : ";
  cin >> d;
  // buat bingkai
  for (int i = 0; i < k; i++) {
    cout << c;
  }
  cout << endl;
  // buat motif
  for (int i = 1; i < k - 1; i++) {
    if (i % 2 == 0) {
      for (int j = 1; j < k - 1; j++) {
        if (j % 2 == 0) {
          cout << "*";
        } else {
          cout << d;
        }
      }
    } else {
      for (int j = 1; j < k - 1; j++) {
        if (j % 2 == 0) {
          cout << d;
        } else {
          cout << "*";
        }
      }
    }
    cout << endl;
  }
  // buat bingkai
  for (int i = 0; i < k; i++) {
    cout << c;
  }
  cout << endl;
  return 0;
}