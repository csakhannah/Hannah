#include <iostream>

using namespace std;

int main()
{int v[100][100],x, n,m;
cin>>x;
cin>>n;
cin>>m;
bool isTrue=false;
for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cout<<"v["<<i<<"]["<<j<<"]";
        cin>>v[i][j];
    }
}


for(int i=0; i<n; i++){
    if (v[i][m-1]==x){
        isTrue=true;
        break;
    }
}

for(int i=0; i<m; i++){
    if (v[n-1][i]==x){
        isTrue=true;
        break;
    }
}

for(int i=0; i<n; i++){
    if (v[1][i]==x){
        isTrue=true;
        break;
    }
}

for(int i=0; i<m; i++){
    if (v[1][m-1]==x){
        break;
    }
}
   if(true){cout<<"DA";}else{cout<<"NU";};
    return 0;
}
