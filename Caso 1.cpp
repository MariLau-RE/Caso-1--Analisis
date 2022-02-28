
#include <iostream>
#include <bits/stdc++.h>
//#include <stdio.h>
//#include <string>
//#include <cmath>
//#include <vector>
//#include <algorithm>
using namespace std;

//En los comentarios de cada implementación de cada ejercicio 
//haga una explicación donde deje claro la diferencia 
//entre las dos implementaciones que hace a una mejor que la otra.

//Compare The triplets 


void Triplets1(int a[], int b[]){
	
cout<<"\nTriplets 1"<<endl;
	
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
cout << "\nResultado: "<<"Ana: "<< resultado[0] << " , "<<"Bob: "<< resultado[1] << endl;
return ;

}

// Time Coversion

//AM PM siempre debe ir en mayuscula


string TimeConversion1(string time){

cout<< "\nTime Conversion 1"<<endl;

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
	
cout<< "\nSubarray Division 1"<<endl;


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
	cout<<"\nResultado: "<<resultados;
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

void Cipher(string code, int shift){

	int codexor=0;
	string resultado="";
	std::string decoder[]={"","0","00","000"};

    bool decoder0;
    bool decoder1;
    bool decoder2;
    bool decoder3;
    bool codebool;
 
 	for(int i=0; i<(code.length() - (shift-1)); i++){
	
	    std::istringstream(decoder[1].substr(i,1)) >> decoder1;
		std::istringstream(decoder[2].substr(i,1)) >> decoder2;
		std::istringstream(decoder[3].substr(i,1)) >> decoder3;
		std::istringstream(code.substr(i,1)) >> codebool;
	
		codexor=(((decoder1 ^ decoder2) ^ decoder3) ^codebool);
		decoder[0]=decoder[0] + to_string(codexor);
		decoder[1]=decoder[1] + to_string(codexor);
		decoder[2]=decoder[2] + to_string(codexor);
		decoder[3]=decoder[3] + to_string(codexor);
		//cout<<"decoder[0]:"<<decoder[0]<<endl;
		//cout<<"decoder[1]:"<<decoder[1]<<endl;
		//cout<<"decoder[2]:"<<decoder[2]<<endl;
		//cout<<"decoder[3]:"<<decoder[3]<<endl;
	}
	
	resultado = decoder[3].substr((shift -1),(decoder[3].length() - shift+1));
	cout<<"Decodificado:"<<resultado<<endl;
	return;
	
}

void Cipher1(string code, int shift){

	int codexor=0;
	string resultado="";
	std::string decoder[]={}; //={"","0","00","000"};
	decoder[0]="";
	cout<<"decoder[0]:"<<decoder[0]<<endl;
	
	for(int h=1; h=shift; h++){
		cout<<"aqui"<<endl;
		decoder[h]=decoder[(h-1)]+"0";
	}
	cout<<"decoder[1]:]"<<decoder[1]<<endl;
	   
    bool decoder0;
    bool decoder1;
    bool decoder2;
    bool decoder3;
    bool codebool;
 
 	for(int i=0; i<(code.length() - (shift-1)); i++){
	
	    std::istringstream(decoder[1].substr(i,1)) >> decoder1;
		std::istringstream(decoder[2].substr(i,1)) >> decoder2;
		std::istringstream(decoder[3].substr(i,1)) >> decoder3;
		std::istringstream(code.substr(i,1)) >> codebool;
	
		codexor=(((decoder1 ^ decoder2) ^ decoder3) ^codebool);
		decoder[0]=decoder[0] + to_string(codexor);
		decoder[1]=decoder[1] + to_string(codexor);
		decoder[2]=decoder[2] + to_string(codexor);
		decoder[3]=decoder[3] + to_string(codexor);
		//cout<<"decoder[0]:"<<decoder[0]<<endl;
		//cout<<"decoder[1]:"<<decoder[1]<<endl;
		//cout<<"decoder[2]:"<<decoder[2]<<endl;
		//cout<<"decoder[3]:"<<decoder[3]<<endl;
	}
	
	resultado = decoder[3].substr((shift -1),(decoder[3].length() - shift+1));
	cout<<"Decodificado:"<<resultado<<endl;
	return;
	
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
	

	//int a[]={5,6,7};
	//int b[]={3,6,10};
	//Triplets1(a,b);
	//int a1[]={17,28,30};
	//int b1[]={99,16,8};
	//Triplets1(a1,b1);
	
	//cout<<"\nHora Militar: "<<TimeConversion1("12:41:15AM")<<endl; 
	//cout<<"\nHora Militar: "<<TimeConversion1("07:05:45PM")<<endl; 
	
	//int lista[]= {1,2,1,3,2};
  	//Subarray1(5,lista,3,2);
	//int lista2[]= {1,1,1,1,1,1};
  	//Subarray1(6,lista2,3,2);
  	
  	
  	//int scoreMinion[]={0,0};
  	//Minion("POO",scoreMinion);
  	
  	
  	Cipher("1110100110", 4);
  	//Cipher("1110101001",4);
  	//Cipher1("1110001",2);
  	
  	//int listadif[]={1,5,3,4,2};
  	//Pairs(5,3,listadif);
  	return 0;
}

