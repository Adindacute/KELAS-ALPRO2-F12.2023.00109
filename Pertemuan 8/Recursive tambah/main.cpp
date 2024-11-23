#include <iostream>

using namespace std;

int recAdd (int a, int b){
    if (b==0){
        return a;
    }else
        return recAdd(a+1,b-1);
}

int main()
{
    int a,b;
    cout << "Masukkan bilangan a: ";
    cin >> a;
    cout << "Masukkan bilangan b: ";
    cin >> b;

    cout << "Hasil penjumlahan " << a << "+" << b << " adalah :" << recAdd(a,b);

    return 0;
}
