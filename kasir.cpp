#include <unistd.h>
#include <iostream>
#define nmax 200

using namespace std;

struct belanja
{
    string nama_brg;
    int jmlh_brg,harga_brg,total_belanja;
};

struct belanja supermarket[nmax]; 

int main()
{
	int m,jmlh_bayar;
	cout<<endl<<endl<<endl;
	cout<<"            PROGRAM KASIR "<<endl;
	cout<<"   ________________________________"<<endl;
	cout<<endl;
	   	
	cout<<" Masukkan jumlah belanja: "; 
	cin >> m;
	cout<<endl;
	
	for (int i = 0; i < m; i++){
		cout<<"barang (" << i + 1<<")";
		cout<<endl;
		
		cout<<" Nama Barang      : "; 
		cin>>supermarket[i].nama_brg;
		
		cout<<" Jumlah Barang   : "; 
		cin>>supermarket[i].jmlh_brg;
		
		cout<<" Harga per-barang: "; 
		cin>>supermarket[i].harga_brg;
		
		supermarket[i].total_belanja = supermarket[i].jmlh_brg * supermarket[i].harga_brg;
		jmlh_bayar = supermarket[i].total_belanja + jmlh_bayar;
		cout<<endl;
	}
	
	cout<<"  Sedang Mencetak Struk Belanjaan.....";
	sleep(3);
	system("cls");
	
	cout<<".______________________________________________________.\n";
	cout<<"|                                                      |\n";
	cout<<"|--------------------STRUK BELANJAAN-------------------|\n";
	cout<<"|---------JLN. DATUK KABU NO. 21227 MEDAN DENAI--------|\n";
	cout<<"|------------------TELP. 081234567890------------------|\n";	
	cout<<"|______________________________________________________|\n";

		for (int k = 0; k < m; k++){
			cout<<endl;
			cout<<" Barang ke (" << 1 + k<<")";
			cout<<endl;
			cout<<" Nama Barang         : "<<supermarket[k].nama_brg;
			cout<<endl;
			cout<<" Jumlah Barang        : "<<supermarket[k].jmlh_brg;
			cout<<endl;
			cout<<" Harga per-Barang     : "<<supermarket[k].harga_brg;
			cout<<endl;
			cout<<" Total Harga : "<<supermarket[k].total_belanja;
			cout<<endl;	
		}
	cout<<endl;	
	cout<<" Biaya yang Harus Dibayar : "<<jmlh_bayar;
}