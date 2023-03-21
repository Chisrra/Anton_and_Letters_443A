#include <iostream>
#include  <bits/stdc++.h>

using namespace std;

int main()
{
    int cont = 0;
    string s;
    vector<bool> abc(26,true);

    getline(cin, s);
    for(char letra : s)
    {
        if( (letra!='{')&&(letra!='}')&&(letra!=',')&&(letra!=' ') )
            {
                if(abc[letra-97])
                {
                    abc[letra-97] = false;
                    cont++;
                }
            }
    }
    cout<<cont<<endl;

    return 0;
}
