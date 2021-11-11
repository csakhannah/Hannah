#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  string str, milyen;
  cout << "kerem a szot:";
  cin >>str;
  cout << "Kicsi/nagy?";
  cin>> milyen;
  if (milyen=="nagy"){
    transform(str.begin(),str.end(),str.begin(),::toupper);

  }else{transform (str.begin(),str.end(),str.begin(),::tolower); }
  cout << str<<endl;

    return 0;
}
