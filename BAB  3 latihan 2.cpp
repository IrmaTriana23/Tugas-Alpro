#include <stdio.h>
#include <conio.h>
#include <iostream>
	using namespace std;

int main()
{
	int nilai;
	cout<<"Masukkan nilai	:  "; cin>>nilai;
	cout<<endl;
	
	//Ini jarak
	cout<<endl;
	cout<<endl;
	
	if (nilai>50)
	{
		cout<<"        ------- SELAMAT !! ANDA LULUS  -------    ";
	} else
	{
		cout<<"        ------- MAAF, ANDA HARUS MENGULANG  -------    ";
	}
}
