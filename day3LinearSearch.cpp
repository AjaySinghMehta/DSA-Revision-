#include <bits/stdc++.h>
#define ll long long
using namespace std;

int linearSearch(vector<int> v, int n,int index)
{
    if(index == v.size()-1)
        return -1;

    if(v[index] == n ) 
        return index;
    
    return linearSearch(v,n,index+1);
}

int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int n ; 
    cin>> n;
    cout<<linearSearch(v,n,0);
    return 0;
}