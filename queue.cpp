#include <iostream>
using namespace std;

#define max 5
string data[max];
int top = 0;

bool isfull(){
	if(top >= max){
		return true;
	}else{
		return false;
	}
}

bool isempty(){
	if(top == 0){
		return true;
	}else{
		return false;
	}
}

void view(){
	if(!isempty()){
		cout<<" data antrian : "<<endl;
		for(int a = top-1; a>=0; a--){
		cout<< a+1 << ". "<<data[a]<<endl;
		} 
	} else{
		cout<<"antrian kosong"<<endl;
	}
	
	if(isfull()){
		cout<<"antrian penuh"<<endl;
	}
	cout<<endl;
}

void enqueue(){
	if(!isfull()){
		cout<<" masukkan data :";
		cin>>data[top];
		top++;
	}
}

void dequeue(){
	if(isempty){
		for(int a = 0; a < top-1; a++){
			data[a] = data[a+1];
		}
		top--;
	}
}

int main(){
	int pil;
	string isi;
	
	queue:
		system("cls");
		view();
		cout<<" menu utama"<<endl;
		cout<<" 1. enqueue"<<endl;
		cout<<" 2. dequeue"<<endl;
		cout<<" plihan : ";
		cin>> pil;
	
	if(pil == 1){
		system("cls");
		enqueue();
		goto queue;
	}else if (pil == 2){
		system("cls");
		dequeue();
		goto queue;
	}
}