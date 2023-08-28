#include <iostream>
#include <bits/stdc++.h>
using namespace std;


//          N      P        0          max       P[0]           0
int conta(int N, int *P, int pessoa, int ant, int atual, int cont){

  if(pessoa == N){
    cont++;
    //conta(,,,,cont);
  }
}








int decrementos(int *Dif,int N){
  int i;

  if (N<0) return 0;

  if(Dif[N]>0){
    Dif[N]--;
    return 1;
  }
  else{
    for (i=N-1;i>=0;i--)
      if(Dif[i]>0) Dif[N] = Dif[i] - 1;
    return decrementos(Dif,N-1);
  }

}


int loucura(int *Dif, int N, int soma){

  soma = soma+Dif[N-1];
  //printf("soma: %d",soma);
  while(decrementos(Dif, N) == 1)
    loucura(Dif, N, soma);
  
  return soma;
}

int main(){
  
  int i;
  int N, max;
  int P[50001];
  int total;

  for(i=0;i<50001;i++){
    P[i] = 0;
  }
  cin >> N >> max;
  for(i=0;i<N;i++){
    cin >> P[i];
  }

  for(i=N-2;i>=0;i--){
    if (P[i] < P[i+1]) P[i] = P[i+1];
  }

  for(i=0;i<N;i++)
    cout << P[i] << " ";            //print
  cout << endl;

  for(i=0;i<N;i++){
    P[i] = max - P[i] + 1;
  }

  for(i=0;i<N;i++)
    cout << P[i] << " ";            //print
  cout << endl;
  

  total = loucura(P,N,0);

  for(i=0;i<N;i++)
    cout << P[i] << " ";          //print
  cout << endl;

  cout << total << endl;          //print resultado








/*
int main(){
  
  int i,j,k,a;
  int N, max;
  int P[50001];
  int ant;

  
  int maxlocal;

  for(i=0;i<50001;i++){
    P[i] = 0;
  }

  cin >> N >> max;
  for(i=0;i<N;i++){
    cin >> P[i];
  }

  for(i=N-2;i>=0;i--){
    if (P[i] < P[i+1]) P[i] = P[i+1];
  }


  ant = max;
  i = 0;
  for(i=0,a=P[i];a<=ant;a++,i++){             //pontos iniciais
    maxlocal = max;

    for(i=ant;i>= P[i];i--){

      if (maxlocal > P[j])
        maxlocal = maxlocal - P[j];
    }
    if(j == maxlocal+1) 
  }
*/







  

  return 0;
}
