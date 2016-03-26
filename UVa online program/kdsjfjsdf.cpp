#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double h,u,d,f;
    cin >> h >> u >> d >> f;
    if ((h == 0) || !(1 <= h <= 100) || !(1 <= u <= 100) || !(1 <= d <= 100) || !(1 <= f <= 100)){
        return 0;
    }
    /* h is where it starts, u is how much it moves, d is the constant it slides down,
    and f is the percentage that u is reduced by the next day */
    double i, s; // i is the day, s is the snail's current height which is 0
    i = 0;
    s = 0;
    while (true){
        i ++; // dawn of the first day which will then keep going
        s += u; // adding to the height
        if (s > h){
            cout << "success on day " << i << endl;
            return 0;
        }
        s -= d; // it is now night, snail slides down

        if (s < 0){
            cout << "failure on day " << i << endl;
            return 0;
        }
        u -= u * (f/100); // fatigue
        cout << s << "," << h << "," << i << endl;
    }
}
