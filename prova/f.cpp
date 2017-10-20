#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;


struct Jogador{
    string nome;
    int atk, def;
};

vector<Jogador> j;

void ordenar(){
    Jogador aux;

    for(int i=1; i<10; i++){
        if(j[i].atk>=j[0].atk){
            aux = j[i];
            j[i] = j[0];
            j[0] = aux;
        }
    }
    sort(j.begin(),j.end()-1);
    //(j.begin()+6,j.begin()+10);
}

int main(){
    Jogador aux;
    int T, caso=1;
    cin >> T;
    while(T--){
        for(int i=0; i<10; i++){
            cin >> aux.nome;
            cin >> aux.atk;
            cin >> aux.def;
            j.push_back(aux);
        }
        ordenar();
        cout << "Case " << caso++ << ":" << endl;
        cout << "(" << j[0].nome << ", " << j[1].nome << ", " << j[2].nome << ", " << j[3].nome << ", " << j[4].nome << ")" << endl;
        cout << "(" << j[5].nome << ", " << j[6].nome << ", " << j[7].nome << ", " << j[8].nome << ", " << j[9].nome << ")" << endl;
    }
    return 0;
}
