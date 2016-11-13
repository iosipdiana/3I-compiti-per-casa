#include <iostream>
using namespace std;

int main ()
{
    int n=0;
    cout<<"Digita un numero inferiore a 1000: "<<endl;
    cin>>n;

    while(n>1000)
    {
        cout<<"ERRORE! il numero da inserire deve essere minore di mille, inserisci un altro numero: ";
        cin>>n;
    }

    int i=1;

    while(i<=3 && n!=0){

        if(i==1)
        {
            cout<<"il numero ha "<<n%10<<" unita'"<<endl;
        }
        else{
            if(i==2){
                cout<<"il numero ha "<<n%10<<" decine"<<endl;
            }
            else{
                cout<<"il numero ha "<<n%10<<" centinaia"<<endl;
            }
        }

       n=n/10;
       i++;



    }



return 0;
}
