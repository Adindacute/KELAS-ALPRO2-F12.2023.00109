#include <iostream>

using namespace std;

string nama;
string nim;
int usia;

int main()
{
    cout << "Masukkan nama : ";
    cin >> nama;
    cout << "Masukkan nim : ";
    cin >> nim;
    cout << "Masukkan usia : ";
    cin >> usia;

    cout << "Nama: " << nama << endl;
    cout << "NIM: " << nim << endl;
    cout << "Usia: " << usia << endl;

    cout << "Masukkan nama : ";
    cin >> nama;
    cout << "Masukkan usia : ";
    cin >> usia;

    int i=0;
    do{
        cout << nama << endl;
        i++;
    }
    while (i<21);
    return 0;
}
