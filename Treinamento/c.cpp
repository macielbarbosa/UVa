#include <iostream>
using namespace std;

int main(){
    int n, folha, cont;
    cin >> n;
    while(n!=0){
        cont = 1;
        cout << "Printing order for " << n << " pages:" << endl;
        if(n%2!=0){
            cout << "Sheet 1, front: Blank, 1" << endl;
            if(n==1) break;
        }
        else{
            cout << "Sheet 1, front: " << n << ", 1" << endl;
        }
        if(n%4!=0){
            cout << "Sheet 1, back : 2, Blank" << endl;
            if(n==2) break;
        }
        else{
            cout << "Sheet 1, back : 2, " << n-1 << endl;
        }
        folha = 2;
        while(1){
            cout << "Sheet " << folha << ", front: " << --n << ", " << ++cont << endl;
            if(n == cont) break;
            cout << "Sheet " << folha << ", back : " << ++cont << ", " << --n << endl;
            if(n == cont) break;
            folha++;
        }
        cin >> n;
    }
}
