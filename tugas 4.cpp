#include <stdio.h>
#include <conio.h>
#include  <iostream>
	using namespace std;
	
int main () 
{
	cout<<"--------  BEBAT BADAN IDEAL   --------"<<endl;
	
	//Ini jarak
	cout<<endl;
	cout<<endl;
	
	//Deklarasi Variabel
	double tb, bb ;
	cout<<"Tinggi Badan	:	" ; cin>>tb; 
	
	//Menghitung Berat  Badan Ideal
	bb = tb  - 100 - (0.1 * (tb-100)); cout<<endl;
	cout<<"Berat Badan Ideal Anda Adalah :   " <<bb; cout<<endl;
	return 0;
}
