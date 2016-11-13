#include <iostream>
using namespace std;

int main(){

int x=0;
int y=0;
int i;
int p=1;

cout<<"Inserisci un numero generico x maggiore di 0:";
cin>>x;

while(x<0)
{
    cout<<"ERRORE!il numero generico x deve essere maggiore di 0, inserisci un altro numero:";
    cin>>x;
}


cout<<"Inserisci un numero generico y maggiore di 0:";
cin>>y;

while(y<0)
{
    cout<<"ERRORE!il numero generico y deve essere maggiore di 0, inserisci un altro numero:";
    cin>>y;
}

cout<<""<<endl;


if(y==1)
{
    cout<<"la potenza di base x ed esponente y e':"<<x<<endl;
}
else
{
  for (int i=0;i<y;i++) {
    p=p+x;
    }
cout<<"la potenza di base x ed esponente y e':"<<p<<endl;
}

return 0;
}
