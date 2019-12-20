#include <iostream>
#include <cstring>
using namespace std;
class HargaHP {
private :						//dapat diaskes oleh program secara khusus seperti string; int; char; float;
    char namapembeli[50];		//sebagai tipe data
    int headset;				//sebagai tipe data
    int baterai;				//sebagai tipe data
    int LCD;					//sebagai tipe data
    int casehp;					//sebagai tipe data
    int powerbank;				//sebagai tipe data
    int charger;				//sebagai tipe data
    int kembali;				//sebagai tipe data
    char nmkasir [30], kd[10];	//sebagai tipe data
    int n;						//sebagai tipe data
    int m;						//sebagai tipe data
    int bayar;					//sebagai tipe data
    
public :						/*disinilah badan private akan diakses, dimana dalam
Pembentuk atau outputan yang diberikan akan mengisikan data yang dimasukan dalam program ke tempatnya*/
	void Rumus () {
        const char *kdi="bate";					//jika char tanpa const konversi tidak berlaku dari string konstan ke "char", jadi kami tambahkan const didepannya
        const char *merka="baterai";			//disini menggunakan pointer sebagai jalan akses dan membuat objeknya
        int hargab[1000];
        *hargab=50000;
        const char *kdm="head";
        int hargac[1000];
        *hargac=15000;
        const char *merkb="headset";
        const char *kdn="char";
        int hargad[1000];
        *hargad=50000;
        const char *merkc="charger";
        const char *kdl="power";
        int hargae[1000];
        *hargae=100000;
        const char *merkd="powerbank";
        const char *kdo="case";
        int hargaf[1000];
        *hargaf=50000;
        const char *merke="Case HP";
        const char *kdc="LCD";
        int hargah[1000];
        *hargah=5000;
        const char *merkf="LCD";
        
    cout<<"**************************************************************************"<<endl;
    cout<<"         PENGECEKAN HARGA BARANG                 "<<endl;
    cout<<"                BULIN CELL                       "<<endl;
    cout<<"       Jl. Ilkom Unila No.01 FMIPA               "<<endl;
    cout<<"          No. Telp. (127) 0.0.1                  "<<endl;
    cout<<"PUSATNYA BELANJA GADGET DAN AKSESORIS TERLENGKAP!"<<endl;
    cout<<"**************************************************************************"<<endl;
    cout<<endl;
    cout<<"Nama Kasir    : ";cin.getline(nmkasir,30);
    cout<<"Nama Pembeli  : ";cin.getline(namapembeli,50);
    cout<<"Banyaknya Harga Barang Yang diingin di cek : ";cin>>n;cin.ignore();
    cout<<endl;
    cout<<"Daftar Nama Barang dan Kodenya : "<<endl;
    cout<<"1. Baterai   (bate)    "<<endl;
    cout<<"2. Powerbank (power) "<<endl;
    cout<<"3. Charger   (char)    "<<endl;
    cout<<"4. LCD       (LCD)         "<<endl;
    cout<<"5. Headset   (head)    "<<endl;
    cout<<"6. Case HP   (case)    "<<endl;

    for(m=1; m<=n;m++)
    {
        cout<<"Masukkan Pengecekan harga ke- :"<<m<<endl;
        cout<<"Masukkan Kode Barang          :";cin.getline(kd,10); //untuk membaca masukan sampai ditemukan karakter garis baru, tetapi tdk menyimpannya. 
        if ( strcmp (kd, kdi)==0)       //berfungsi untuk mencari nilai selisih 2 buah data string
        {
        cout<<"Tipe Barang     : "<<merka<<endl;
        cout<<"Harga Barang    : "<<"Rp."<<*hargab<<endl;
        }
        else if (strcmp(kd,kdm)==0){
        cout<<"Tipe  Barang     : "<<merkb<<endl;
        cout<<"Harga Barang     : "<<"Rp."<<*hargac<<endl; }

        else if(strcmp(kd,kdn)==0) {
        cout<<"Tipe Barang      : "<<merkc<<endl;
        cout<<"Harga Barang     : "<<"Rp."<<*hargad<<endl;
        }
        else if (strcmp(kd,kdl)==0) {
        cout<<"Tipe Barang      : "<<merkd<<endl;
        cout<<"Harga Barang     : "<<"Rp."<<*hargae<<endl;
        }
        else if (strcmp(kd,kdo)==0) {
        cout<<"Tipe Barang      : "<<merke<<endl;
        cout<<"Harga Barang     : "<<"Rp."<<*hargaf<<endl;
        }
        else if (strcmp(kd,kdc)==0) {
        cout<<"Tipe Barang      : "<<merkf<<endl;
        cout<<"Harga Barang     : "<<"Rp."<<*hargah<<endl;
        }
        else { cout<<"Kode salah!"<<endl; }
    }

    }
    //untuk mencetak
    void Cetak () {
    cout<<"**************************************************************************"<<endl;
    cout<<"             INPUT PEMBELIAN CUSTOMER BULIN CELL                          "<<endl;
    cout<<"                  Jl. Ilkom Unila No.01 FMIPA                             "<<endl;
    cout<<"                      No. Telp. (127) 0.0.1                               "<<endl;
    cout<<"        PUSATNYA BELANJA GADGET DAN AKSESORIS TERLENGKAP!                 "<<endl;
    cout<<"**************************************************************************"<<endl<<endl;
    cout<<"Nama   customer  : ";cin.getline (namapembeli,50);
    cout<<"Jumlah Headset   : ";cin>>headset;cin.ignore();
    cout<<"Jumlah Baterai   : ";cin>>baterai;cin.ignore();
    cout<<"Jumlah LCD       : ";cin>>LCD;cin.ignore();
    cout<<"Jumlah Case      : ";cin>>casehp;cin.ignore();
    cout<<"Jumlah Powerbank : ";cin>>powerbank;cin.ignore();
    cout<<"Jumlah Charger   : ";cin>>charger;cin.ignore();
    system("clear");
    cout<<"**************************************************************************"<<endl;
    cout<<"             STRUK PEMBAYARAN DI BULIN CELL                               "<<endl;
    cout<<"               Jl. Ilkom Unila No.01 FMIPA                                "<<endl;
    cout<<"                   No. Telp. (127) 0.0.1                                  "<<endl;
    cout<<"        PUSATNYA BELANJA GADGET DAN AKSESORIS TERLENGKAP!                 "<<endl;
    cout<<"**************************************************************************"<<endl<<endl;
    cout<<"Rincian Dana yang harus "<<namapembeli<<" bayarkan adalah sebagai berikut :"<<endl;
    cout<<"Total Harga Headset                 : "<<headset*15000<<endl;
    cout<<"Total Harga Baterai                 : "<<baterai*50000<<endl;
    cout<<"Total Harga LCD                     : "<<LCD*5000<<endl;
    cout<<"Total Harga Case HP                 : "<<casehp*50000<<endl;
    cout<<"Total Harga Powerbank               : "<<powerbank*100000<<endl;
    cout<<"Total Harga Charger                 : "<<charger*50000<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"Total Harga Seluruhnya              : "<<(LCD*5000)+(headset*15000)+(casehp*50000)+(baterai*50000)+(powerbank*100000)+(charger*50000)<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"Pelanggan Bayar                     : ";cin>>bayar;cin.ignore();
    kembali=bayar-((LCD*5000)+(headset*15000)+(casehp*50000)+(baterai*50000)+(powerbank*100000)+(charger*50000));
    if(kembali>0)
    { cout<<"Uang Kembalian anda                 : "<<"Rp."<<kembali<<endl;
    cout<<"TERIMAKASIH SUDAH BERBELANJA DI BULIN CELL...."<<endl;
    }
    else if (kembali<0) {
        cout<<"Uang anda kurang                : "<<"Rp."<<kembali*-1<<endl;
        cout<<"Anda harus membayar lagi sebesar "<<"Rp."<<kembali*-1<<endl;
    }
    else {
        cout<<"uang anda PAS! "<<endl;
    cout<<"\n\nTERIMAKASIH SUDAH MELAKUKAN PEMBELIAN DI BULIN CELL.... "<<endl;
    }
    }
};

int main()
{
	
    HargaHP HP;
    int pil;
    char yt;
    atas:
 system("clear");
    cout<<"*************************************************"<<endl;
    cout<<"     SELAMAT DATANG DI BULIN CELL                "<<endl;
    cout<<"      Jl. Ilkom Unila No.01 FMIPA                "<<endl;
    cout<<"          No. Telp. (127) 0.0.1                  "<<endl;
    cout<<"PUSATNYA BELANJA GADGET DAN AKSESORIS TERLENGKAP!"<<endl;
    cout<<"*************************************************"<<endl<<endl;
    cout<<"Menu BULIN cell          : "<<endl;
    cout<<"1. Cek Harga Barang          "<<endl;
    cout<<"2. Pesan Dan Bayar           "<<endl;
    cout<<"Pilih Menu Yang Diinginkan : ";cin>>pil;cin.ignore();
    system("clear");
    switch (pil) {
case 1:
    HP.Rumus();
    break;
case 2:
    HP.Cetak();
    break;
default :
    cout<<"Pilihan tidak terdapat dalam menu. "<<endl;
    cout<<"Terimakasih silahkan keluar dari program......"<<endl;
    return 0;
    break;
     }
     cout<<"Mau kembali ke menu utama? [Y/T] ";cin>>yt;cin.ignore();
     switch(yt) {
 case 'Y':
     system("clear");
    goto atas;
    break;
 case 'T':
     system("clear");
    cout<<"Terimakasih Sudah mengunjungi BULIN CELL....."<<endl;
    break;
 default:
    cout<<"Terimakasih silahkan keluar dari program......"<<endl;
    break;
    }
     }
