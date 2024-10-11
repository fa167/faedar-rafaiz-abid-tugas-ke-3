#include<iostream>
using namespace std;

double hitungR(double c){
	double r = c * 4 / 5;
	return r;
}

double hitungK(double c){
	double k = c + 273;
	return k;
}

double hitungF(double c){
	double f = (c * 9 / 5) + 32;
	return f;
}

void tampilKonversi(double c){
	double r, k, f;
	r = hitungR(c);
	k = hitungK(c);
	f = hitungF(c);
	cout<<c<<" derajat celcius = "<<endl;
	cout<<r<<" derajat reamur"<<endl;
	cout<<k<<" derajat kelvin"<<endl;
	cout<<f<<" derajat fahrenheit"<<endl;
}

int main(){
	double c, r, k, f;
	cout<<"Konversi Suhu"<<endl;
	cout<<"masukan suhu celcius : "; cin>>c;
	tampilKonversi(c);
}
