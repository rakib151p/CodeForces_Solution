#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int count = 0,pos=1;;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == pos)
            {
                pos++;
                count++;
                //i += k - 1;
            }
        }
        int ans=n-count;
        if(ans%k==0)cout<<ans/k<<endl;
        else cout<<ans/k+1<<endl;
    }
}

//#include<bits/stdc++.h>
//using namespace std;
//void UIU(){
//    int k ,n;
//    scanf("%d%d",&k,&n);
//    long long int finalExam[k];
//    for(int i=0;i<k;i++){
//        scanf("%lld",&finalExam[i]);
//    }
//    long long int hi = 0;
//    long long int hello = 1;
//    for(auto i :finalExam){
//        if(i==hello){
//            hi++;
//            hello++;
//        }
//    }
//    long long int ans = k-hi;
//    if(ans%n==0){
//        cout << ans/n << endl;
//    }else{
//         cout << ans/n+1 << endl;
//    }
//}
//int main(){
//    int t;
//    scanf("%d",&t);
//    while(t--){
//        UIU();
//    }
//    return 0;
//}
