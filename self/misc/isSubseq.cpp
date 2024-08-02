#include <bits/stdc++.h>
using namespace std;

bool subseq2(string s, string t) {
		// int sn = s.length();
        // int tn = t.length();

        // if ((sn == 0) && (tn == 0) || (sn == 0) && (tn > 0) {
        //     return true;
        // } 

        // if (sn > 0 && tn == 0) {
        //     return false;
        // }

        stack <char> mystack;
        stack <char> mystack2;


        for (int i = 0; s[i] != '\0'; i++) {
            mystack.push(s[i]);
        }

        for (int i = 0; t[i] != '\0'; i++) {
            mystack2.push(t[i]);
        }        

        while (!mystack.empty()) {
        	cout << mystack.top() << " ";
        	mystack.pop();
        }

        // while (!mystack.empty()) {
        // 	while (!mystack2.empty()) {
        // 		if (mystack.top() == mystack2.top()) {
        //         	mystack.pop();
        //         	mystack2.pop();
        //     	} else {
        //     		mystack2.pop();
        //     	}
        // 	}
        // }
        

        // if (mystack.empty()) {
        //     return true;
        // } else {
        // 	return false;
        // }

        return true;
};

bool subseq(vector<char> & arr1, vector<char> & arr2, int n, int t) {
	int i = 0;
	while (i < n) {
		int j = i;
		while (j < t) {
			if (arr1[i] == arr2[j]) {
				i++;
				break;	
			}

			if (j == t - 1 && arr2[j] != arr1[i]) {
				return false;
			}

			j++;	
		}
	}

	return true;
}		

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	string s = "xcf";
	string t = "axfc";

	// int n; cin >> n;
	// int t; cin >> t;
	// vector<char> arr1(n, 0);
	// vector<char> arr2(t, 0);



	// for (int i = 0; i < n; i++) {
	// 	cin >> arr1[i];
	// }
	
	// for (int i = 0; i < t; i++) {
	// 	cin >> arr2[i];
	// }

	if (subseq2(s, t)) {
		cout << "subseq FOUND" << "\n";
	} else {
		cout << "subseq NOT found" << "\n";
	}

	// cout << subseq2(s, t);

	return 0;
}