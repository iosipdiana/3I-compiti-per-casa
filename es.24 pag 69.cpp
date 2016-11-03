#include <iostream>
using namespace std;
main(void){

 int N=0;// quantità di numeri nella sequenza
 int num=0;// numero intero
 int MAX=0;// numero massimo della sequenza
 int MIN=0;// numeor minimo della sequenza
 int i=0;//variabile

 cout<<"Da quanti valori è costituita la sequanza di numeri?"<<endl;
 cin>>N;

 cout<<"Aseggniamo un valore ai numeri:"<<endl;

 cout<<"Inscerisci un numero intero:";
 cin>>num;

 MAX==num;
 MIN==num;

 N=N-1;

while (i<N){
 cout<<"Inscerisci un numero intero:";
 cin>>num;

 if(num>MAX)
 {
     MAX==num;
 }
 else
 {
    if(num<MIN)
    {
        MIN==num;
    }
 }

 i++;
 }

 cout<<"Il massimo è: "<<MAX<<endl;
 cout<<"Il minimo è: "<<MIN<<endl;


}

