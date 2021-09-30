#include <iostream>

using namespace std;

int main()
{int v[100][100], n, m, i, j ;
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
    for(j=0; j<m; j++)
    {
            cout<< v[i][j];}

cout<<endl;
}
    return 0;
}
