#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void soma_recursivo(int N,long int* K,int posicao,long int soma,long int* maior){
  soma = soma+ K[posicao];
  //printf("K[%d] = %ld \n soma %ld\n",posicao,K[posicao], soma);

  if(posicao+3<=N)
    soma_recursivo(N,K,posicao+3,soma,maior);
  if(posicao+2<=N)
    soma_recursivo(N,K,posicao+2,soma,maior);
  if(soma>*maior)
    *maior = soma;
  
  return;
}

int main(){
  
  int i,N;
  long int *maior;

  maior = (long int*) malloc(sizeof(long int));

  long int K[100001];

  for (i=0;i<100001;i++){
    K[i] = 0;
  }
  *maior = 0;

  cin >> N;
  for (i=1;i<=N;i++)
    cin >> K[i];

  soma_recursivo(N,K,1,0,maior);
  soma_recursivo(N,K,2,0,maior);


  cout << *maior << endl;

  return 0;
}
