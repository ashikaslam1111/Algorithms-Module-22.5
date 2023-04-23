#include<bits/stdc++.h>
using namespace std;
const int N = 100;
long long int dp[N];
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=0; i<n; i++)dp[i]=1;
    for(int i=n; i<k; i++)
    {
        int sum =0;
        for(int j =i-1; j>=i-n; j--)
        {
            sum=sum+dp[j];
        }
        dp[i] = sum;
    }
    for(int i=0; i<k; i++)cout<<dp[i]<<" ";
    return 0;
}
