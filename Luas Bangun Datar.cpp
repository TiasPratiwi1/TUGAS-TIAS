#include<iostream>
#include<conio.h>
#define phi 3.14
using namespace std;
main()
{
	float luas,p,l,s,r,a,t;
	int menu;
	char ulang;
	
	do{
	
	cout<<"========================================"<<endl;
	cout<<"===   Menghitung Luas Bangun Datar   ==="<<endl;
	cout<<"========================================"<<endl;
	cout<<endl;
	cout<<"===   Kode Bangun Datar   ==="<<endl;
	cout<<"1. Persegi\n";
	cout<<"2. Persegi Panjang\n";
	cout<<"3. Segitiga\n";
	cout<<"4. Lingkaran\n";
	cout<<"Masukkan Kode Bangun Ruang : ";
	cin>>menu;
	cout<<endl;
	
	switch(menu){
		case 1 :
			cout<<"=== Menghitung Luas Persegi ==="<<endl;
			cout<<"==============================="<<endl;
			cout<<"Masukkan Sisi : ";
			cin>>s;
			luas = s*s;
			cout<<"Luas Persegi Adalah "<<luas<<endl;
		break;
		
		case 2 : 
			cout<<"=== Menghitung Luas Persegi Panjang ==="<<endl;
			cout<<"======================================="<<endl;
			cout<<"Masukkan Panjang : ";
			cin>>p;
			cout<<"Masukkan Lebar : ";
			cin>>l;
			luas = p*l;
			cout<<"Luas Persegi Panjang Adalah "<<luas<<endl;
		break;
		
		case 3 : 
			cout<<"=== Menghitung Luas Segitiga ==="<<endl;
			cout<<"================================"<<endl;
			cout<<"Masukkan Alas : ";
			cin>>a;
			cout<<"Masukkan Tinggi : ";
			cin>>t;
			luas = a*t/2;
			cout<<"Luas Segitiga Adalah "<<luas<<endl;
		break;
		
		case 4 : 
			cout<<"=== Menghitung Luas Lingkaran ==="<<endl;
			cout<<"================================="<<endl;
			cout<<"Masukkan Jari-Jari : ";
			cin>>r;
			luas = phi*r*r;
			cout<<"Luas Lingkaran Adalah "<<luas<<endl;
		break;
	}	
		cout<<"\nKembali Ke Menu Utama? (Y/N)";
		cin>>ulang;
	}
		while (ulang=='y' || ulang=='Y');
}
