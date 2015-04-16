#include<iostream>
#include<cmath>
#include<string>
using namespace std;

bool Palindromo (string c){
	string b = c;
	reverse(c.begin(),c.end());
	if(b==c){
	return true;
	}else{
	return false;
	}
}

int main(){
	string a;
	cout<<"Dame el texto en mayusculas"<<endl;
	cin>>a;
	if(Palindromo(a)==true){
	cout<<"Es un palindromo"<<endl;
	}else{
	cout<<"No es un palindromo"<<endl;
	}
}
