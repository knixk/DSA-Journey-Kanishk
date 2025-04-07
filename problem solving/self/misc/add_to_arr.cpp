#include <bits/stdc++.h>
using namespace std;



/*

summary:



*/

vector<int> addToArrayForm(vector<int>& num, int k) {
    if(k==0) return num;
    string s= to_string(k);
    int j=s.size()-1, i=num.size()-1;
    int carry=0;
    vector<int> ans;
    while(i>=0||j>=0){
        int sum=carry;
        if(i>=0){
            sum+=num[i];
            i--;
        }
        if(j>=0){
            sum+=(s[j]-'0');
            j--;
        }
        carry=sum/10;
        ans.push_back(sum%10);
    }
    if(carry!=0){
        ans.push_back(carry);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}       

/*
vector<int> addToArrayForm(vector<int>& num, int k) {
    string s = "";
    vector<int> ans;
    int n = num.size(), sum, digit;

    for (int i = n - 1; i >= 0; i--) {
        // cout << i << " ";
        s = to_string(num[i]) + s;
        // cout << s << endl;
    }

    digit = stoi(s);
    sum = digit + k;

    // cout << sum;
    string iterate = to_string(sum);

    for (auto x : iterate) {
        // cout << x << " ";
        int num = int(x - '0');
        // cout << num << " ";

        ans.push_back(num);
    }

    return ans;
}         
*/

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif


    int k = 34;
    vector<int> num = {1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0 ,0 ,0, 0 ,0 ,0 ,0, 0};

    vector<int> ans = addToArrayForm(num, k);

    for (auto x : ans) {
        cout << x << " ";
    }
    

}
