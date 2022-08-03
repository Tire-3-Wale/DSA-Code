#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: "<< endl;
    cin >> n;

    (n > 0) ? cout << "It is a positive number" : cout << "It is a negative number";

return 0;
}