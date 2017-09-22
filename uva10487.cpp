#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int menorModulo(int v, vector<int> vec){
    int result = vec[0], mod = abs(v-vec[0]);
    for(int i=1; i<vec.size(); i++)
        if(abs(v-vec[i]) < mod){
            result = vec[i];
            mod = abs(v-vec[i]);
        }
    return result;
}

int main(){
    int aux, i, j, n, m, caso=1;
    vector<int> num, val, sum;
    while(cin>>n && n!=0){
        for(i=0; i<n; i++){
            cin >> aux;
            num.push_back(aux);
        }
        cin >> m;
        for(i=0; i<m; i++){
            cin >> aux;
            val.push_back(aux);
        }
        for(i=0; i<n-1; i++)
            for(j=i+1; j<n; j++)
                sum.push_back(num[i]+num[j]);
        sort(sum.begin(),sum.end());
        cout << "Case " << caso++ << ":" << endl;
        for(i=0; i<m; i++){
            cout << "Closest sum to " << val[i] << " is " << menorModulo(val[i],sum) << "." << endl;
        }
        num.clear();
        val.clear();
        sum.clear();
    }
    return 0;
}
