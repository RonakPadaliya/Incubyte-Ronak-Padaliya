#include<bits/stdc++.h>

using namespace std;

template<typename T>
void print(vector<T> v)
{
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << ", ";
    cout<<endl;
}

int Add(string s)
{
    regex r1("(([0-9]+)([,\n]))*([0-9]+)");
    
    if(regex_match(s,r1))
    {
        int sum=0;
        vector<string> temp;
        vector <string> tokens;
        stringstream check1(s);
    
        string intermediate;
        
        while(getline(check1, intermediate, ','))
        {
            tokens.push_back(intermediate);
        }
        
        for(int i=0;i<tokens.size();i++)
        {
            sum+= stoi(tokens[i]);
        }

        return sum;
    }
    else
    {
        cout<<"Invalid !\n";
        return -1;
    }
}

int main()
{
    string s1,s2;
    int ans=0;
    getline(cin, s1);

    ans=Add(s1);

    if(ans!=-1)
        cout<<"Sum = "<<ans<<endl;
    return 0;
}