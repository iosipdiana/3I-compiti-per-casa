#include <iostream>
#define N 100
using namespace std;

void selection_sort(int v[], int dim);
void stampa(int v[], int dim);

int main(){
    int a[] = {-3,-1,0,7,4,5,7,8,10,1,9};
    int dim = 11;
    selection_sort(a, dim);
    stampa(a, dim);
    return 0;

}

void bubble_sort(int v[], int dim){
int i, k, sup, comodo;
bool Continua=true;
k=N;
while(Continua)
{
    Sup=k;
    Continua=false;
    for(i=0;I<S)
}
}

void selection_sort(int v[], int dim){
    int comodo;
    int posiz_minimo; // memorizza la posizione del valore minimo
    for (int i = 0; i < dim-1; i++){
            posiz_minimo=i;
        for (int j = i+1; j < dim; j++){
            if(v[j]<v[posiz_minimo])
            {
                posiz_minimo=j;
            }
        }
        comodo=v[posiz_minimo];
        v[posiz_minimo]=v[i];
        v[i]=comodo;
    }
}


void stampa(int v[], int dim){
    for(int i = 0; i < dim; i++){
        cout << v[i] << " ";
    }
}
