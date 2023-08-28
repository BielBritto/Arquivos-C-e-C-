#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {

  int N;   // nº de viagens / casos teste
  int pac; // qtd de pac disponiveis
  int i, j, k, l;
  int valor;
  int peso;
  int rep;
  int qtd[601];
  int matriz[601][51];



  cin >> N;

  for (k = 0; k < N; k++) {

    
    for (i=0;i<360001;i++){
      for (j=0;j<51;j++){
        matriz[i][j] = 0;
      }
    }

    cin >> pac;


    for (i = 1; i <= pac; i++) {
      cin >> valor >> peso;

      for (j = 1; j <= 50; j++) {
        matriz[i][j] = matriz[i - 1][j];

        if (peso*rep <= j && valor + matriz[i - 1][j - peso*rep] > matriz[i][j]) {
          matriz[i][j] = valor + matriz[i - 1][j - peso];    
        }
      }
    }
   //   for(j=0;j<=pac;j++){
    //    printf("%d %d",matriz[j][50], qtd[j][50]);
    //    printf("\n");
    //  }
  

    cout << matriz[pac][50] <<  " brinquedos" << endl;
  }
}