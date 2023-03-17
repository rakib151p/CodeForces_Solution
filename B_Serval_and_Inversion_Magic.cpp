#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define p push
#define pop pop_back
// #define p            printf
typedef vector<int> v;
typedef vector<v> vov;
bool isPalindrome(string &s)
{
    string rev=s;
    reverse(rev.begin(),rev.end());
    return rev==s;
}
void solution()
{
    int c, sz;
    string s;
    cin>>sz>>s;
    if (isPalindrome(s)){
        cout << "Yes" << endl;
        return;
    }
    int i=0,j=sz-1;
    while(i<=j)
    {
        if (s[i] != s[j])
        {
            // c = i;
            while(i<=j)
            {
                if (s[i] != s[j])
                {
                    if (s[i] == '1')
                        s[i] = '0';
                    else
                        s[i] = '1'; 
                    i++;
                    j--;
                }
                else
                {
                    break;
                }
            }
            //cout<<i<<" "<<j<<endl;
            break;
        }
        else{
            i++;
            j--;
        }
    }
    //cout<<s<<endl;
    if (isPalindrome(s))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
 
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solution();
    }
}