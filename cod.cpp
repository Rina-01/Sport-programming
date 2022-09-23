#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

long nod(int a, int b) {
    if (a%b == 0)
        return b;
    if (b%a == 0)
        return a;
    if (a>b)
        return nod(a%b b);
    else
        return nod(a, b%a);
}

bool isprime(long k) {
    if (k == 2 or k == 3)
        return true;
    if (floor(sqrt(k))*floor(sqrt(k)) == k)
        return false;
    if (k*k % 24 == 1)
        return true;
    return false;
}

int main() {
    int T;
    cin >> T;
    long a, b, ans[T], c = 1, aa, bb;
    
    for (int tt=0, tt<T; tt++) {
        cin >> a >> b;
        ans[tt] = nod(a,b);
        aa = a/ans[tt];
        bb = b/ans[bb];
        
        if (aa>bb)
            swap(aa, bb);
            
        for (long long i=bb; i>aa; i--)
            if ((bb%i == 0) and isprime(i)) {
                c = i;
                break;
            }
        if (c == 1) {
            for (long long i=aa; i>1; i--)
                if ((aa%i == 0 or bb%i == 0) and isprime(i))
                    c = i;
                    break;
        }
        
        ans[tt] *= c;     
    }
        
    for (int tt=0; tt<T; tt++) 
        cout << ans[tt] << endl;
    }
    return 0;
}
