#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int iterasi, i = 1;
	double x0 = 1, fx = 0, fdx, error;
	bool cont = true;
	cout<<"*******Metode Iterasi*******\n"
		<<"Dengan menggunakan metode newton rhapson\n";
	while(fx == 0){
		cout<<"Pendekatan awal : \n"<<"x0 = ";
		cin>>x0;
		fx = -pow(1/2.718, x0) + x0;
		fdx = -(-pow(1/2.719, x0)) + 1;
		if(fx == 0){
			cout<<"Masukkan nilai kembali\n";
		}
	}
	cout<<"Masukkan toleransi galat : ";
	cin>>error;
	cout<<"Masukkan iterasi maksimal : ";
	cin>>iterasi;
	cout<<"Iterasi\t	x\t\t\tg(x)\t\t\tf(x)\n"
		<<"--------------------------------"
		<<"--------------------------------\n";
	for(i = 1; i<= iterasi, abs(fx)>=error; i++){
		cout<<i<<"\t"<<x0<<"\t\t"<<fx<<"\t\t"<<fdx<<"\n";
		x0 = x0-(fx/fdx);
		fx = -pow(1/2.718, x0) + x0;
		fdx = -(-pow(1/2.719, x0)) + 1;
	}
	cout<<"----------------------------"
		<<"----------------------------\n"
		<<"Akarnya = "<<x0<<"\n";
		system("PAUSE");
		return 0;
}

