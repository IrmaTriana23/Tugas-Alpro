#include <stdio.h>
#include <conio.h>
#include <iostream>
	using namespace std;

int main()
{
	int huruf;
	cout<<"Masukkan huruf  kecil	:  "; cin>>huruf;
	cout<<endl;
	cout<<endl;

	//seleksi pembanding OR, salah satu kondisi bernilai benar
	if ((huruf == 'a') || (huruf == 'i') ||(huruf  == 'u') || (huruf == 'e') ||(huruf == 'o'))
	{
			cout<<"*****  Anda memasukkan huruf Konsonan  *****";
	}   else
	{
		cout<<"*****  Anda  memasukkan huruf Vokal  *****";
	}
}
