#include <iostream>
using namespace std;

int main(){
	int pil,batas;
	
	cout<<"Masukan pilihan "<<endl;
	cout<<"1. Bilangan Ganjil"<<endl;
	cout<<"2. Bilangan Genap"<<endl;
	cin>>pil;
	cout<<"Masukan batas : ";
	cin>>batas;
	cout<<endl;
	
	if (pil==1){
		cout<<"Deret bilangan ganjil"<<endl;
		
		for(int i=1;i<=batas;i++){
			if(i%2!=0){
				cout<<i<<" ";
			}
		}
	}else if(pil==2){
		cout<<"Deret bilangan genap"<<endl;
		
		for (int i=1;i<=batas;i++){
			if(i%2==0){
				cout<<i<<" ";
			}
		}
	}else {
		cout<<"Salah masukan pilihan"<<endl;
	}
	}

