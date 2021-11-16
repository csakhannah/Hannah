#include <iostream>
#include <string>

using namespace std;

int main()
{   string str;

    cout << "Kerem a szoveget:" << endl;
    cin>>str;
    int n=str.size();
    swap(str[0], str[n-1]);
    for(int i=1; i<n-1; i++){
        swap(str[i], str[n-1]);
    }
    cout<<str<<endl;
    return 0;
}
