#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

vector<string> vstr;
vector<char> vchar;

bool contem(char c){
    for(int i=0; i<vchar.size(); i++){
        if(c==vchar[i]){
            return true;
        }
    }
    return false;
}

int tamanho(){

    for(int i=0; i<vstr.size(); i++){
        for(int k=0; k<vstr[i].length(); k++){
            if(!contem(vstr[i][k]))

        }
    }
}

int main(){
    int T, n, caso=1;
    string str;
    cin >> T;
    while(T--){
        vstr.clear();
        vchar.clear();
        cin >> n;
        while(n--){
            cin >> str;
            vstr.push_back(str);
        }
        cout << "Case " << caso++ << ": " << tamanho() << endl;
    }
    return 0;
}
