#include <iostream>

using namespace std;

int main(){
    long long N, M;
    cin >> N;
    cin >> M;
    int n1 = N % 10;
    int m1 = M % 10;
    cout << n1 + m1 << endl;
    return 0;
}

