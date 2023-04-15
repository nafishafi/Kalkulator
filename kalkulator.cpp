#include <iostream>
using namespace std;

int main()
{
    int a,c;
    char b;

    cout << "Masukkan Nilai : ";
    cin >> a;
    cin >> b;
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