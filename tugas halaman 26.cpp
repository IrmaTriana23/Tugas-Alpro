#include<stdio.h>
#include<conio.h>
#include<iostream>
	using namespace std;

int main()
{
	//Deklarasi variabel
	int bilangan;
	
	//Inputkan bilangan
cout<<"Masukan bilangan: " ;cin>>bilangan;
cout<<endl;
cout<<endl;
	string message;
	message = bilangan%2==0 ? "Angka tersebut adalah bilangan genap" : "Angka tersebut adalah bilangan ganjil";
cout<<message;
return 0;
}

