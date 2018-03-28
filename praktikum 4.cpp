#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int iterasi, i = 1;
	double x0 = 1, fx = 0, gx, error;
	bool cont = true;
	cout<<"*******Metode Iterasi*******\n";
	while(fx == 0){
		cout<<"Pendekatan awal : \n"<<"x0 = ";
		cin>>x0;
		fx = pow(1/2.718, x0) + x0;
		gx = -pow(1/2.718, x0);
		if(fx == 0){
			cout<<"Masukkan kembali nilai\n";
		}
	}
	cout<<"Masukkan toleransi galat : ";
	cin>>error;
	cout<<"Masukkan iterasi maksimal : ";
	cin>>iterasi;
	cout<<"Iterasi\t	x\t\t\tg(x)\t\t\tf(x)\n"
		<<"--------------------------------"
		<<"--------------------------------";
	for(i = 1; i<= iterasi, abs(fx) >= error; i++){
		cout<<"\n"<<i<<"\t\t"<<x0<<"\t\t"<<gx<<"\t\t\t"<<fx<<"\n";
		x0 = gx;
		gx = -pow(1/2.718, x0);
		fx = pow(1/2.718, x0) + x0;
	}
	cout<<i<<"\t"<<x0<<"\t\t"<<gx<<"\t\t"<<fx<<"\n";
	cout<<"----------------------------"
		<<"----------------------------\n"
		<<"Akarnya = "<<x0<<"\n";
		system("PAUSE");
		return 0;
}

