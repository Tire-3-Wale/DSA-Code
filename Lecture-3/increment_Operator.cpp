#include<iostream>
using namespace std;

int main(){
    int a = 5 , b = 7;
    int ans = a++ - --b + ++a + ++b;
    cout << ans;

return 0;
}