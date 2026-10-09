#include <iostream>
using namespace std;
int main(){
    int count=1;
    int sum=0;
    int n;
    cout<<"enter no:"<<endl;
    cin>>n;
    while (count<=n){
        sum=sum+count;
        count=count+1;
    }
        cout<<sum<<endl;
}


