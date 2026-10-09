#include<iostream>
using namespace std;


// int sumN(float n){
//     int sum=0;
//     for (int i=1;i<=n;i++){
//         sum +=i;

//     }
//     return sum;
// }

// int main(){
//     cout<<sumN(10)<<endl;
// }

// int fact(int n){
//     int facto=1;
//     for (int i=1;i<=n;i++){
//         facto*=i;


//     }
//     return facto;
// }
// int main(){
//      int n;
//      cout<<"enter a number to clac factorial:";
//      cin>>n;
//      cout<<fact(n)<<endl;
// }

// int sumofnos(int num){
//     int digit=0;
//     while (num>0){
//         int last=num%10;
//         num= num/10;
//         digit=digit+last;

//     }
//     return digit;
// }
// int main(){
//     int n;
//     cout<<"enter a number to clac sum:";
//     cin>>n;
//     cout<<"sum of digits is:"<<sumofnos(n);
//     return 0;
// }

int factn(int n){
    int facto=1;
    for (int i=1;i<=n;i++){
        facto*=i;

    }
    return facto;
}

int factc(int p){
    int facto=1;
    for (int i=1;i<=p;i++){
        facto*=i;
    }
    return facto;
}

int fac(int n,int p){
    int digit = n-p;
    int facto=1;
    for (int i=1;i<=digit;i++){
        facto*=i;
    }
    return facto;
}

int main(){
    int n;
    cout<<"enter the value for n:";
    cin>>n;

    int p;
    cout<<"enter the value for p:";
    cin>>p;

    cout<<"ncr="<<factn(n)/(factc(p)*fac(n,p));
}
