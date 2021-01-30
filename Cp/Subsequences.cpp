#include <bits/stdc++.h>
using namespace std;


int subs(string input, string output[])
{
    if(input == "")
    {
        output[0] = "";
        return 1;
    }
    
    string next_sring = input.substr(1);
    int smalloutput = subs(next_sring, output);
    for(int i=0; i<smalloutput; i++)
    {
        output[i + smalloutput] = input[0] + output[i];
    }
    return 2* smalloutput;
}

int main()
{
    string input;
    cin >> input;
    
    string *output = new string[1000];
    int n = subs(input, output);
    for(int i=0; i<n; i++)
    {
        cout << output[i] << " " ;
    }
    cout << endl;
    
}
