#include <bits/stdc++.h>
using namespace std;

void largest_unique_substring(char * arr, int n) {

	unordered_map <char, int> charMap;

	int ms = INT_MIN;
	int start = 0;
	int w_len = 0;
	// int cs = 0;
	int i = 0, j = 0;

	// for (int i = 0; arr[i] != '\0'; i++) {
	// 	cout << arr[i] << " ";	
	// }

	while (i <= j and arr[j] != '\0') {

		cout << "i run";
		cout << start;


		char ch = arr[j];
		int idx = charMap[ch];

		if (!charMap.count(arr[j])) {
			// expand the window
			j++;
			w_len++;

		} else if (charMap.count(arr[j]) && (idx < j && idx >= i)) {
			// contract the window
			w_len--;
			i = i + 1;	
		}

		charMap[ch] = j;

		// find max	
		if (w_len > ms) {
			ms = w_len;
			start = i;
			cout << "i run";

		}
	}

	// printf("%d\n %d", start, start + w_len);

	// cout << start << start + w_len;

	// string ans = arr.substr(start, w_len);
	// string ans = strncpy(arr + start, arr+10, 4);

	// printf("%.*s", 4, buff + 10);


	// return ans;
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	char arr[] = "abcaeba";

	// one extra for null char
	int n = sizeof(arr) / sizeof(char);
	largest_unique_substring(arr, n);


	// cout << largest_unique_substring(arr, n);

	return 0;	

}







#include<iostream>
#include<unordered_map>
#include<cstring>
using namespace std;

string unique_substring(string str){

	int i = 0;
	int j = 0;

	int window_len = 0;
	int max_window_len = 0;
	int start_window = -1;


	unordered_map<char,int> m;


	while(j < str.length()){

		char ch = str[j];

		//if it is inside hashmap & its idx >= start of the current window
		if(m.count(ch) and m[ch]>=i){
			//later on..
			i = m[ch] + 1;
			window_len = j - i; //updated remaining window len excluding current char
		}

		//update the last occ 
		m[ch] = j;
		window_len++;
		j++;

		//update max_window_len at every step
		if(window_len > max_window_len){
			max_window_len = window_len;
			start_window = i;
		}
	}
	return str.substr(start_window,max_window_len);
}


int main(){

	string input;
	cin>>input;

	cout << unique_substring(input);


	return 0;
}