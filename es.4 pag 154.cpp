#include <iostream>
using namespace std;
main()
{

int v[10];
int N;//quantità di numeri
int i=0;//contatore
int d=0;// somma posti dispari
int p=1;// prodotto posti pari


do{
 cout<<"Scegli quanti numeri vuoi inserire,devono essere <=10";
 cin>>N;
 }
 while(N>10);


for(i=0;i<N;i++)// inserisce i numeri uno dopo l'altro in base alla quantità scelta
{
    cout<<"Digita il "<<i+1<<" numero: ";
    cin>>v[i];
}


for(i=0;i<N;i++)
{
    if(i%2==1) p*=v[i];// prodotto dei numeri che occupano un posto pari all'interno del vettore

    else d+=v[i];// somma di numeri che occupano un posto dispari all'intenro del vettore
}

cout<<"Il prodotto dei componenti di posto pari e': "<<p<<endl;

cout<<"La somma dei componenti di posto dispari e': "<<d<<endl;

}




