#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {

  string frase;
  size_t posicao;
  int i, j;

  while (!find.eof()) {

    getline(cin, frase);
    for (i=0;i<frase.size();i++){

        switch (frase[i])
        {
        case '@':
            frase[i] = 'a';
            break;
        case '&':
            frase[i] = 'e';
            break;
        case '!':
            frase[i] = 'i';
            break;
        case '*':
            frase[i] = 'o';
            break;
        case '#':
            frase[i] = 'u';
            break;
        
        default:
            continue;
        }

    }   
    cout << frase;

  }
  return 0;
}
