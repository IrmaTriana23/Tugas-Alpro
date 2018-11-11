#include <stdio.h>
#include <conio.h>
#include <iostream>
	using namespace std;
int main ()
{
	int i, n, hasil;
	float rerata;
	cout<<"Masukkan Nilai N: " ;cin>>n;
	i=0;
	hasil=0;
	rerata=0;
	do
	{
		hasil+=i;
		i++;
	}
	while (i<=n);
	cout<<"Jumlah Bilangan Dari 1 Sampai Dengan N: " <<hasil<<endl;
	
cout<<"Nilai Rata-Rata: "<<endl;
do
{
	rerata=hasil/n;
	cout<<rerata<<endl;
}
while (rerata>=i);

return 0;
}

