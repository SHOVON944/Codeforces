#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, x;
    while(t--){
        cin >> n>>x;
        int prefix[n];
        prefix[0] = 2;
        for(int i=1; i<n; i++){
            prefix[i] =  (i * x+2);
            }
        for(int i=0; i<n; i++){
        if(n<=2) {
            cout << "1" << endl;
            break;
        }
            if(n<=prefix[i]){
                cout << i+1 << endl;
                break;
            }
        }
    }
    
    return 0;
}


//সিলিং ডিভিশন ট্রিক্স
/* ব্যবহার :
                   # অ্যারে ইনডেক্সিং (যখন নির্দিষ্ট x সাইজের গ্রুপে ভাগ করতে হয়)
                   # মাল্টিপল ফ্লোর ক্যালকুলেশন (যেমন এই কোডের ক্ষেত্রে)
                   #পেইজিং এবং ব্যাচ প্রসেসিং (যখন বড় ডেটা সেট x করে ভাগ করতে হয়)
*/
                   
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin >> n >> x;
        if (n <= 2) {
            cout << 1 << endl;
        } else{
            cout << 1 + ((n - 2 + x - 1) / x) << endl;  // ((n - 2 + x - 1) / x)  eita silling division teicks...1 jog kora hocce karon 1st follre er jnno 2 ta room..tai oita to agei done hcce sejnno oita count e rakhte 1 jog...
        }
    }
    
    return 0;
}
*/