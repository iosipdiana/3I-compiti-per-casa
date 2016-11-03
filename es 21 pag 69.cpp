#include <iostream>
using namespace std;
int main (void) {

int N = 0;// quantità N di numeri interi
int num;// numero intero
int i=1;// varuabile
int R=0;//resto
int s=0;// somma numeri dispari


cout<<"PROGRAMMA PER CALCOLARE LA SOMMA DI UNA SERIE DI NUMERI DISPARI"<<endl;
cout<<"________________________________________________________________"<<endl;
cout<<""<<endl;
cout<<"Puoi inserire una quantita' di numeri da 1 a 100, quanti numeri vuoi inseire?"<<endl;
cin>> N;


while(N<1 || N>100){
cout<<"ERRORE!la quantita' inserita deve essere compresa tra 1 e 100, inserire nuovamente:"<<endl;
cin>>N;
}


cout<<""<<endl;
cout<<"Aseggniamo un valore ai numeri:"<<endl;
while (i<=N){
 cout<<"Inscerisci un numero intero:";
 cin>>num;

R= num%2;
cout<<""<<endl;
cout<<"Divido il numero per 2, per verificare se e' pari o dispari, il suo resto e':"<<R<<endl;

if(R==1 || R==-1)
{
   cout<<"Il numero inserito e' dispari, quindi lo considero nella somma"<<endl;
   cout<<""<<endl;
    s=s+num;
}
else{
 cout<<"Il numero inserito e' pari quindi non lo considero nella somma"<<endl;
 cout<<""<<endl;
}

i++;}

cout<<"La somma dei numeri dispari inseriti e': "<<s<<endl;

}




