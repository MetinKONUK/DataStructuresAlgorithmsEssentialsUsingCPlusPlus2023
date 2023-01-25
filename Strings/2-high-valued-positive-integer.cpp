#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a = "23147217432164723146213746213743878234723847234832784";
    string b = "231748231648231642384613288234932849328493248239482332849234832948329482";
    string result = "";
    reverse(a.begin(), a.end()); // a = 0981
    reverse(b.begin(), b.end()); // b = 011

    int n = min(a.length(), b.length()); // n = 3
    int leap = 0;
    for (int i = 0; i < n; ++i) {
        int digit = (int)a[i] + (int)b[i] + leap - 96; // 0 <= digit <= 18 
        cout << digit << endl;
        if (digit >= 10) {
            leap = 1;
            digit = digit % 10;
        }
        else {
            leap = 0;
        }
        result += to_string(digit);
    }

    string c = a.length() == n ? b : a;
    for (n; n < c.length(); ++n) {
        int digit = (int)c[n] + leap - 48;
        cout << digit << endl;
        if (digit >= 10) {
            leap = 1;
            digit = digit % 10;
        }
        else {
            leap = 0;
        }
        result += to_string(digit);
    }


    reverse(result.begin(), result.end());
    cout << result << endl;
    return 0;
}