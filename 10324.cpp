#include <iostream>
using namespace std;

void ordenar(int &i, int &j){
    int aux;
    if(i>j){
        aux = i;
        i = j;
        j = aux;
    }
}

int main(void){
    char str[1000000];
    int n,i,j,k,caso=1;
    bool igual;

    while(scanf("%s", &str)!= EOF){
        printf("Caso %d:\n", caso++);
        cin >> n;
        while(n--){
            igual = true;
            cin >> i >> j;
            ordenar(i,j);
            for(k=i; k<=j; k++){
                if(str[k]!= str[i]){
                    igual = false;
                    break;
                }
            }
            if(igual)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
}
