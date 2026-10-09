#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;

    for (int i=2;i<n;i++){
        if (n%i==0){
            cout<<"it is not prime"<<endl;
            return 0;
        }
    }

    cout<<"it is prime"<<endl;
}



// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number:";
//     cin>>n;
//     bool is_it=true;
//     for (int i=2;i<n;i++){
//         if (n%i==0){
//             is_it=false;
//             break;
//         }
        
//         }
//     if (is_it==false){
//         cout<<"it is not prime"<<endl;
//     }
//     else{
//         cout<<"it is prime"<<endl;
//     }
//     }
