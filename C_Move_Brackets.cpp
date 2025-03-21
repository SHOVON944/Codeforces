#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;  // টেস্ট কেসের সংখ্যা ইনপুট নেওয়া

    while (t--) {
        int n;
        string s;
        cin >> n >> s;  // প্রতিটি টেস্ট কেসের জন্য n এবং ব্র্যাকেট সিকোয়েন্স ইনপুট নেওয়া

        int balance = 0, min_moves = 0;

        // সিকোয়েন্সে ব্র্যাকেটগুলো পর্যবেক্ষণ
        for (char c : s) {
            if (c == '(') {
                balance++;  // '(' পাওয়া গেলে balance বাড়ানো হবে
            } else {
                balance--;  // ')' পাওয়া গেলে balance কমানো হবে
            }

            // যদি balance নেতিবাচক হয়, তখন এটি সঠিক ব্র্যাকেট সিকোয়েন্স নয়
            // এবং যতবার এটি নেতিবাচক হয়, ততবার আমাদের মুভ করতে হবে
            min_moves = min(min_moves, balance);
        }

        // নেতিবাচক balance মানকে পজিটিভ করে সর্বনিম্ন মুভের সংখ্যা হিসাব করি
        cout << -min_moves << endl;  // সঠিক মুভ সংখ্যা বের করি
    }

    return 0;
}
