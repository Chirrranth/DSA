#include<iostream>
#include <climits>
#include <vector>
using namespace std;

//to access the array using loop

// int main(){
//     int marks[]={100,23,45,67,89};
//     int size= sizeof(marks)/sizeof(int);
//     for (int i=0;i<size;i++){
//         cout<<marks[i]<<endl;
//     }
//     return 0;
// }

//inputing the values in array

// int main(){
//     int n;
//     cout<<"enter the size of array:";
//     cin>>n;

//     int marks[n];

//     for(int i=0;i<n;i++){
//         cin>>marks[i];
//     }

//     cout<<endl;

//     for (int i=0;i<n;i++){
//         cout<<marks[i]<<endl;
//     }
//     return 0;
// }

// finding the largest and smallest number in an array
// int main(){
//     int small= INT_MAX;
//     int max=INT_MIN;
//     int n;
//     cout<<"enter size of an array:";
//     cin>>n;
//     int size=n;
//     int marks[size];
//     for (int i=0;i<size;i++){
//         cout<<"enter element "<<i+1<<":";
//         cin>>marks[i];
//     }

//     for (int i=0;i<size;i++){
//         if (marks[i]<small){
//             small=marks[i];
//             cout<<i<<endl;


//         }
//         else if(marks[i]>max){
//             max=marks[i];
//             cout<<i<<endl;

//         }
//     }
//     cout<<"max:"<<max<<endl;
//     cout<<"min:"<<small<<endl;
//     return 0;
// }

// searching in array
// int main(){
//     int n;
//     cout<<"enter number to search in array:";
//     cin>>n;
//     int marks[]={10,2,5,4,8,55,33,66};
//     for (int i=0;i<(sizeof(marks)/sizeof(int));i++){
//         if(n==marks[i]){
//             cout<<"found "<<marks[i]<<" @ index "<<i<<endl;
//             break;
//         }
//         else{
//             cout<<"dosent exist";
//             break;
//         }

//     }

// }

// reversing an array
// void reversearr(int arr[],int size){
//     int start=0;
//     int end= size-1;
//     while (start < end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;

//     }
// }

// int main(){
//     int arr[]={1,2,3,4,5,6,7};
//     int size=7;

//     reversearr(arr,size);

//     for (int i=0;i<size;i++){
//         cout<<arr[i];
//     }
//     cout<<endl;
//     return 0;
// }

//unique number
// #include <iostream>
// using namespace std;

// int main() {
//     int nums[] = {4, 1, 2, 1, 2, 4, 5};
//     int n = 7;


//     for (int i = 0; i < n; i++) {
//             int count = 0;
//         for (int j = 0; j < n; j++) {
//             if (nums[i] == nums[j]) {
//                 count++;
//             }
//         }

//         if (count == 1) {
//             cout << "Single number is: " << nums[i];
//             break;
//         }
//     }

//     return 0;
// }


//unique number
// int main() {
//     int nums[] = {4, 1, 2, 1, 2, 4, 5};
//     int n = sizeof(nums)/sizeof(int);
//     int ans=0; 

//     for(int val:nums){
//         ans=ans^val;

//     }
//     cout<<ans;
//     return ans;
// }