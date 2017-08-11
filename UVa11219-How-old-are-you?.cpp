#include <iostream>
#include <string>
using namespace std;

struct Data{
    short dia;
    short mes;
    short ano;
};

void setData(Data &data,const string str){
    data.dia = (str[0]-'0')*10 + str[1]-'0';
    data.mes = (str[3]-'0')*10 + str[4]-'0';
    data.ano = (str[6]-'0')*1000 + (str[7]-'0')*100 + (str[8]-'0')*10 + str[9]-'0';
}

void analiseDatas(const Data &atual, const Data &nasc){
    int idade;
    if(atual.ano == nasc.ano && atual.mes == nasc.mes && atual.dia == nasc.dia)
        cout << "0";
    else if(atual.ano<nasc.ano)
        cout << "Invalid birth date";
    else if(atual.ano==nasc.ano && atual.mes<nasc.mes)
        cout << "Invalid birth date";
    else if(atual.ano==nasc.ano && atual.mes==nasc.mes && atual.dia<nasc.dia)
        cout << "Invalid birth date";
    else{
        idade = atual.ano-nasc.ano;
        if(atual.mes<nasc.mes) idade--;
        else if(atual.mes==nasc.mes && atual.dia<nasc.dia) idade--;
        if(idade>130)
            cout << "Check birth date";
        else
            cout << idade;
    }
}

int main(void){
    int n, caso=1;
    string str1, str2;
    Data atual, nasc;
    cin >> n;
    cin.ignore();
    while(n--){
        cin >> str1;
        cin >> str2;
        cout << "Case #" << caso++ << ": ";
        setData(atual,str1);
        setData(nasc,str2);
        analiseDatas(atual,nasc);
        cout << endl;
    }
}
