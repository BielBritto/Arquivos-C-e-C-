#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
int decrementos(int *Dif,int N, int *Orig, int *soma){
  *soma = *soma+Dif[N+1];
  int i,j, retorno = 0;
  if (N<0) return 0;
 
  
  for (i=N;i>=0;i--){
 
    if(Dif[i]>1){
      Dif[i]--;
      for(j=i+1;j<N+2;j++)
        Dif[j] = Orig[j] - (Orig[i] - Dif[i]);
      return 1;
    }
 
    else if(Dif[i] == 1){
      retorno = 2;
    }
 
  }
  return retorno;
  
}
 
int main(){
  
  int i;
  int N, max;
  int P[5001], Orig[5001];
  int* soma;
  soma = (int*) malloc(sizeof(int));
  *soma = 0;
 
  for(i=0;i<5001;i++){
    Orig[i] = 0;
    P[i] = 0;
  }
  cin >> N >> max;
  for(i=0;i<N;i++){
    cin >> P[i];
  }
 
  for(i=N-2;i>=0;i--){
    if (P[i] < P[i+1]) P[i] = P[i+1];
  }
 
  for(i=0;i<N;i++){
    P[i] = max - P[i] + 1;
    Orig[i] = P[i];
  }
 
  while(decrementos(P, N-2, Orig, soma) == 1)
    continue;
 
 
 
  cout << *soma << endl;          //print resultado
 
return 0;
}
 