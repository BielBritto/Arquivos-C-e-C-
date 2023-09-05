#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int* conversor(int dec, int bin[11]){
    int i;
    for (i=0;i<1001;i++){
        bin[i] = dec % 2;
        dec = dec/2;
        //nao parar no dec = 0 para poder zerar os outros valores
    }
    return 0;
}

int printar_bin(int *bin){
    int i;
    for (i=1000;i>=0;i--){
        printf("%d ",bin[i]);
    }
    return 0;
}

int verifica(int *bin){
    int i,j;
    int luzes, maxluzes;
    maxluzes = 0;

    for(i=0;i<1001;i++){
        luzes = 0;
        for(j=0;j<1001-i;j--){
            if(bin[i+j] == 1) luzes++;
            else{
                if(luzes > maxluzes) maxluzes = luzes;
                break;
            }
        }
    }
    return maxluzes;
}




int main() {



    int N;   // grupos
    int bin[1001]; //numero decimal
    int i, dec[1001];

    cin >> N;
    for(i=0;i<N;i++){ 
        cin >> dec[i];
    }

    for(i=0;i<N;i++){ 
        conversor(dec[i],bin);
        //printar_bin(bin);
        cout << verifica(bin) << endl;
    }

    return 0;
}



