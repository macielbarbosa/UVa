#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(void){
    int n,m,i,j,x,y,k;
    string *campo;
    while(scanf("%d %d", &n, &m) != EOF){
        campo = new string[n];
        for(i=0; i<n; i++){
            cin >> campo[i];
        }
        for(i=-1; i<n-1; i++)
            for(j=-1; j<m-1; j++) {
                for()
                /*if(i<0 || i==n || j<0 || j==m)
                    continue;*/
                if(campo[i+1][j+1]=='*'){
                    cout << "*";
                    continue;
                }

                cout << endl;
            }
        delete[] campo;
    }
}
