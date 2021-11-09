#include <iostream>
#include <algorithm>

using namespace std;

int main()
{  string str = "Nem szerEtem az almat";
   cout<<str<<endl;
   transform (str.begin(), str.end(), str.begin(),::toupper);
    cout << str << endl;
    int pos = 'a' - 'A';
    for(int i=0; i<str.size(); i++){
        str[i]+=pos;
    }
    cout<<str<<endl;
    return 0;
}
