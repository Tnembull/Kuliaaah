#include <iostream>
using namespace std;

int main()
{
    int kolom, coef = 1;

    cout << "Masukan Jumlah Kolom: ";
    cin >> kolom;

    for(int i = 0; i < kolom; i++)
    {
        for(int space = 1; space <= kolom-i; space++)
            cout <<"  ";

        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;

            cout << coef << "   ";
        }
        cout << endl;
    }

    return 0;
}
