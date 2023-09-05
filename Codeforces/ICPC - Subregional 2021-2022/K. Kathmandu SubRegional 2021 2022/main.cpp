#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    int i;
    int T,D,M;  //dormir, duracao viagem, refeiçoes
    int h1,h2;


        char R = 'N';

        cin >> T >> D >> M;

        h1 = 0;

        if( M == 0 && D-T >= 0) R = 'Y';
        else if(M == 0 && D-T < 0) R = 'N';

        else{
            for(i=0;i<M;i++){
                cin >> h2;
                if(h2-h1 >= T){
                    R = 'Y';
                }
                h1 = h2;
            }

            if ( D-h2 >= T)
                R = 'Y';
        }

        cout << R << endl;
    
 
return 0;
}
 