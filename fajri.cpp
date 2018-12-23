#include <iostream>

using namespace std;

main ()
{
	int Jumlah_anak,Gaji_pokok,Tunjangan_jabatan,Tunjangan_keluarga,Total_gaji;
	char NIM[10],Nama_karyawan[20],jabatan[15];
	
	cout<<"*******************************";
	cout<<"\n!	DATA GAJI KARYAWAN		  !";
	cout<<"\n*****************************";
	
	cout<<"\n NIM:";
	cin>>NIM;
	
	cout<<"\n Nama karyawan:";
	cin>>Nama_karyawan;
	
	cout<<"\n jabatan:";
	cin>>jabatan;
	
	cout<<"\n Gaji pokok:";
	cin>>Gaji_pokok;
	
	cout<<"\n Tunjangan jabatan:";
	cin>>Tunjangan_jabatan;
	
	cout<<"\n Jumlah anak:";
	cin>>Jumlah_anak;
	
	Tunjangan_keluarga=Jumlah_anak*100000;
	cout<<"\n Tunjangan keluarga:"<<Tunjangan_keluarga;
	
	cout<<"\n ------------------------------";
	
	Total_gaji=Gaji_pokok+Tunjangan_jabatan+Tunjangan_keluarga;
	cout<<"\n Total gaji:"<<Total_gaji;
	
	cout<<"\n ------------------------------";
}
	
