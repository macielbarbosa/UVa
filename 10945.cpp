#include <iostream>
#include <string>
using namespace std;

bool caracValido(char carac){ return carac!='.' && carac!=',' && carac!='?' && carac!='!' && carac!=' ';}

bool palindromo(string str){
    int tam = str.length();

    for(int i=0, j=tam-1; i<tam; i++){
        if(!caracValido(str[i]))
            continue;
        while(j>=0){
            if(!caracValido(str[j])){
                j--;
                continue;
            }
            if(tolower(str[i])!=tolower(str[j]))
                return false;
            j--;
            break;
        }
    }
    return true;
}

int main(void){
    string str;

    getline(cin,str);
    while(str!="DONE"){
        if(palindromo(str))
            cout << "You won't be eaten!" << endl;
        else
            cout << "Uh oh.." << endl;
        getline(cin,str);
    }
}
