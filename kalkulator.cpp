#include <iostream>
using namespace std;

int main()
{
    int a,c;
    char b;

    cout << "Masukkan Operasi: ";
    cin >> b;
    cout << "Masukkan Nilai Pertama: ";
    cin >> a;
    cout << "Masukkan Nilai Kedua: ";
    cin >> c;
    
    switch (b)
    {
    case '+':
        cout << "Hasil : " << a+c << endl;
        break;
    case '-':
        cout << "Hasil : " << a-c << endl;
        break;
    case '/':
        cout << "Hasil : " << a/c << endl;
        break;
    case '*':
        cout << "Hasil : " << a*c << endl;
        break;
    default:
        cout << "Operasi yg anda masukkan salah" << endl;
        break;
    }
    cout << "Akhir program" << endl;
    
    
    return 0;
}
