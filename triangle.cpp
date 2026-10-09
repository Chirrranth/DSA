// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter how many times you want to run:";
//     cin>>n;
//     for (int i=0; i<n; i++){
//         for (int j=0; j<i+1; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }



// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter how many times you want to run:";
//     cin>>n;

//     char letter='A';

//     for(int i=0; i<n; i++){
//         for(char j='A'; j<='A'+i; j++){
//             cout<<letter;
//         }
//         cout<<endl;
//         letter++;
//     }
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter how many times you want to run:";
//     cin>>n;
//     for (int i=0;i<n;i++){
//         for (int j=i+1;j>0;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter how many times you want to run:";
    cin>>n;
    int num=1;
    for (int i=0;i<n;i++){
        for (int j=0;j<i;j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
}