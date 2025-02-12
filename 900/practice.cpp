#include <iostream>
#include <string>

using namespace std;

int main() {
    string remix;
    cin >> remix;  // Read input string

    // Replace all "WUB" with spaces
    while (remix.find("WUB") != string::npos) {
        remix.replace(remix.find("WUB"), 3, " ");
    }

    // Remove extra spaces
    string original_song;
    bool space = false;
    for (char c : remix) {
        if (c != ' ') {
            original_song += c;
            space = true;
        } else if (space) {
            original_song += ' ';
            space = false;
        }
    }

    // Trim trailing space if present
    if (!original_song.empty() && original_song.back() == ' ') {
        original_song.pop_back();
    }

    cout << original_song << endl;
    return 0;
}