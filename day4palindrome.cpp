#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
    base case:if characters are same
              if characters are different
              if string empty or has only one element
              if start > end then the string is a palindrom
    processing:
    recursive relation: plaindrome(s, i++, j--)
*/

bool isEqual(char i, char j)
{
    bool ans = i == j ? true : false;
    cout << ans << endl;

    return i == j ? true : false;
}

bool palindrome(string s, int start, int end)
{
    if (start > end)
        return true;
    if (start == end)
        return true;
    if (!isEqual(s[start], s[end]))
        return false;
    else
        return palindrome(s, ++start, --end);
}

int main()
{
    string s = "abba";
    bool ans = palindrome(s, 0, s.length() - 1);
    if (ans)
        cout << "true";
    else
        cout << "false";
    return 0;
}