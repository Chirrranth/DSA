#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks <= 100 && marks >= 90) {
        cout << "You have scored A grade" << endl;
    }
    else if (marks >= 70 && marks < 90) {
        cout << "You have scored B grade" << endl;
    }
    else if (marks >= 50 && marks < 70) {
        cout << "You have scored C grade" << endl;
    }
    else {
        cout << "You have failed" << endl;
    }
    return 0;
}