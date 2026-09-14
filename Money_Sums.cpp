#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int sum = 0;
    vector<int> a(n);
    for(int &x : a) 
    {
        cin >> x;
        sum += x;
    }
    vector<int> dp(sum+1,0);
    dp[0] = 1;
    for(int x : a) 
    {
        for(int j=sum; j>=x; j--) 
        {
            if(dp[j-x])
            {
                dp[j] = 1;
            }
        }
    }
    int cnt = 0;
    for(int i=1; i<=sum; i++)
    {
        if(dp[i])
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    for(int i=1; i<=sum; i++)
    {
        if(dp[i])
        {
            cout << i << ' ';
        }
    }
    return 0;
}