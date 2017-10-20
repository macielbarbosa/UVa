#include <iostream>
using namespace std;

int aux;
int t[5];

int backtrack(int i, int res){
    if(res+t[i]==23 || res*t[i]==23 || res-t[i]==23)
        return soma;
    else backtrack(i-1,soma);

}

int main(){
    while(true){
        for(int i=0; i<5; i++){
            cin >> aux;
            t[i] = aux;
        }
        if(t[0]==0 && t[1]==0 && t[2]==0 && t[3]==0 && t[4]==0)
            break;
        if(backtrack(4,0)==23)
            cout << "Possible" << end;
        else
            cout << "Impossible" << endl;
    }
    return 0;
}
