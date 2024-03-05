#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;
typedef string s;

int an(int n, int *arr,int a, int dp){
    if(a==0) return 0;
    if(a<0) return 10000;
    // if(dp[n][a]!=0) return dp[n][a];
    int min1=1e9;
    for(int i=0; i<n; i++){
       
        min1=min(min1,1+an(n,arr,a-arr[i]));
        
        
    }
    return min1;

}

int main(){
    int n,a;
    cin>>n>>a;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
   
    // int dp[n+1][a+1];
    // memset(dp,0,sizeof dp);
    
    cout<<an(n,arr,a);

    
}