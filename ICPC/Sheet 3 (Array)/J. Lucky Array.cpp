#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> store(n);
    for (int i = 0; i < n; i++) {
        cin >> store[i];
    }
    int min_ele = *min_element(store.begin(), store.end());
    int frequency = count(store.begin(), store.end(), min_ele);
    if(frequency % 2 != 0){
        cout<<"Lucky"<<endl;
    } else{
        cout << "Unlucky" << endl;
    }
    return 0;
}
