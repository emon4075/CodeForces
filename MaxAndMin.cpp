#include <iostream>
using namespace std;
int main()
{
    long long A, B, C;
    cin >> A >> B >> C;
    if ((A >= B && A >= C) && (B <= C))
    {
        cout << B << " " << A << endl;
    }
    else if ((A >= B && A >= C) && (B >= C))
    {
        cout << C << " " << A << endl;
    }
    else if ((B >= A && B >= C) && (A <= C))
    {
        cout << A << " " << B << endl;
    }
    else if ((B >= A && B >= C) && (C <= A))
    {
        cout << C << " " << B << endl;
    }
    else if ((C >= A && C >= B) && (A <= B))
    {
        cout << A << " " << C << endl;
    }
    else if ((C >= A && C >= B) && (B <= A))
    {
        cout << B << " " << C << endl;
    }
    return 0;
}