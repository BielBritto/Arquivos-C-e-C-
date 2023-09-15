#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
  
  int i,j, N, Ncor;
  int num[100001], cor[100001];
  vector <vector<int>> V;
  
  cin >> N >> Ncor;

  for(i=0;i<N;i++){
    cin >> num[i] >> cor[i];
    V[cor[i]].push_back(num[i]);
  }

  for(i=0;i<V.size();i++){
    qsort(V[i],V[i].size(),);
  }

  

 
return 0;
}
 