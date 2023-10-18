#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
vector<ii> vertices;
vector<ii> arestas;
int N;




Grafo

//
//
//
//
//
//
//
//








int main(){

  int i,j,k,x;

  cin >> N;
  for (i=1;i<N;i++){
    cin >> x;
    arestas.push_back({i+1,x});
    arestas.push_back({x,i+1});
  }
  for (i=1;i<=N;i++){
    cin >> x;
    vertices.push_back({x,i});
  }

  


  return 0;
}