    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            int sum = 0;
            vector <int> candies(n);
            for(int i=0; i<n; i++) cin>>candies[i];

            int l = 0;
            int r = n - 1;
            long long leftSum = 0;
            long long rightSum = 0;
            int ans = 0;
            while(l<=r){        // eta na hole alice and bob eke oporer ear candi te dhuke jaben
                if(leftSum<rightSum){
                    leftSum += candies[l];
                    l++;
                } else{
                    rightSum += candies[r];
                    r--;
                }
                if(leftSum==rightSum){
                    ans = max(l, (l + (n - r - 1)));
                }
            }
            cout<<ans<<endl;
        }

        return 0;
    }