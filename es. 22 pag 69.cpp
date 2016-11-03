#include <iostream>
using namespace std;
main(void){

int N=0;//quantità N numeri interi
int num=0;// numero intero
int i=0;//varabile
int X=0;//numero intero generico
int contmag=0;//contatore numeri maggiori di X
int contmin=0;//contatore numeri minori di X
int contug=0;//contatore numeri uguali a X



cout<<"Iniziamo con l'inserire un qualsiasi numero intero X:";
cin>>X;
cout<<""<<endl;

cout<<"Dopodiche' inseriamo un numero N di numeri interi:"<<endl;
cout<<"Quanti numeri vuoi usare?"<<endl;
cin>>N;

cout<<""<<endl;
cout<<"Aseggniamo un valore ai numeri:"<<endl;
while (i<N){
 cout<<"Inscerisci un numero intero:";
 cin>>num;

 if(num>X)
 {
     contmag++;
 }
 else
 {
     if(num<X)
 {
     contmin++;
 }
 else
 {
     if(num==X)
     {
         contug++;
     }
 }
 }


 i++;
 }

 cout<<""<<endl;
 cout<<"Sui "<<N<<" numeri inseriti "<<contmag<<" sono maggiori di "<<X<<endl;
 cout<<""<<endl;
 cout<<"Sui "<<N<<" numeri inseriti "<<contmin<<" sono minori di "<<X<<endl;
 cout<<""<<endl;
 cout<<"Sui "<<N<<" numeri inseriti "<<contug<<" sono uguali a "<<X<<endl;
}
