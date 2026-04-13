#include <iostream>

using namespace std;

int main(){
    int Marks;
    cin >> Marks;
    if(Marks >= 0 && Marks <=100){
        if(Marks >= 35){
            cout << "Pass";
        } else{
            cout << "Fail";
        }
    }
    return 0;
}