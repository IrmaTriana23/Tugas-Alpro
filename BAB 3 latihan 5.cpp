#include <stdio.h>
#include <conio.h>
#include <iostream>
	using namespace std;

int main ()
{
	double tot_beli, potongan=0, jum_bayar=0 ;
	cout<<"Total Pembelian			= Rp "; cin>>tot_beli;
	if (tot_beli >= 50000)
		potongan = 0.2 * tot_beli ;
	else
		potongan = 0.05 * tot_beli ;
		
		//ini jarak
		
	cout<<"Besarnya Potongan		= Rp  " <<potongan<<endl<<endl;
		jum_bayar= tot_beli - potongan ;
	cout<<"==============================="; cout<<endl;
	cout<<"Jumlah yang harus dibayarkan	= Rp  "<<jum_bayar;
	getch () ;
	return 0;
}
