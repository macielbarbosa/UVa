#include <iostream>
using namespace std;

int main(){
    int n, folha, cont;

    while(1){
        cin >> n;
        if(n==0) break;
        cont = 1;
        folha = 1;
        cout << "Printing order for " << n << " pages:" << endl;
        if(n%4!=0){
            if(n%2!=0 && ((n-1)%4)!=0 || n==1){
                cout << "Sheet 1, front: Blank, 1" << endl;
                if(n==1) continue;
                cout << "Sheet 1, back : 2, " << n << endl;
                if(n==3) continue;
                n--;
            }
            else{
                cout << "Sheet 1, front: Blank, 1" << endl;
                cout << "Sheet 1, back : 2, Blank" << endl;
                if(n==2) continue;
            }
            cont = 3;
            folha = 2;
        }
        if(((n-1)%4)==0){
            cout << "Sheet " << folha << ", front: Blank, 3" << endl;
            cout << "Sheet " << folha << ", back : 4, " << n << endl;
            if(n==5) continue;
            folha++;
            cont = 5;
            n--;
        }
        while(1){
            cout << "Sheet " << folha << ", front: " << n-- << ", " << cont << endl;
            if(n == (cont++)) break;
            cout << "Sheet " << folha << ", back : " << cont << ", " << n-- << endl;
            if(n == (cont++)) break;
            folha++;
        }
    }
}
