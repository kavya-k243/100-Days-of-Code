#include<bits/stdc++.h>
 using namespace std;
 
 int countPlatforms(int n,int arr[],int dep[])
 {
    sort(arr,arr+n);
    sort(dep,dep+n);
 
    int ans=1;
    int count=1;
    int i=1,j=0;
    while(i<n && j<n)
    {
        if(arr[i]<=dep[j]) 
        {
            count++;
            i++;
        }
        else 
        {
            count--;
            j++;
        }
        ans=max(ans,count); 
    }
    return ans;
 }
 
 int main()
 {
    int arr[]={855,623,259,547,811,1111};
    int dep[]={138,543,243,143,1009};
    int n=sizeof(dep)/sizeof(dep[0]);
    cout<<"Minimum number of Platforms required "<<countPlatforms(n,arr,dep)<<endl;
 }