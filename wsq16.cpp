#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;

float Average(float sum, int lines){
	float average;
	average=sum/(lines/2);
	return average;
}
int main(){
ifstream file ("93cars.dat.txt");
string line;
int line_number=0;
float cityMPG=0, hwyMPG=0, midprice=0;
if (file.is_open()){
while (getline(file, line)){
	line_number++;
	if (line_number%2==1){
		cityMPG += stof(line.substr(52,2));
		hwyMPG += stof(line.substr(55,2));
		midprice += stof(line.substr(42,4));
		}
	}
  }
cout << "El promedio de gas en la ciedad es "<< Average(cityMPG,line_number) << endl;
cout << "El promedio de gas en la carretera es "<< Average(hwyMPG,line_number) << endl;
cout << "El promedio del precio del lote es "<< Average(midprice,line_number) << endl;
return 0;
}
