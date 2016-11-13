#include <iostream>
using namespace std;

int main(){

float N;
int M;
float p=1;

cout<<"inserisci un numero generico reale N:";
cin>>N;

cout<<"Inserisici un numero inero M con M>=0:";
cin>>M;

while(M<0)
{
    cout<<"ERRORE! M deve essere maggiore o uguale a 0, inserisci un ltro numero:";
    cin>>M;
}

for (int i=0; i<M; i++)
        {
        p=p*N;
        }
cout<<"Il riaultato della potenza di base N e esponente M è:"<<p<<endl;
return 0;
}




