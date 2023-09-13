#include <bits/stdc++.h>
using namespace std;

void replace_space(char * str) {

	int spaces = 0;

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ' ') {
			spaces++;
		}
	}

	int n = strlen(str);

	int idx = n + (spaces * 2);

	str[idx] = '\0';


	for (int i = n - 1; i >= 0; i--) {

		if (str[i] == ' ') {
			// put %20
			str[idx - 1] = '0';
			str[idx - 2] = '2';
			str[idx - 3] = '%';
			idx -= 3;
		} else {
			str[idx - 1] = str[i];
			idx--;
		}

	}

}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	char charArr[1000];
	cin.getline(charArr, 1000);
	replace_space(charArr);

	cout << charArr;

	return 0;
}



// #include <bits/stdc++.h>
// #define pb push_back
// using namespace std;

// int main() {
// 	#ifndef ONLINE_JUDGE
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout); 
// 	#endif

// 	string paragraph = "replace all spaces with %20";

// 	string ans;

// 	for (auto x : paragraph) {

// 		if (x == ' ') {
// 			ans+= "%20";
// 		} else {
// 			ans+= x;
// 		}
// 	}

// 	cout << ans;

// 	return 0;
// }