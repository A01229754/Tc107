#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

int palindromos(int x, int y){
vector<int> valores;
int dif=y-x;
int conta=0;
int n_str;
int z;

	for(int i=0; i<dif+1; i++){
		valores.push_back(x);
		x++;
	}
	for(int i=1; i<=dif+1; i++){
		if(valores[i]<=10){
			conta=conta+1;
		}else{
		     	n_str=to_string(x);
			string reversed = string(n_str.rbegin(),n_str.rend());
			if (reversed==n_str){
				conta=conta+1;
			}else{
				for(i=0; i<15; i++){
					n_reverse=to_int(reversed);
					
				}
			}
			
	}
return conta;
}

int main(){
int inferior,superior;

	cout<<"Dame el valor mas bajo"<<endl;
	cin>>inferior;
	cout<<"Dame el valor mas alto"<<endl;
	cin>>superior;
	cout<<"El numero total de palindromos es"<<palindromos(inferior,superior)<<endl;
	
	
}
