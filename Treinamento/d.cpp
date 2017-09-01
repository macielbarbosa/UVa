#include <iostream>
#include <list>

using namespace std;

bool contains(int n, list<int> l){
    list<int>::iterator it;
    bool result=false;
    for(it = l.begin(); it != l.end(); it++){
        if(*it == n)
            result = true;
    }
    return result;
}

void outlist(list<int> l){
    l.sort();
    list<int>::iterator it;
    for(it = l.begin(); it != l.end(); it++){
        if(*it!=-1)
            cout << " " << *it;
    }
}

int main(){
    list<int> l1,l2,l3,f1,f2,f3;
    list<int>::iterator it, it2;
    int T, S, n , c1,c2,c3;
    cin >> T;
    while(T--){
        c1=0;
        c2=0;
        c3=0;
        cin >> S;
        while(S--){
            cin >> n;
            l1.push_back(n);
        }
        cin >> S;
        while(S--){
            cin >> n;
            l2.push_back(n);
        }
        cin >> S;
        while(S--){
            cin >> n;
            l3.push_back(n);
        }
        f1 = l1;
        f2 = l2;
        f3 = l3;
        for(it = l1.begin(), it2 = f1.begin(); it != l1.end(); it2++, it++){
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
        cout << "Case #" << T+1 << ":" << endl;
        if(c1>=c2 && c1>=c3){
            cout << "1 " << c1;
            outlist(l1);
            cout << endl;
        }
        if(c2>=c1 && c2>=c3){
            cout << "1 " << c2;
            outlist(l2);
            cout << endl;
        }
        if(c3>=c2 && c3>=c1){
            cout << "1 " << c3;
            outlist(l3);
            cout << endl;
        }
    }
}
