#include <iostream>
#include <cstdio>
using namespace std;

long double calculado [5001];

long double fibonacci (int n) {
    if (calculado[n] != -1) return calculado[n];
    calculado[n] = fibonacci(n-1) + fibonacci(n-2);
    return calculado[n];
}

int main () {
    int n;
    calculado[0] = 0;
    calculado[1] = 1;
    for(int i=2; i<5001; i++){
        calculado[i] = -1;
    }
    while (scanf("%d",&n)!=EOF) {
        cout << "The Fibonacci number for " << n << " is " << fibonacci(n) << endl;
    }
    return 0;
}
