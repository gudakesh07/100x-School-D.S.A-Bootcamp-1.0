#include <iostream>

using namespace std;

int main(){
    long long A, B;
    cin >> A;
    cin >> B;
    if(A > B){
        cout << "Min = " << B << endl;
        cout << "Max = " << A << endl;
    }else{
        cout << "Min = " << A << endl;
        cout << "Max = " << B << endl;
    }
    return 0;
}