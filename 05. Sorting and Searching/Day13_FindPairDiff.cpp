//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends

bool bsearch(int arr[], int n,int k, int s,int e){
    int mid = s+(e-s)/2;
    
    while(e>=s){
        if(arr[mid] == k){
            return true;
        }
        else if(arr[mid]>k){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return false;
}
bool findPair(int arr[], int size, int n){
    
    sort(arr,arr+size);
    
    for(int i=size-1;i>=0;i--){
        int ele2 = abs(arr[i]-n);
        if(bsearch(arr,size,ele2,0,i-1))
           {return true;}
        
    }
    return false;
    
    
}