
#include <iostream>
//#include <stdio.h>
//#include <string>
//#include <cmath>
//#include <vector>
//#include <algorithm>
using namespace std;

//Compare The triplets 


void Triplets1(int a[], int b[]){
	
#define SIZE 3

int resultado[]={0,0};
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

// Time Coversion


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

//Subarray Division

int Subarray1(int largo,int lista[],int dia, int mes){

	int acumulador=0;
	int resultados=0;
	for(int i=0; i<largo-mes+1;i++){
	for(int j=i;j<(i+mes);j++){
			acumulador=acumulador+lista[j];	
	}
		if (acumulador==dia){
			resultados=resultados+1;
		}
		acumulador=0;
	
	}
	cout<<"Resultado:"<<resultados;
	return resultados;

}

//The Minion Game	

//El String de Palabra solo funciona con mayuscula

void Minion(string palabra, int scoreMinion[]){
	
	cout<<palabra.length()<<endl;
	
	for(int i=0; i<palabra.length(); i++){
		if(palabra[i]=='A'||palabra[i]=='E'||palabra[i]=='I'||palabra[i]=='O'||palabra[i]=='U'){
			for(int j=1; j<palabra.length()-i+1;j++){
				cout<<"Vocal: "<<palabra.substr(i,palabra.length()-j-i+1)<<endl;
				scoreMinion[0]=scoreMinion[0]+1;
			}
		
		}
		else{
			for(int j=1; j<palabra.length()-i+1;j++){	
				cout<<"Consonante: "<<palabra.substr(i,palabra.length()-j-i+1)<<endl;
				scoreMinion[1]=scoreMinion[1]+1;
			}
		}
	}
	cout<<"Puntaje Vocales: "<<scoreMinion[0]<<endl;
	cout<<"Puntaje Consonantes: "<<scoreMinion[1]<<endl;
	
	if(scoreMinion[0]>scoreMinion[1]){
		cout<<"Vocales ganan"<<endl;}
	else if(scoreMinion[1]>scoreMinion[0]){
		cout<<"Consonantes ganan"<<endl;}
	else{
		cout<<"Empate"<<endl;
	}
	
		
	return;



}

//Cipher

void Cipher(){
	
}

//Pairs

int Pairs(int largo,int diferencia, int listadif[]){
	
	int contdif=0;
	
	for(int i=0; i<largo; i++){
		for(int j=i+1; j<largo; j++){
			//cout<<i<<"-"<<j<<"="<<abs(listadif[i]-listadif[j])<<endl;
			int resultado= abs(listadif[i]-listadif[j]);
			if (resultado==diferencia){
				contdif=contdif+1;
			}
			
		}	
		
	}
	cout<<"Resultado: "<<contdif<<endl;
	return contdif;
	
	
}



//int argc, char** argv
int main(){
	

	//int a[]={20,28,70};
	//int b[]={50,60,50};
	//Triplets1(a,b);
	//cout<<"Hora Militar: "<<TimeConversion1("01:41:15PM")<<endl; 
	//int lista[]= {2,2,1,3,2};
  	//Subarray1(5,lista,4,2);
  	//int scoreMinion[]={0,0};
  	//Minion("POO",scoreMinion);
  	//Cipher();
  	//int listadif[]={1,5,3,4,2};
  	//Pairs(5,3,listadif);
  	return 0;
}

