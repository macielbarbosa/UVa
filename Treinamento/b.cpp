#include <iostream>
#include <vector>

using namespace std;

bool contains(int n, vector<int> l){
    vector<int>::iterator it;
    bool result=false;
    for(it = l.begin(); it != l.end(); it++){
        if(*it == n)
            result = true;
    }
    return result;
}

int main(){
    vector<vector> m;
    vector<int> aux;
    vector<int>::iterator iti;
    vector<vector>::iterator itv;
    int S, n , c1,c2,c3, cont;
    while(1){
        cin >> n;
        if(n==0) break;
        m.clear();
        c1=0;
        c2=0;
        c3=0;
        cont=0;
        while(n--){
            S=5;
            aux.clear();
            while(S--){
                cin >> n;
                aux.push_back(n);
            }
            m.push_back(aux);
        }
        for(itv = m.begin(), iti = *itv.begin(); itv != l1.end(); itv++){
            if(!contains(*it,l2) && !contains(*it,l3))
                c1++;
            else{
                *it2 = -1;
            }
        }
        for(it = l2.begin(), it2 = f2.begin(); it != l2.end(); it2++, it++){
            if(!contains(*it,l1) && !contains(*it,l3))
                c2++;
            else{
                *it2 = -1;
            }
        }
        for(it = l3.begin(), it2 = f3.begin(); it != l3.end(); it2++, it++){
            if(!contains(*it,l2) && !contains(*it,l1))
                c3++;
            else{
                *it2 = -1;
            }
        }
        cout << "Case #" << cont++ << ":" << endl;
        if(c1>=c2 && c1>=c3){
            cout << "1 " << c1;
            outlist(f1);
            cout << endl;
        }
        if(c2>=c1 && c2>=c3){
            cout << "2 " << c2;
            outlist(f2);
            cout << endl;
        }
        if(c3>=c2 && c3>=c1){
            cout << "3 " << c3;
            outlist(f3);
            cout << endl;
        }
        l1.clear();
        l2.clear();
        l3.clear();
    }
}

