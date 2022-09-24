#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sq[n][4], coun[n] = {0};
    for (int i=0; i<n; i++) {
        for (int k=0; k<4; k++)
            cin >> sq[i][k];
        for (int j=i-1; j>=0; j--)
            if (!(sq[i][2]<=sq[j][0] || sq[i][0]>=sq[j][2] || sq[i][1]>=sq[j][3] || sq[i][3]<=sq[j][1]))
                coun[i]++, coun[j]++;
    }
    
    for (int i=0; i<n; i++) {
        cout << coun[i] << " ";
    }
    return 0;
}
