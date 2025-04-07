#include<bits/stdc++.h>
#define pb push_back
using namespace std;

vector<int> stringSearch(string big,string small){
    //store the occurrences in the result vector
    vector<int> result = {};

    int index = 0;

    while (true) {
		index = big.find(small, index);
		if (index == -1) {
			break;
		}
		result.pb(index);
		index++;
	}

	return result;
}





#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	string paragraph = "I am trying to gamer find all words the gamer occurences of paragraph. For gamer this I need to search in the paragraph for words.";	

	string word;
	getline(cin, word);

	int index = 0;

	// find func

	while (true) {
		index = paragraph.find(word, index);
		if (index == -1) {
			break;
		}
		cout << "occurence at " << index << ", ";
		index++;
	}

	cout << " x END x" << endl; 

	return 0;
}