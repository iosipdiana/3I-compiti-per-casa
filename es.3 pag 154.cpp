
#include <iostream>
 using namespace std;


 main()
 {
 int v[10]; // vettore
 int N;//quantità di numeri
 int n;//numeri
 int i=0;// contatore

 do{
 cout<<"Scegli quanti numeri vuoi inserire,devono essere <=10";
 cin>>N;
 }
 while(N>10);

 for(i=1;i<=N;i++)// inserisce i numeri uno dopo l'altro in base alla quantità scelta
 {
    cout<<"Digita il "<<i<<" numero: ";
    cin>>
     v[i];
 }

 cout<<"I numeri inseriti vislualizzati nell'ordine inverso sono:"<<endl;
 for(i=N;i>0;i--) // ciclo for per visualizzare i numeri contenuti nel vettore nell'ordine inverso
 {
     cout<<v[i]<<" ";
 }
}











