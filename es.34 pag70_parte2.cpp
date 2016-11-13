#include <iostream>
using namespace std;

int main(){

float N;
int M;
float p=1;

cout<<"inserisci un numero generico reale N:";
cin>>N;

cout<<"Inserisici un numero inero M";
cin>>M;


if(M>=0)
{
for (int i=0; i<M; i++)
        {
        p=p*N;
        }
}
else
{
    M==(-1)*M;
    for (int i=0; i<M; i++)
        {
        p==p*N;
        }

    p==1/p;
}

cout<<"Il riaultato della potenza di base N e esponente M è:"<<p<<endl;
return 0;
}




