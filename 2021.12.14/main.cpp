#include <iostream>

using namespace std;

int lnko(int a, int b){
while(a!=b){
    if(a>b){
        a=a-b;}
        else{b-=a;
    }
}
return a;
}
int lkkt(int a, int b){
    return a*b/lnko(a, b);}
int main()
{   int a=4;
    int b=6;
    cout << lnko(a, b)<< endl;
    cout << lkkt(a, b)<< endl;




    return 0;

}
