#include <iostream>
#include <fstream>
using namespace std;

int main()
 //Olvassunk be egy NxN es mátrixot (billentyűzetről vagy fileból tetszés szerint), majd számítsuk és írjuk ki külön-külön a fő, illetve a mellékátlón lévő elemek összegét!
{ int v[100][100], n, S1=0,S2=0, i, j ;
ifstream in("input.txt");
in>>n;
for(i=0; i<n; i++){
    for(j=0; j<n; j++){
        in>>v[i][j];}
    }
for(i=0; i<n; i++){
    for(j=0; j<n; j++){
        if(i==j){
        S1+=v[i][j];}
        if(i+j==n-1){
            S2+=v[i][j];}
        }}
        cout<<"S1="<<S1<<endl;
        cout<<"S2="<<S2<<endl;
        cout<<endl;

in.close ();
        return 0;
    }

