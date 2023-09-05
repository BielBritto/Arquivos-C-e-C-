#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {

  int N;   // nº de viagens / casos teste
  int pac; // qtd de pac disponiveis
  int i, j, k, l;
  int valor;
  int peso;
  int qtd[301][51];
  int matriz[301][51];
  int ptotal[301][51];


  cin >> N;

  for (k = 0; k < N; k++) {

    
    for (i=0;i<301;i++){
      for (j=0;j<51;j++){
        qtd[i][j] = 0;
        matriz[i][j] = 0;
        ptotal[i][j] = 0;
      }
    }

    cin >> pac;


    for (i = 1; i <= pac; i++) {
      cin >> valor >> peso;

      for (j = 1; j <= 50; j++) {
        matriz[i][j] = matriz[i - 1][j];
        qtd[i][j] = qtd[i - 1][j];
        ptotal[i][j] = ptotal[i-1][j];

        if (peso <= j && valor + matriz[i - 1][j - peso] > matriz[i][j]) {
          matriz[i][j] = valor + matriz[i - 1][j - peso];
          qtd[i][j]=qtd[i-1][j-peso]+1;
          ptotal[i][j] = ptotal[i-1][j-peso] + peso;       
        }
      }
    }
   //   for(j=0;j<=pac;j++){
    //    printf("%d %d",matriz[j][50], qtd[j][50]);
    //    printf("\n");
    //  }
  

    cout << matriz[pac][50] <<  " brinquedos" << endl;
    cout << "Peso: " << ptotal[pac][50] << " kg" << endl;
    cout << "sobra(m) " << pac-qtd[pac][50] << " pacote(s)\n" << endl;
  }
}