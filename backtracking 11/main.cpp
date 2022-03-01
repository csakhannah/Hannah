#include <iostream>
#include<vector>
using namespace std;

int N = 3;

string gyumolcs[] = {"csokigolyó", "karamella", "drazse", "nyaloka"};

bool lehet(vector<string> ital, string ujgyumolcs)
{
    for(int i=0; i<ital.size(); i++)
    {
        if(ujgyumolcs == ital[i])
        {
            return false;
        }
    }
    if(ujgyumolcs == "drazse")
    {
        for(int i=0; i<ital.size(); i++)
        {
            if(ital[i] == "nyaloka")
            {
                return false;
            }
        }
    }
    if(ujgyumolcs == "nyaloka")
    {
        for(int i=0; i<ital.size(); i++)
        {
            if(ital[i] == "drazse")
            {
                return false;
            }
        }
    }
    return true;
}
void kiir(vector<string> ital)
{
    for(int i=0; i<ital.size(); i++)
    {
        cout << ital[i] << " ";
    }
    cout << endl;
    return;
}

void backtrack(vector<string> ital)
{

    if(ital.size() == N)
    {
        kiir(ital);
        return;
    }
    for(int i=0; i<4; i++)
    {
        if(lehet(ital,gyumolcs[i]))
        {
            vector<string>tempital;
            for(int j=0; j<ital.size(); j++)
            {
                tempital.push_back(ital[j]);
            }
            tempital.push_back(gyumolcs[i]);
            backtrack(tempital);
        }
    }
}
int main()
{
    vector<string>ital;
    backtrack(ital);
    return 0;
}

