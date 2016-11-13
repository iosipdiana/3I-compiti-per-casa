#include <iostream>
using namespace std;

int main(){

int x=0;
int y=0;
int i;


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
    y==y-1;
  while(i<y)
    {

    x=x+x;
    i++;
    y--;

    }

cout<<"la potenza di base x ed esponente y e':"<<x<<endl;

}

return 0;
}
