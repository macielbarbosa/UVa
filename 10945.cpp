#include <iostream>
#include <string>
using namespace std;

inline bool caracValido(char carac){return carac!='.' || carac!=',' || carac!='?' || carac!='!';}

bool palindromo(string str){
    int tam = str.length();
    cout << tam << endl;
    for(int i=0, j=tam; i<=tam; i++){
        if(!caracValido(tolower(str[i])){
            cout << "*";
            continue;
        }
        for( ; j>=0 || str[i]==str[j]; j--){
            if(!caracValido(tolower(str[j])){
                cout << "*";
                continue;
            }
            if(tolower(str[i])!= tolower(str[j]))
                return false;
        }
    }
    return true;
}

int main(void){
    string palavra;
    cin.ignore();
    getline(cin,palavra);
    while(palavra != "DONE"){
        if(palindromo(palavra))
            cout << "You won't be eaten!" << endl;
        else
            cout << "Uh oh.." << endl;
        cin.ignore();
        getline(cin,palavra);
    }
}
