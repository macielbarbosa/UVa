#include <iostream>
using namespace std;

void division(int N, int M, int X, int Y);
int main(void){
    int K, N, M, X, Y;
    cin >> K;
    while(K!=0){
        cin >> N >> M;
        for(int i=0; i<K; i++){
            cin >> X >> Y;
            division(N,M,X,Y);
        }
        cin >> K;
    }
}
void division(int N, int M, int X, int Y){
    if(N==X || M==Y)
        cout << "divisa" << endl;
    else if(X<N && Y>M)
        cout << "NO" << endl;
    else if(X>N && Y>M)
        cout << "NE" << endl;
    else if(X>N && Y<M)
        cout << "SE" << endl;
    else if(X<N && Y<M)
        cout << "SO" << endl;
}
