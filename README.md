# fajriani11.github.io
#include<iostream>
using namespace std;

int main()
{
	string Nama, Nik, Jabatan, status;
	int gaji, tun_jab, tun_kel, tun_anak, jum_anak;
	int total;
	cout<<"*******************************"<<endl;
	cout<<"\n!	DATA GAJI KARYAWAN    !  "<<endl;
	cout<<"\n*******************************"<<endl;
	cout<<"masukkan Nama : ";cin>>Nama;
	cout<<"masukkan Nik : ";cin>>Nik;
	cout<<"masukkan Jabatan : ";cin>>Jabatan;
	cout<<"masukkan status   :";cin>>status;
	cout<<"masukkan gaji pokok : ";cin>>gaji ;
	
	if(Jabatan=="manager"){
		tun_jab=1000000;
		}else if (Jabatan=="supervisor"){
			tun_jab=750000;
		}else if (Jabatan=="staff"){
			tun_jab=500000;
		}
	if (status=="menikah"){
		tun_kel=200000;
		cout<<"masukkan jumlah anak 	:" ;
		cin>>jum_anak;
		tun_anak=100000*jum_anak;
	}else if (status=="single"){
		tun_kel=0;
		tun_anak=0;
	}
	cout<<"*******************************"<<endl;
	cout<<"Nama  :"<<Nama<<endl;
	cout<<"NiK   :"<<Nik<<endl;
	cout<<"tunjangan jabatan :"<<tun_jab<<endl;
	cout<<"status		 : "<<status<<endl;
	cout<<"tunjangan keluarga :"<<tun_kel<<endl;
	cout<<"tunjangan anak     :"<<tun_anak<<endl;
	
	total= gaji+tun_jab+tun_kel+tun_anak;
	cout<<"gaji pokok  	:"<<gaji<<endl;
	cout<<"total gaji   	:"<<total<<endl;

     
}
