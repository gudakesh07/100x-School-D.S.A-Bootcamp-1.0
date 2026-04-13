#include <iostream>

using namespace std;

int main(){
    long long A, B,C;
    cin >> A;
    cin >> B;
    cin >> C;
    if(A >= B && A > C){
        if(B > C){
            cout << "Min = " << C << endl;
            cout << "Max = " << A << endl;
        }else{
            cout << "Min = " << B << endl;
            cout << "Max = " << A << endl;
        }
    }
    else if(B>= A && B > C){
        if(A > C){
            cout << "Min = " << C << endl;
            cout << "Max = " << B << endl;
        }
        else{
            cout << "Min = " << A << endl;
            cout << "Max = " << B << endl;
        }
    }
    else if(C >= B && C > A){
        if(B > A){
            cout << "Min = " << A << endl;
            cout << "Max = " << C << endl;
        }
        else{
            cout << "Min = " << B << endl;
            cout << "Max = " << C << endl;
        }
    }
    return 0;
}