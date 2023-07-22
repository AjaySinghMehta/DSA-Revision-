#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
    base case: if(str.length == 1 or 0) return str;
    Recurrence Relation: str1= 0 function call till we reach 0;
    process: traverse the string till the last and then print from the end 
             using a second variable to store the reverse string
            


    Approach: make a new variable
              make changes in the existing variable
*/

// void reverse(string str, int start)
// {
//     if (start >str.length()-1)
//         return;
//     reverse(str,start+1);
//     cout<<str[start];
// }

// string reverse(const std::string& str, int start)
// {
//     if (start == str.length())
//         return "";

//     return reverse(str, start + 1) + str[start];
// }

void swap(char& i, char & j)
{
    i += j;
    j = i-j;
    i -= j;
}

void reverse(string &str, int start, int end)
{
    if(start==str.length())
        return;
    
    if(start>end)
       return;
    else if(start== end)
      str[start] = str[end];
    else
     swap(str[start],str[end]);
     reverse(str, ++start, --end);
}

int main()
{
    string str = "abcde";
    reverse(str,0,str.length()-1);
    cout<<str<<endl;
    return 0;
}