#include <iostream>
using namespace std;

void ordenar(int &i, int &j, bool &inverso);
int main(void){
    int i,j,k,cont,maxi;
    unsigned int n;
    bool inverso;
    while(scanf ("%d %d", &i, &j) != EOF){
        inverso = false;
        ordenar(i,j,inverso);
        for(k=i, maxi=0; k<=j; k++){
            for(n=k, cont=1; n!=1; cont++){
                if(n%2!=0)
                    n = 3*n+1;
                else
                    n /= 2;
            }
            if(cont>maxi)
                maxi = cont;
        }
        if(!inverso)
            cout << i << " " << j << " " << maxi << endl;
        else
            cout << j << " " << i << " " << maxi << endl;
    }
    return 0;
}
void ordenar(int &i, int &j, bool &inverso){
    int aux;
    if(j<i){
        inverso = true;
        aux = i;
        i = j;
        j = aux;
    }
}
