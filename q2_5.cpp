//Juan Abdiel Mercado Velazquez A01229754
#include<iostream>
#include<cmath>

using namespace std;
long superpower(long x,long y){
	int c=2;
	int d=x;
	while(c<=y){
		d=d*x;
		c++;
	}
	return d;
}

int main(){
	int a;
	int b;
	cout<<"Dame el valor que quieres elevar"<<endl;
	cin>>a;
	cout<<"Dame el valor al que quieres elevar"<<endl;
	cin>>b;
	long sp=superpower(a,b);
	cout<<"La potencia del numero es: "<<sp<<endl;
	return 0;
}
