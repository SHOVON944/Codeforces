#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--){
        int elements, select;
        cin >> elements>>select;
        int num[elements];
        for(int i=0; i<elements ; i++){
        	cin >> num[i];
        }
        vector<int>odds;
        int cO =0;
        int cE = 0;
        for(int i=0; i<elements; i++){
            if(num[i]%2!=0){
                cO++;
            } else{
                cE++;
            }
        }
            if(cO==0) cout<<"No"<<endl;
            else if(select == elements) {
                if(cO%2!=0) cout << "Yes" << endl;
                else cout << "No" << endl;
            }
            else if(select%2!=0) cout<<"Yes"<<endl;
            else if(select %2==0){
                if(cE>0) cout << "Yes" << endl;
                else cout << "No" << endl;
            }
        }
        
    
    return 0;
}