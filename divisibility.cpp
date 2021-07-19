#include <iostream>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t != 0) {
        int n, x ,y;
        cin >> n >> x >> y;
        for (int a = 1; a < n; a++) {
            // print a when a is divisible by x and not divisible by y.
            if ((a % x == 0) && (a % y != 0)) {
                cout << a << " ";
            }
        }
        cout << endl;
        t--;
    }
}
