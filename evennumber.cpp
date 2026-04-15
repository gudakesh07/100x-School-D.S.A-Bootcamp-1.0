#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        if( i % 2 == 0){
            cout << i << " is even" << endl;
        }
        else{
            cout << i << " is Odd" << endl;
        }
        i++;
    }
    return 0;
}