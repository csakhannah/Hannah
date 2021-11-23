#include <iostream>

using namespace std;
int maxim(int v[],int n){
int max=v[0];
for(int i=1; i<n; i++){
    if( v[i]>max){
    max=v[i];
    }
}
return max;}
int main()
{ int v[300]={1, 2, 3, 4, 99, 44, 37867834, 3, 0, 9};

    cout <<maxim(v,11);
    return 0;
}
