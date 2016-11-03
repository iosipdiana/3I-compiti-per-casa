#include <iostream>
using namespace std;

main (void){

int Q=0;//quantità di valori
int N=0;//numero
int num=1;//quantità di numeri
int r;//resto

cout<<"Questo programma visulaizza i numeri pari fino ad un generico valore Q:"<<endl;
cout<<"Fino a che numero vuoi visualizzare i numeri pari?"<<endl;
cin>>Q;

while(num<=Q)
{
    r= N%2;

    if(r==0)
    {
        cout<<""<<endl;
        cout<<N<<",";
        num++;
    }
    N++;
}
}
