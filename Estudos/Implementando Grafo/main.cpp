#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//typedef pair<int,int> ii;        //vertice, peso
//vector<ii> adj[10001];
typedef pair<int,pair<int,int>> aresta;  //peso, par de vértices
vector<aresta> arestas;



int main() {
  int i,j,N,K,x;

  cin >> N;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      cin >> x;
      arestas.push_back({x,{i,j}});
    }
  }

  for(auto e : arestas){
    printf("Peso: %d Aresta: %d %d\n",e.first,e.second.first,e.second.second);
  }









  /*int i,j,N,K,x;

  cin >> N;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      cin >> x;
      adj[i].push_back({j,x});
    }
  }

  for(i=0;i<N;i++){
    printf("Vertice %d:\n",i);
    for(auto it : adj[i]){
      printf("{%d %d} ",it.first,it.second);
    }
    printf("\n");

  }
  */


  
}