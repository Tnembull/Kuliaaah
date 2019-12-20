#include <iostream>
using namespace std;
class Matdis{

long int faktorial(int);
int permutasi(int, int);
int kombinasi(int, int);
};
long int faktorial(int x)
{           int fak, i;
            fak = 1;
            for(i = 1; i<=x; i++)
            fak = fak * i;
            return(fak);
}
int permutasi(int n, int r)
{              int hasil, temp;
            temp = n - r;
            hasil = faktorial(n) / faktorial(temp);
            return(hasil);
}
int kombinasi(int n, int r)
{           int hasil, temp;
            temp = n - r;
            hasil = faktorial(n) / faktorial(r) * faktorial(temp);
            return(hasil);
}
int main ()
{                      
int nilai, n, r;
awal:
cout<<"||=====================================================||"<<endl;
cout<<"||          MENCARI PERMUTASI DAN KOMBINASI            ||"<<endl;
cout<<"||               DEVELOPED BY BulinMcD                 ||"<<endl;
cout<<"||=====================================================||"<<endl;
cout<<"https://github.com/Tnembull01/PemrogramanGcc             "<<endl<<endl;
cout<<"\n==================\n";
cout<<"1.Permutasi \n";
cout<<"2.kombinasi \n";
cout<<"3.keluar \n";
cout<<"====================\n";
cout<<"Pilih : ";cin>>nilai;
cout<<"====================";
cout<<endl<<endl;
	if (nilai == 1){
			cout << "RUMUS Permutasi : P (n, r) = n! / (n-r)!\n";
			cout << "\nMasukkan nilai n = ";
			cin >> n;
			cout << "\nMasukkan nilai r = ";
			cin >> r;
			cout <<n <<" data dipermutasikan "<< r << " = " << permutasi(n,r) << endl << endl ;
			goto awal;
			}
	else if (nilai == 2 ) {
			cout << "RUMUS Kombinasi : C(n, r)=n!/r!(n-r)!\n";
			cout << "\nMasukkan nilai n = ";
			cin >> n;
			cout << "\nMasukkan nilai r = ";
			cin >> r;
			cout <<n <<" data dikombinasikan "<< r << " = " <<kombinasi(n,r) << endl << endl;
			goto awal;
			}
	else if (nilai == 3){ cout << " Terima Kasih Telah Menggunakan Program Saya \n";
			cout << endl ;
		}
 }
