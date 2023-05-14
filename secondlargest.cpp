#include <bits/stdc++.h> 
// int secondLargest(int n,vector<int>&arr)
// {
    

int findSecondLargest(int n, vector<int> &arr)
{
    int largest = arr[0];
    int slargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }else if(arr[i]<largest && slargest<arr[i]){
            slargest=arr[i];
        }

        
        
    }
    if(slargest==INT_MIN){
            return -1;
    } else {
      return slargest;
    }
}
    
    
    
