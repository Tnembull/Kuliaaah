#include <iostream>
#include <conio.h>
#include "waktu.h"
#include "biaya.h"
#include "tanggal.h"
using namespace std;
char jawab;
int main () {
	time_t tanggal;
	time(&tanggal);
	float jam, menit,uang_t,uang_k1,uang_k2; 
	int m, plat;
	awal:
	cout<<"============================="<<endl;
	cout<<" PARKIRAN REDA MALL"<<endl;
	cout<<"============================="<<endl;
	cout<<"Keterangan Biaya : "<<endl;
	cout<<"Biaya Motor/jam : Rp. 3000"<<endl;
	cout<<"Biaya Mobil/Jam : Rp. 5000"<<endl;
	cout<<"Jenis kendaraan : "<<endl;
	cout<<"1. Motor"<<endl;
	cout<<"2. Mobil"<<endl;
	cout<<"Masukkan Jenis kendaraan Anda : ";
	cin>>m;
	cout<<"============================="<<endl;
	system("cls");
	
	if (m==1) {
		cout<<"============================="<<endl;
		cout<<" PARKIRAN REDA MALL"<<endl;
		cout<<"============================="<<endl;
    	cout<<"Jenis Kendaraan : Motor "<<endl;
    	cout<<"Lama parkir ( Jam ) : "; 
		cin>>jam; 
    	cout<<"Biaya : Rp. "<<biaya1(jam)<<endl;
    	cout<<"Uang di terima : Rp. ";
    	cin>>uang_t;
    	uang_k1=uang_t-biaya1(jam);
    	cout<<"Uang kembalian : Rp. "<<uang_k1<<endl;
    	cout<<"Tanggal Parkir : "<<ctime(&tanggal);
    	cout<<"============================="<<endl;
		cout<<"Terima Kasih, Selamat Jalan ^-^"<<endl;
	}
    else if (m==2) {
    	cout<<"============================="<<endl;
    	cout<<" PARKIRAN REDA MALL"<<endl;
		cout<<"============================="<<endl;
    	cout<<"Jenis Kendaraan : Mobil"<<endl;
    	cout<<"Lama parkir ( Jam ) : "; 
		cin>>jam;
    	cout<<"Biaya : Rp. "<<biaya2(jam)<<endl;
    	cout<<"Uang di terima : Rp. ";
    	cin>>uang_t;
    	uang_k2=uang_t-biaya2(jam);
    	cout<<"Uang kembalian : Rp. "<<uang_k2<<endl;
    	cout<<"Tanggal Parkir : "<<ctime(&tanggal);
    	cout<<"============================="<<endl;
    	cout<<"Terima Kasih, Selamat Jalan ^-^"<<endl;
	} 
	else {
		cout<<"Pilihan Anda Salah!!!"<<endl;
	}
	cout<<"============================="<<endl;
	cout<<"Ingin lagi? ketik 'Y' jika iya = ";
	cin>>jawab;
if(jawab=='Y' || jawab=='y'){
	system("cls");
	goto awal;
	}
	else
	{
	cout<<"Inputan Anda Salah!!!"<<endl;
	
	}
return 0;

}

