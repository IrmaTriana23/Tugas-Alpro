#include <stdio.h>
#include <conio.h>
#include <iostream>
	using namespace std;
	
//Deklarasi variable
	struct {
		int jam;
		int menit;
		int detik;
		} 
		dtg, prg, selisih;
	
int main ()
{
	//memasukkan  data jam1
	cout<<"--------DATANG--------"  <<endl;
	
	//Ini jarak
	cout<<endl;
	cout<<endl;
	
	cout<<"Jam	:     "; cin>>dtg.jam; 
	cout<<"Menit	:     "; cin>>dtg.menit;
	cout<<"Detik	:     "; cin>>dtg.detik;
	
	//hasil data jam1
	cout<<endl;
	cout<<endl;
	cout<<"Jam   :  Menit   :   Detik  " ; cout<<endl;
	cout<<"  " <<dtg.jam <<"   :     " <<dtg.menit <<"    :     " <<dtg.detik <<endl;
	
	//Ini jarak
	cout<<endl<<endl;
	
	//masukkan data  jam2
	cout<<"--------PERGI--------"  <<endl;
	
	//Ini jarak
	cout<<endl;
	cout<<endl;
	
	cout<<"Jam	:     "; cin>>prg.jam; 
	cout<<"Menit	:     "; cin>>prg.menit;
	cout<<"Detik	:     "; cin>>prg.detik;
	
	//hasil data jam2
	cout<<endl;
	cout<<endl;
	cout<<"Jam   :  Menit   :   Detik  " ; cout<<endl;
	cout<<"  " <<prg.jam <<"   :     " <<prg.menit <<"    :     " <<prg.detik <<endl;
	
	
	//menghitung  selisih  detik
	if ((prg.detik-dtg.detik) < 0) {
		selisih.detik=(60+prg.detik)- dtg.detik;
		prg.menit;
	}
	else {
		selisih.detik=prg.detik - dtg.detik;
	}
	
	//menghitung selisih  menit
	if ((prg.menit-dtg.menit) < 0) {
		selisih.menit=(60+prg.menit)- dtg.menit;
		prg.jam;
	}
	else {
		selisih.menit=prg.menit - dtg.menit;
	}
	
	//menghitung selisih  jam
	selisih.jam=prg.jam-dtg.jam;
	
	//ini jarak
	cout<<endl;
	cout<<endl;
	//Ini jarak
	
	cout<<endl;
	cout<<endl;
	
	

	
	//memasukkan data selisih jam
	cout<<"--------SELISIH--------" <<endl;
	cout<<selisih.jam <<"  Jam    "<<selisih.menit<<"  Menit  "<<selisih.detik<<"  Detik   " <<endl;
	return 0 ;
}
	
	
