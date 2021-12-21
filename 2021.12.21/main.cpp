#include <iostream>

using namespace std;
int paratlan(int i);
int paros(int n){
if(n==0) {return 0;
}
return n+paratlan(n-1);
}
int paratlan(int n){
if(n==1){return 1;
}
return n+paros(n-1);
}

int main()
{  int n;
cout<<"n=";
    cin>>n;
    cout<<paratlan(n);
    cout <<paros(n)<< endl;
    return 0;
}
