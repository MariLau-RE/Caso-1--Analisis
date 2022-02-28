#include <iostream>
#include <math.h>
using namespace std;

//Compare The triplets 
// Dos Algoritmos 
//The rating for Alice's challenge is the triplet a = (a[0], a[1], a[2]), and the rating for Bob's challenge is the triplet b = (b[0], b[1], b[2]).

//The task is to find their comparison points by comparing a[0] with b[0], a[1] with b[1], and a[2] with b[2].

//If a[i] > b[i], then Alice is awarded 1 point.
//If a[i] < b[i], then Bob is awarded 1 point.
//If a[i] = b[i], then neither person receives a point.

void Triplets1(){
	
#define SIZE 3

int resultado[]={0,0};
int a[]={20,28,70};
int b[]={50,60,50};
int comparador;
int temporal=0;


for(int temporal=0; temporal<SIZE; temporal++){
	
comparador=(a[temporal] - b[temporal]);

if (comparador>0){
	
	resultado[0]=resultado[0]+1;
	}
if (comparador<0){

	resultado[1]=resultado[1]+1;
	
	}
}
cout << " Resultado: "<<"Ana:"<< resultado[0] << " , "<<"Bob:"<< resultado[1] << endl;
return ;

}

string TimeConversion1(string time){

string minseg=time.substr(3,5);
int hora= stoi(time.substr(0,2));
string AMPM= time.substr(8,1);

if (AMPM == "A")	{
	if(hora==12){
		hora=0;
	}
}
if (AMPM == "P")	{
	if(hora<12){
	hora=hora+12;}
}
time=(hora<10)?"0"+to_string(hora)+":"+minseg:to_string(hora)+":"+minseg;
return time;
}
	



int main(int argc, char** argv){
	


	//Triplets1();
	cout<<"Hora Militar: "<<TimeConversion1("01:41:15PM")<<endl;  
  
  return 0;
}

