#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define INFTO 1123456789
#define MAX 512

int N,E,x;
int dist[MAX][MAX];

int floydwarshall(){
  int cont = 0;
  int direto,indireto,i,j,k;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      for(k=0;k<N;k++){

        if(k!=j && k!=i){
          direto = dist[i][j];
          indireto = dist[i][k] + dist[k][j];
          //dist[i][j] = min(direto,indireto);
          if (indireto < direto) return -1;
          else if (indireto == direto){
            cont++;
            break;
            }
          else continue;
        }

      }
    }
  }
  return cont/2;
}

int main(){
  int i,j;

  cin >> N;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      cin >> x;
      dist[i][j] = x;
    }
  }
  printf("%d\n",floydwarshall());
  
return 0;
}


