#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#define <MAX=1000>

using namespace std;
main()
{
    int arrayNumeri[MAX], dato, max;
    unsigned int i, num=0, posizMax;
    arrayNumeri[0]=0;

    cout<<"inserire i valori, insrire 0 per finire"<<endl;
    cin>>dato;

    while(dato!=0 && num<MAX)
    {
        arrayNumeri[num]=dato;
        num++;

        if(num<MAX)
        {
            cout<<dato<<endl;
        }
    }

    max= arrayNumeri[0];
    posizMax=0;
    for(i=1;i<MAX;i++)
    {
        if(arrayNumeri[i])
        {
            max=arrayNumeri[i];
            posizMax=i;
        }
    }

    cout<<"La posizione massima è:"<<posizMax<<endl;
    cout<<"Il numero massimo è;"<<max<<endl;
    system("PAUSE");
}
