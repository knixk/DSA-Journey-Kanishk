#include <bits/stdc++.h>
using namespace std;


char * mystrtok(char * str, char delim) {
	
	static char * input = NULL;

	if (str != NULL) {
		input = str;
	}

	if (input == NULL) {
		return input;
	}

	char * token = new char[strlen(str) + 1];

	int i = 0;

	for ( ; input[i] != '\0'; i++) {
		if (input[i] != delim) {
			token[i] = input[i];
		} else {
			token[i] = '\0';
			// input will be stored for next fn call
			input = input + i + 1;	
			return token;
		}
	}

	// out of loop
	token[i] = '\0';
	input = NULL;
	return token;

}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	char charArr[1000];
	cin.getline(charArr, 1000);

	char * token = mystrtok(s, ' ');

	while (token != NULL) {
		cout << token << endl;
		token = mystrtok(NULL, ' ');
	}

	return 0;	

}