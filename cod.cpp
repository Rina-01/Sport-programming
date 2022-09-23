#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;

    cout << -1 << " ";
	int coun = 0, subcoun, subL;
	if (s[0] == '0')
		coun--;
	else
		coun++;

    for (int l=0, r=1; r<=n-1; r++, l=subL) {
        if (s[r] == '0') {
            coun--;
            subcoun = coun;
            subL = l;
            while (subL+1<r && !(subcoun<0)) {
                if (s[subL] == '0')
                    subcoun++;
                else
                    subcoun--;
                subL++;
            }
            if (subcoun<0)
                cout << subL+1 << " ";
            else {
                subL = l;
                while (subL>0 && !(subcoun<0)) {
                    if (s[subL] == '0')
                        subcoun++;
                    else
                        subcoun--;
                    subL--;
                }
                if (subcoun<0)
                    cout << subL+1 << " ";
                else
                    cout << -1 << " ";
            }
        } else {
            coun++;
            subcoun = coun;
            subL = l;
            while (subL+1<r && !(subcoun>0)) {
                if (s[subL] == '0')
                    subcoun++;
                else
                    subcoun--;
                subL++;
            }
            if (subcoun>0)
                cout << subL+1 << " ";
            else {
                subL = l;
                while (subL>0 && !(subcoun>0)) {
                    if (s[subL] == '0')
                        subcoun++;
                    else
                        subcoun--;
                    subL--;
                }
                if (subcoun>0)
                    cout << subL+1 << " ";
                else
                    cout << -1 << " ";
            }
        }
    }
	return 0;
}
