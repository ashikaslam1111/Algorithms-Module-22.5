#include<bits/stdc++.h>
using namespace std;
const int N = 100;
long long dp[N];
long long nBonacci(int n,int k);
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i =1; i<=n; i++)dp[i]=1;
    cout<<nBonacci(n,k);
    return 0;
}
long long nBonacci(int n,int k)
{
// base case
    if(k<=n)return dp[k];
// if the current state is already done then return it
    if(dp[k]!=0)return dp[k];
// solve the current state from the small subproblems
    int sum =0;
    for(int i =1; i<=n; i++)
    {
        sum =sum+ nBonacci(n, k-i);
    }
    dp[k]=sum;
    return sum;
}
