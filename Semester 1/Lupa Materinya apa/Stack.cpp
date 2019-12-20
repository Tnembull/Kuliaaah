// Tugas Mengimplementasikan konsep linked list untuk membuat stack
// Muhammad Nur Ashiddiqi _ 1857051014

#include <iostream>
using namespace std;

struct Element // Struktur Element
{
    int data;
    Element *link;
};

Element *top = NULL;//pointer atas untuk melacak bagian atas tumpukan 
bool isEmpty()// Berfungsi untuk memeriksa apakah tumpukan kosong atau tidak
{
    if(top == NULL)
	return true; else
	return false;
    }

void push(int value)// Berfungsi untuk memasukkan elemen dalam tumpukan
{
	Element *ptr = new Element();
	ptr->data = value;
	ptr->link = top;
	top = ptr;
	cout<<"Nilai "<<value<<" dimasukkan ke dalam Stack \n";
	}	

void pop ()// Berfungsi untuk menghapus elemen dari stack
{
	if ( isEmpty() )
		cout<<"Stack Kosong";
	else
{
	cout<<"Stack Telah Di Pop\n";
	Element *ptr = top;
	top = top -> link;
	delete(ptr);
	}
}

void showTop()// Berfungsi untuk menunjukkan elemen di bagian atas tumpukan
{
	if ( isEmpty() )
	cout<<"Stack Kosong";
	else
	cout<<"Elemen Diatas Sekarang adalah: "<< top->data;
	cout<<endl;
}

void printStackList()// Berfungsi untuk Menampilkan tumpukan
{
	if ( isEmpty() )
	cout<<"Stack Kosong";
	else
{
	Element *temp=top;
	while(temp!=NULL)
	{	
	cout<<"|"<<temp->data<<"|"<<"\n";
	temp=temp->link;
		}
cout<<"\n";
	}
}

int main()// Fungsi utama 
{
	int pil, flag=1, value;


 while( flag == 1){
cout<<"\n==================\n";
cout<<"1.Push \n";
cout<<"2.Pop \n";
cout<<"3.showTop \n";
cout<<"4.Keluar \n";
cout<<"====================\n";
cout<<"Pilih : ";cin>>pil;
cout<<"====================";
cout<<endl<<endl;
	switch (pil)//Program Menu menggunakan Switch
	{
	case 1: cout<<"Masukan Nilai: ";
			cin>>value;
			push(value);
			cout << "====List Stack====\n";
			printStackList();
			break;
	case 2: pop();
			cout << "====List Stack====\n";
			printStackList();
			break;
	case 3: showTop();
			cout << "====List Stack====\n";
			printStackList();
			break;
	case 4: flag = 0;
			cout << endl << endl;
			break;
         
 }
 }
    return 0;
}
