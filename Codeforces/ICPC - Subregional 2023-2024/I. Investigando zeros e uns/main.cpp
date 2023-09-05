#include <bits/stdc++.h>
using namespace std;

vector<int> Input, V,R,SV,SR;

int main(){

    int i;
    int N, temp;

    long long soma,s,si,x,igual;

    cin >> N;
    for(i=0;i<N;i++){
        cin >> temp;
        Input.push_back(temp);
    }

    if( N == 1 && Input[0] == 1) cout << 1 << endl;
    else if ( N == 1 && Input[0] == 0) cout << 0 << endl;
    else{

        x = Input[0];
        //soma = Input[0];
        V.push_back(x);

        for (i=1;i<N;i++){

            if(x == 1){
                if(Input[i] == 0){
                    V.push_back(1);
                }
                else{
                    x = 0;
                    V.push_back(0);
                }
            }
            else{
                if(Input[i] == 0)
                    V.push_back(0);
                else{
                    x = 1;
                    V.push_back(1);
                }
            }
        }

        s = si = 0;
        for(i=N-1;i>=0;i--){
            s = s+V[i];
            si = si+(!V[i]);
            SV.push_back(s);
            SR.push_back(si);
        }

        for(i=0;i<N;i++){
            cout << Input[i] << " ";
            cout << V[i] << " ";
            cout << SV[i] << " ";
            cout << SR[i] << "\n\n";
        }

        soma = SV[N-1];
        igual = 1;
        for(i=1;i<N;i++){

            if(Input[i-1] == 1) igual = 1-igual;

            if(igual == 1) soma = soma + SV[N-i];
            else soma = soma + SR[N-1]; 

        }
        cout << soma << endl;
    }
 
return 0;
}
 