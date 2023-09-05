#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main(){

  int i;
  int N;
  int T,status;
  int loopwhile;


  int dir, instante;
  int espera;

  //freopen("C:\\Users\\galkmim\\Desktop\\Arquivos Gabriel\\Arquivos C e C++\\entrada.txt","r",stdin);

  //for(loopwhile = 0; loopwhile<3;loopwhile++){
    espera = 0;
    scanf("%d",&N); 

    
    for(i=0;i<N;i++){
      //leitura
      scanf("%d %d",&T,&status);  
      //inicialização
      if(i==0){
        dir = status;
        instante = T+10;
      }
      //processamento
      if(dir == status){

        if(T < instante)
          instante = T+10;
    
        else
          if (espera){
            dir = 1-dir;
            instante = instante+10;
            espera = 1;
          }
          else instante = T+10;
      }

      else{
        if(T<instante){
          espera = 1;
        }
        else{
          instante = instante + 10;
          dir = 1-dir;
          espera = 0;
        }
      }


    }
    if (espera == 1) instante+= 10;

    printf("%d\n", instante);

 //}
  
  


  
  return 0;
}
