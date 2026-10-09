#include <iostream>
#include <vector>
using namespace std;
// int main(){
//     vector<int> vec={1,2,3};
//     for (int val: vec){
//         cout<<val<<endl;
//     }
// }

// pair sum 
// vector<int> pairsum(vector<int>nums,int target){
//     vector<int> ans;
//     int n=nums.size();
//     int i=0,j=n-1;
//     while(i<j){
//         int pairsum=nums[i]+nums[j];
//         if (pairsum<target){
//             i++;
//         }
//         else if(pairsum>target){
//             j--;
//         }
//         else{
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;
//         }  
//     }
//     return ans;


// }

// int main(){
//     vector<int>nums={1,2,3,4,5,6,7};
//     int target=7;
//     vector<int>ans=pairsum(nums,target);
//     cout<<ans[0]<<ans[1]<<endl;
// }


//binary search  wrong
// int main(){
//     vector<int> arr={-1,0,1,2,3,4,5,6,7,8};
//     int target=4;
//     int n=arr.size();
//     int mid=n/2;
//     if(target>arr[mid]){
//         for (int i=mid;i<n;i++){
//             if(arr[i]==target){
//                 cout<<arr[i]<<"  target found"<<" ran this loop";
//             }
//         }
//     }
//     else if(target<arr[mid]){
//         for(int j=0;j<mid;j++){
//             if (arr[j]==target){
//                 cout<<arr[j]<<"  target found"<<" this loop is run";
//             }
//         }
//     }

//     else{
//         if (arr[mid]==target){
//             cout<<mid<<"  target found"<<"running "; 
//         }
//     }
//     return -1;


// }

int binarysearch(vector<int> arr,int target){
    int st=0,end=arr.size()-1;
    while(st<=end){
        int mid=(st+end)/2;
        if (target>arr[mid]){
            st=mid+1;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int>arr1={1,3,4,7,8,9,11,24};
    int tar1=11;

    cout<<binarysearch(arr1,tar1);
    
}