#include <iostream>
#include <fstream>
using namespace std;

int main()
{int v[100][100], n, oszto, i, j, S=0 ;
 ifstream input("in.txt");
input>>n;

for(i=0; i<n; i++){
 for(j=0; j<n; j++){
   // cout<< "v["<< i <<"]["<<j<<"]=";
    input>>v[i][j];
    bool prim = true;
    for(oszto=2; oszto<v[i][j]/2+1; oszto++){
        if (v[i][j]%oszto==0){
            prim = false;}
    }

    if (prim){
       S+=v[i][j];}
    }
 }

cout<<S<<endl;
input.close ();
return 0;
}
