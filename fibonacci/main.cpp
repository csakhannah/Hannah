#include <iostream>

using namespace std;

int main()
{
      int F,  n, prev = 1, current = 1;

    cout << "n= ";
    cin >> n;
    F = prev;
    for(int i=2; i<n; i++){
        F = prev + current;
        prev = current;
        current = F;

    }
    cout << " F = " << F<< endl;

return 0;
}
