#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Masukkan angka: ";
    cin >> x;

    if (x % 2 == 0) {
        cout << x << " adalah angka genap" << endl;
    } else {
        cout << x << " adalah angka ganjil" << endl;
    }

    // Mengecek apakah angka merupakan kelipatan 3
    if (x % 3 == 0) {
        cout << x << " adalah kelipatan 3" << endl;
    } else {
        cout << x << " bukan kelipatan 3" << endl;
    }

    return 0;
}

