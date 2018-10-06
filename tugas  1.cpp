#include <stdio.h>
#include <conio.h>
#include <iostream>
	using  namespace std;
	
int main()
{
	// Deklarasi variabel
	;double yard, kaki, inchi, meter;
	cout<<"Masukkan satuan meter	: "  ; cin>>meter;
	
	//Menghitung konversi
	yard = 1.0936 * meter ; cout<<endl;
	kaki = 3.2808 * meter ; cout<<endl;
	inchi = 39.370  * meter ;  cout<<endl;
	
	//Menampilkan Hasil
	cout<<endl; 
	cout<<meter<<"   Meter	= "<<yard<<" Yard" <<endl;
	
	//Menampilkan kaki
	cout<<meter<<"   Meter	= "<<kaki<<" Kaki" <<endl;
	
	//Menampilkan inchi
	cout<<meter<<"   Meter	= "<<inchi<<" Inchi" <<endl;
}

