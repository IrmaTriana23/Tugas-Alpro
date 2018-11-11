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
	while (i<=n)
	{
		hasil+=i;
		i++;
	}
	cout<<"Jumlah Bilangan Sampai Dengan N: " <<hasil<<endl;
	
cout<<"Nilai Rata-Rata: ";
while (rerata>=i)
{
	rerata=hasil/n;
	i++;
}
cout<<"2"<<endl;

return 0;
}

