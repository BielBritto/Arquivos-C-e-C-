#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string str,strtemp;
unsigned int i, j,cont, k,x;
vector <string> V;
string c;
 

int main(){

    cin >> str;
    cin >> k;

    cont = 0;


    for(j=0;j<k;j++){
        strtemp = "";
        for(i=j;i<str.size();i=i+k){
            strtemp += str[i];
        }
        sort(strtemp.begin(),strtemp.end());
        V.push_back(strtemp);
    }
    strtemp = "";
    x = 0;
    for(i=0;i<str.size();i = i+k){
        for(j=0;j<k;j++){
            if(x<V[j].size())strtemp += V[j][x];
        }
        x++;
    }
    cout << strtemp << endl;

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
 