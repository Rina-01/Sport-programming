#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    char p[n][m], ans[n][m];
    
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            cin >> p[i][j];
            
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            if (p[i][j] == '/') ans[i][m-j-1] = '\\';
            else if (p[i][j] == '\\') ans[i][m-j-1] = '/';
            else ans[i][m-j-1] = p[i][j];
    
    for (int i=1; i<n-1; i++)
        for (int j=1; j<m-1; j++)
            p[i][j] = ans[i][j], ans[i][j] = p[0][0];
    
    for (int j=1; j<m-1; j++)        
        for (int i=1; i<n-1; i++)
            if (p[i][j] == '/') ans[n-i][j] = '\\';
            else if (p[i][j] == '\\') ans[n-i][j] = '/';
            else ans[n-i-1][j] = p[i][j];
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++)
            cout << ans[i][j];
        cout << endl;
    }
    
    return 0;
}
