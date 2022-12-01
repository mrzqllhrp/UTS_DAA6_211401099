#include <iostream>
using namespace std;

int main()
{
    int jmlh_arr;
    
    cout<<".__________________________________________________."<<endl;
    cout<<"| Program Data Mahasiswa dan Pengurutan Sesuai NIM |"<<endl;
    cout<<"|__________________________________________________|"<<endl;
    cout<<endl;
    
    cout<<"   Masukkan jumlah siswa: "; 
	cin>>jmlh_arr;
    
    string nama[jmlh_arr];
    int nim[jmlh_arr];
    int m = sizeof(nim) / sizeof(jmlh_arr);
    
    cout<<endl;
    cout<<"---------------------------------------------------";
    cout<<endl;
    
    for (int i = 0; i < jmlh_arr; i++){
    	cout<<" Mahasiswa Ke (" << i+1<<")"<<endl;
    	cin.ignore();
        cout<<" Masukkan nama mahasiswa "<<": "; getline(cin, nama[i]); 
        cout<<" Masukkan NIM mahasiswa "<<": "; cin >> nim[i];
        cout<<endl;
    }
    
    
    for (int j = 0; j < m - 1 ; j++){
    	for (int k = 0; k < m - 1 ; k++){
    		if (nim[k] > nim[k + 1]){
    			swap (nim[k], nim[k + 1]);
			}
		}
	}
	
	cout<<"-----------------------------------------------------------"<<endl;
	cout<<endl;
	cout<<" Urutan Mahasiswa Berdasarkan NIM : ";
	cout<<endl;

	    for (int l = 0; l < m; l++){
		    cout<<"  "<<nim[l]<<endl;
		    cout<<endl;
	    }
    
	return 0;
}