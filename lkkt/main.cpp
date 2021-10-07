#include <iostream>

using namespace std;

int main()
{int a , b, c;
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
c=a*b;
while(a!=b){
    if(a>b){a-=b;}
    else{b-=a;}
}
c=c/b;
    cout << "lkkt=" <<c<< endl;
    return 0;
}
