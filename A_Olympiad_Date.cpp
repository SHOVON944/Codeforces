#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;  cin >> n;
        vector<int> num(n);
        for (int i = 0; i < n; ++i) cin >> num[i];

        map<int, int> store = {{0, 3}, {1, 1}, {2, 2}, {3, 1}, {5, 1}};
        
        map<int, int> checking;
        int ans = 0;
        for(int i=0; i<n; i++){
            checking[num[i]]++;
            bool find= true;
            for (auto &[digit, count] : store) {
                if(checking[digit] < count){
                    find = false;
                    break;
                }
            }
            if(find){
                ans = i + 1;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}