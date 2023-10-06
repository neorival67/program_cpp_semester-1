#include <iostream>
 
using namespace std;
 
int main()
{
    int pbta, pbtak;
    cout << "Masukkan batas awal: ";
    cin >> pbta;
    cout << "Masukkan batas akhir: ";
    cin >> pbtak;
 
    for (int i = pbta; i <= pbtak; i++)
    {
        if (i % 2 == 0)
            cout << i << " angka ini genap";
        else
            cout << i << " angka ini ganjil";
 
        if (i == 2 || i == 3 || i == 5 || i == 7 || i == 11 || i == 13 || i == 17 || i == 19 || i == 23 || i == 29  )
            cout << " dan prima" << endl;
        else if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
            cout << endl;
        else
            cout << " dan prima" << endl;
    }
 
    return 0;
}