#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	float phi=3.14,p,l,t,s,r,T,rk,tk,volume;
	int menu;
	char ulang;
	
	do {
		cout<<"=========================================="<<endl;
		cout<<"===   Menghitung Volume Bangun Ruang   ==="<<endl;
		cout<<"=========================================="<<endl;
		cout<<endl;
		cout<<"===   Kode Bangun Datar   ==="<<endl;
		cout<<"1. Balok\n";
		cout<<"2. Kubus\n";
		cout<<"3. Tabung\n";
		cout<<"4. Kerucut\n";
		cout<<"Masukkan Kode Bangun Datar : "<<endl;
		cin>>menu;
		cout<<endl;
		
		switch(menu){
			case 1 : {
				cout<<"=== Menghitung Volume Balok ==="<<endl;
				cout<<"==============================="<<endl;
				cout<<"Masukkan Panjang : "; cin>>p;
				cout<<"Masukkan Lebar : "; cin>>l;
				cout<<"Masukkan Tinggi : "; cin>>t;
				volume = p*l*t;
				cout<<"Volume Balok Adalah "<<volume<<endl;
				break;
			}
			case 2 : {
				cout<<"=== Menghitung Volume Kubus ==="<<endl;
				cout<<"==============================="<<endl;
				cout<<"Masukkan Sisi : "; cin>>s;
				volume = s*s*s;
				cout<<"Volume Kubus Adalah "<<volume<<endl;
				break;
			}
			case 3 : {
				cout<<"=== Menghitung Volume Tabung ==="<<endl;
				cout<<"================================"<<endl;
				cout<<"Masukkan Jari-Jari : "; cin>>r;
				cout<<"Masukkan Tinggi : "; cin>>T;
				volume = phi*r*r*T;
				cout<<"Volume Tabung Adalah "<<volume<<endl;
				break;
			}
			case 4 : {
				cout<<"=== Menghitung Volume Kerucut ==="<<endl;
				cout<<"================================="<<endl;
				cout<<"Masukkan Jari-Jari : "; cin>>rk;
				cout<<"Masukkan Tinggi : "; cin>>tk;
				volume = phi*rk*rk*tk/3;
				cout<<"Volume Kerucut Adalah "<<volume<<endl;
				break;
			}
		}
		cout<<"Apakah Anda Mau Ke Menu Awal? (Y/N)";
		cin>>ulang;
	}
	while (ulang=='y' || ulang=='Y');
}
