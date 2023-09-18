#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

int compare( const void *arg1, const void *arg2 ){
    if(*(int*)arg1 == *(int*)arg2) return 0;
    else{
      if (*(int*)arg1 < *(int*)arg2) return -1;
      else return 1;
    }
  }

 
int main(){
  
  unsigned int i,j, N, Ncor;
  unsigned int num, cor, valor, cont;
  char c;

  c = 'Y';
  vector <vector<int>> V;
  
  cin >> N >> Ncor;

  for(i=0;i<N;i++){
    cin >> num >> cor;
    V[cor-1].push_back(num);
  }

  for(i=0;i<V.size();i++){
    qsort(&V[i],V[i].size(),sizeof(int),compare);
  }

  valor = 0;
  for(i=0;i<N;i++){
    cont = 0;
    for(j=0;j<Ncor;j++){
      if(i<V[j].size()){
        if(V[j][i] == valor+1) valor = valor+1;
        else c = 'N';
      }
      else{
        cont++;
      }
    }
    if (cont == Ncor) break;
  }
  printf("%c\n",c);
  

 
return 0;
}
 