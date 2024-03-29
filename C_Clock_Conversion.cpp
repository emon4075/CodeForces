#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char s[6];
        cin >> s;
        int Hour, Minutes;
        Hour = ((s[0] - '0') * 10) + (s[1] - '0');
        Minutes = ((s[3] - '0') * 10) + (s[4] - '0');

        if (Hour >= 1 && Hour <= 11)
        {
            cout << setfill('0') << setw(2) << Hour << ":" << setfill('0') << setw(2) << Minutes << " AM\n";
        }
        else if (Hour == 12)
        {
            cout << setfill('0') << setw(2) << Hour << ":" << setfill('0') << setw(2) << Minutes << " PM\n";
        }
        else if (Hour > 12)
        {
            Hour -= 12;
            cout << setfill('0') << setw(2) << Hour << ":" << setfill('0') << setw(2) << Minutes << " PM\n";
        }
        else
        {
            Hour += 12;
            cout << setfill('0') << setw(2) << Hour << ":" << setfill('0') << setw(2) << Minutes << " AM\n";
        }
    }
    return 0;
}
