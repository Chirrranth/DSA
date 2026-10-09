#include <iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"enter a value for n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        if (i%2 !=0){
            cout<< i << " "<< endl;
            sum=sum+i;
        }
    }
            cout<<"the sum is:"<<sum<<endl;

        
    }
