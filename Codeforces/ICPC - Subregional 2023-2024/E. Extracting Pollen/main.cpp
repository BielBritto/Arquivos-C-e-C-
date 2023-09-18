#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int V[1000001];
int S[1000001];

 
int soma(int valor){
    int s;
    int stemp;
    stemp = 0;

    while(valor/10 > 0){
        stemp += valor%10;
        valor = valor/10;
    }
    s = valor + stemp;
    return s;
}

int main(){

    int i, j;
    int N, K;

    cin >> N >> K; 
    for(i=0;i<N;i++){
        scanf("%d", &V[i]);
        S[i] = soma(V[i]);
    }


    for(i=0;i<K;i++){
        
        for()
        V[j] = V[j]- soma(V[j]);

        if(j!=N-1){
            while(V[j] < V[j-1])
        }


    }
        if(K == 0) break;


return 0;
}
 