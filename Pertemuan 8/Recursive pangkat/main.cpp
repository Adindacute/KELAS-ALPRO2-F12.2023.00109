#include <iostream>

using namespace std;

int recPowerOfTwo(int n, int e){
    if(e==0){
        return 1;
    }else
        return n * recPowerOfTwo(n,e-1);
}

int main()
{
    int n, e;
    cout << "Masukkan bilangan n : ";
    cin >> n;
    cout << "Masukkan bilangan e : ";
    cin >> e;

    cout << "Hasil pangkat : " << recPowerOfTwo(n,e) << endl;
    return 0;
}
