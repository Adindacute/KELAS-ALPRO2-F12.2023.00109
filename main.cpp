#include <iostream>
using namespace std;

void caricetak(int arr[], int size, int X) {
    bool isFound = false;

    for (int i = 0; i < size; i++) {
        if (arr[i] == X && X % 2 == 0) {
            cout << "ditemukan" << endl;
            isFound = true;
            break;
        }
    }

    if (!isFound) {
        cout << "tidak ditemukan" << endl;
    }
}

int main() {
    int arr[] = {2, 2, 3, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int X;

    cout << "Masukkan X yang dicari: ";
    cin >> X;

    caricetak(arr, size, X);

    return 0;
}
