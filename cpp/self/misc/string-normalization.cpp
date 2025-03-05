#include<bits/stdc++.h>
using namespace std;

string join(vector<string> const &strings, string delim)
{
    stringstream ss;
    copy(strings.begin(), strings.end(),
    ostream_iterator<string>(ss, delim.c_str()));
    return ss.str();
}

string normalize(const string &sentence) {
    string copy = sentence;
    int n = sentence.length() - 1;
    //Make the changes in copy, and return it
    
 	string line = copy;
     
    // Vector of string to save tokens
    vector <string> tokens;
     
    // stringstream class check1
    stringstream check1(line);
     
    string intermediate;
     
    // Tokenizing w.r.t. space ' '
    while(getline(check1, intermediate, ' '))
    {
        tokens.push_back(intermediate);
    }

    for (int i = 0; i < tokens.size(); i++) {
    	// chunk
    	string token = tokens[i];
    	token[0] = toupper(token[0]);

    	for (int j = 1; j < token.length(); j++) {
    		token[j] = tolower(token[j]);
    	}
    }

    string delim = ", ";

    string ans = join(tokens, delim);

    return ans;
}



// -- sol


#include<bits/stdc++.h>
using namespace std;

int skip_whitespace(const string &sentence, int idx) {
    while (idx < sentence.length() && sentence[idx] == ' ') {
        idx += 1;
    }

    return idx;
}

int normalize_word(string &sentence, int idx) {
    if (idx < sentence.length() && sentence[idx] != ' ') {
        sentence[idx] = toupper(sentence[idx]);
        idx += 1;
    }

    while (idx < sentence.length() && sentence[idx] != ' ') {
        sentence[idx] = tolower(sentence[idx]);
        idx += 1;
    }

    return idx;
}

string normalize(const string &sentence) {
    string copy = sentence;
    int idx = 0;

    while (idx < copy.length()) {
        idx = skip_whitespace(copy, idx);
        idx = normalize_word(copy, idx);
    }

    return copy;
}