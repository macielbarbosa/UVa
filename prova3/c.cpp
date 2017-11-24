#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main () {
    int p,q,r,s,t,u;
    bool solucao;
    cout.precision(4);
    while(scanf("%d %d %d %d %d %d",&p,&q,&r,&s,&t,&u)!=EOF){
        solucao=false;
        for(float x=0; x<=1; x+=0.0001){
            if((p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u) < 0.0001){
                cout << x << endl;
                solucao=true;
                break;
            }
        }
        if(!solucao) cout << "No solution" << endl;
    }
}
