#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
long long int decrementos(long long int *Dif,long long int N, long long int *Orig, long long int *soma){
  *soma = (*soma+Dif[N+1])%(1000000000+7);
  long long int i,j;
  if (N<0) return 0;
 
  
  for (i=N;i>=0;i--){
 
    if(Dif[i]>1){
      Dif[i]--;
      for(j=i+1;j<N+2;j++)
        Dif[j] = Orig[j] - (Orig[i] - Dif[i]);
      return decrementos(Dif,N,Orig,soma);
    }
  }
  return 0;
  
}
 
int main(){
  
  long long int i;
  long long int N, max,soma;
  long long int P[5001], Orig[5001];
  soma = 0;
 
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

  /*for(i=0;i<N;i++){
    printf("%lld ",P[i]);
    printf("%lld ",Orig[i]);
    printf("\n");
  }*/

 
  decrementos(P, N-2, Orig, &soma);
  //while(decrementos(P, N-2, Orig, soma) == 1)
  //  continue;
 
 
 
  cout << soma << endl;          //prlong long int resultado

  /*for(i=0;i<N;i++){
    printf("%lld ",P[i]);
    printf("%lld ",Orig[i]);
    printf("\n");
  }*/
  
return 0;
}
 