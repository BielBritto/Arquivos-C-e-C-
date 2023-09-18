#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int i, j,res = 0;
int N, alt, x;
 

int main(){

    cin >> N >> alt;

    for(i=0;i<N;i++){
        cin >> x;
        if(x <= alt) res++;
    }
    printf("%d\n",res);


return 0;
}
 










   /* cin >> str;
    cin >> k;

    strord = str;
    sort(strord.begin(),strord.end());
    tam = str.size();
    for(i=0;i<tam;i++)
        intstr.push_back(0);

    index = 0;
    for(i=0;i<tam;i++){
        pos = str.find(strord[i]);
        if(i>0 && strord[i] == strord[i-1] && pos < index) index = 0;
        for(j=str.find(strord[i],index);; j = j-k){

            if( j-k >= 0 && str[j] <= str[j-k] && intstr[j] == 0){
                c[0] = str[j];
                str[j] = str[j-k];
                str[j-k] = c[0];
            }
            else{
                intstr[j] = 1;
                index = j;
                break;
            }
        }

    }
    cout << str;
    */
 