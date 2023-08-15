#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define p push
#define pop pop_back
typedef vector<int> v;
void solution()
{
    int n;
    cin >> n;
    vector<int> arr(n), arr1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int l, r, temp1 = 1, temp2 = 1;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] != arr1[i])
        {
            // cout << arr[i] << " " << arr1[i] << endl;
            l=i+1;
            break;
        }
    }
    for(int i=l-1;i>=1;i--){
        if(arr1[i]>=arr1[i-1])l--;
        else break;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] != arr1[i])
        {
            // cout << arr[i] << " " << arr1[i] << endl;
            r=i+1;
            break;
        }
    }
    for(int i=r-1;i<n-1;i++){
        if(arr1[i]<=arr1[i+1])r++;
        else break;
    }
    cout << l << " " << r << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}