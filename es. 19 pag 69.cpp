#include <iostream>
using namespace std;
main (void){

int N=0;//numero
int num=1;//quantità di numeri
int r;//resto

cout<<"Questo programma visulaizza i primi 100 numeri pari:"<<endl;

while(num<=100)
{
    r= N%2;

    if(r==0)
    {
        cout<<"";
        cout<<N<<",";
        num++;
    }
    N++;
}





}

