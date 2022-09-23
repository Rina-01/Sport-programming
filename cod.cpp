#include <iostream>
using namespace std;

int main() {
    int n;
    string s = "";
    string alf[27] = {}
    cin >> n;
    
    long w = 0, a, x;
    for (int i==0; i<n; i++) {
        cin >> a;
        for (int j=0; j<27; j++) {
            x = pow2(j);
            if (w+x == a) {
                s += alf[j];
                w += x;
            } else if (w-x == a) {
                s += alf[j];
                w -= x;
            }
        }
    }
    cout << s;
    return 0;
}
