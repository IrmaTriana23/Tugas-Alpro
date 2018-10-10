#include <stdio.h>
#include <conio.h>
#include <iostream>
	using namespace std;

int main ()
{
	int suhu, x=37;
	//memasukkan variabel
	
	cout<<"Masukkan suhu : "; cin>>suhu;
	cout<<endl;
	cout<<endl;

	
	//menentukan suhu
	if ((suhu > x)) 
		cout<<"	__  Suhu saat ini adalah panas __";
		
	if ((suhu <=x)) 
		cout<<"	__  Suhu saat ini adalah dingin __";	 
	return 0;
}
