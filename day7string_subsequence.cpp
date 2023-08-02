#include <bits/stdc++.h>
#define ll long long
using namespace std;

class stringSubsequence
{
public:

    vector<string> v;
    void solution(string s, string output, int index, vector<string> &v)
    {
        if(index>=s.length())
        {
            if(output != "")
                v.push_back(output);
            return;
        }

        solution(s,output,index+1,v);

        output.push_back(s[index]);
        solution(s,output,index+1,v);
    }
    
    void subsequence(string s)
    {
        
        string output="";
        int index = 0;
        solution(s,output, index, v);
    }
    void printSubsequence()
    {
        for(auto a: v)
        cout<<a<<" ";
    }
};

int main()
{
    string s = "abc";
    stringSubsequence ss;
    ss.subsequence(s);
    ss.printSubsequence();
    return 0;
}