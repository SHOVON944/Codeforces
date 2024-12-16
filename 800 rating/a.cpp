#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char s[100];  // Array to store characters (not strings)

    // Input loop to read n characters
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    // Check for 'R' in the character array
    for (int i = 0; i < n; i++) {
        if (s[i] == 'R') {
            cout << "Found R at index " << i << endl;
        }
    }

    return 0;
}
