#include <iostream>

using namespace std;

int main(){
    bool a = (5 > 3);
    cout << a << endl;
    bool b = (5 < 3);
    cout << b << endl;
    bool c = (5 >= 3);
    cout << c << endl;
    bool d = (5 <= 3);
    cout << d << endl;
    bool e = (5 == 3);
    cout << e << endl;
    bool f = (5 != 3);
    cout << f << endl;

    bool ans = 1;

    bool ans2 = 0;

    bool ans3 = ans != ans2;

    cout << ans3 << endl;

    return 0;
}

// Only 0 is false other than 0 everything is true!!

// >  Greater Than
// <  Less Than
// >= Greater than or equal to
// <= Less than or equal to
// == Equal to
// != Not equal to


// true -> 1
// false -> 0