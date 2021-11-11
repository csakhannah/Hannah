#include <iostream>

using namespace std;

int main()
{
   string str, milyen;
   cout << "kerem a szot:";
   cin >>str;
   cout << "Kicsi/nagy?";
   cin >> milyen;
   int pos= 'a'-'A';
   for  (int i=0;i<str.size();i++){
    if (milyen=="nagy"){
      if (str[i]>='a'){
        str[i]-=pos;
      }

    if(milyen =="Kicsi"){
      if(str[i]<='Z'){
        str[i]+=pos;
      }
    }
   }
   }
   cout << str<<endl;
    return 0;
}
