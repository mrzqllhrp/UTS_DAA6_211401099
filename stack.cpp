#include <iostream>
using namespace std;

#define max 5
string data[max];
int top = 0;

bool isEmpty(){
    if(top == 0){
        return true;

    } else{
        return false;
    }

}

bool isFull(){
    if(top>= max){
        return true;
    } else{
        return false;
    }
}

void display(){
    if (!isEmpty()){
        cout<<" data tersimpan : "<<endl;
        for (int i = 0; i < top; i++){
            cout<< i + 1 <<". "<<data[i]<<endl;
        }
    } else{
            cout<<" data tidak tersedia ! "<<endl;
    }  
    
    if(isFull()){
    	cout<<"stack penuh"<<endl;
	}
	cout<<endl;
}
void push(){
    if(!isFull()){
    cout<<" masukkan data : ";
    cin>> data[top];
    top++;
    }
}

void pop(){
	if(!isEmpty()){
		top--;
	}
}

int main(){
    int pil;
    string isi;

    stack :
	system("cls");
    display();
        cout<<" menu utama "<<endl;
        cout << "1 push " <<endl;
        cout << "2 pop" <<endl;
        cout<<" pilihan : ";
        cin>>pil;

    if (pil == 1){
    	system("cls");
        push();
        goto stack;
    } else if (pil == 2){
        pop();
        goto stack;
    }
    system("cls");
    cout<<"program selesai";
}