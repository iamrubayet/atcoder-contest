#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string res;
    string inp;
    cin >> inp ;
    for(int i=0;i < (int)inp.size();i++ )
    {
        if(inp[i]== '.')
        {
            break;
        }
        else
        {
            res += (char)inp[i];
        }
    }
    cout << res;


    return 0;


}
