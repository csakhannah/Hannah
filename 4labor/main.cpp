#include <iostream>

using namespace std;

int main()
{int v[100][100], n, m, Sf=0, Sm=0, i, j ;
cout<<"n=";
cin>>n;
cout<<"m=";
cin>>m;
for(i=0; i<n; i++){
    for(j=0; j<m; j++){
        cout<< "v["<< i <<"]["<<j<<"]=";
        cin>>v[i][j];}
    }
for(i=0; i<n; i++){
    for(j=0; j<n-1-i; j++){
        if(i==j){
            Sm+=v[i][j];}
            Sf+=v[i][i];}

}        cout<<"Sf="<<Sf<<endl;
        cout<<"Sm="<<Sm<<endl;

    return 0;
}
