#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int V;
priority_queue <int> Vec;

int soma(long long int valor){
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

    //freopen("C:\\Users\\galkmim\\Desktop\\E_24_in.txt","r",stdin);
    int i, j;
    int N, K, aux,res;

    Vec.push(0);
    scanf("%d %d",&N,&K);
    for(i=0;i<N;i++){
        scanf("%d", &V);
        while(V>0){
            res = soma(V);
            Vec.push(res);
            V = V-res;
        }
    }
    for(i=0;i<K-1;i++){
        Vec.pop();
    }
    printf("%d",Vec.top());


return 0;
}
 