#include <iostream>
#include <cstdio>
using namespace std;

int main () {
    int m,n,t,divisao,resto;
    while(scanf("%d %d %d",&m,&n,&t)!=EOF){
        if(m==n || t/m){
            cout << t/m << endl;
        }
        if(m<n){
            resto = t%n;
            divisao = t/m;
            cout << divisao - resto << endl;
        }
        if(m>n){
            resto = t%m;
            divisao = t/n;
            cout << divisao - resto << endl;
        }
    }
    return 0;
}
