//Juan Abdiel Mercado Velazquez A01229754	
#include<iostream>
#include<cmath>
using namespace std;
void fibonacci(int c){
	int i,n;
	int a=0,b=1;
	for(i=0;i<=c-2;i++){
		n=a+b;
		a=b;
		b=n;
	}
	cout<<"Fibonacci("<<c<<")="<<n<<endl;
}


int main(){
	int v;
	cout<<"Dime hasta que valor quieres de Fibonacci"<<endl;
	cin>>v;
	if(v==0){
	cout<<"Fibonacci("<<v<<")=0"<<endl;
	}else{
	fibonacci(v);
}
	
}

