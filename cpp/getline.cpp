#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {

	/*
	!IMPORTANT: writing comments is crucial,
	otherwise when you come back,
	the context is completely lost...

	so make sure to add these notes..

	 */

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

	string s, t;
	getline(cin, s);
	stringstream ss(s);

	/* Now i'm saying while there is some input left in the sstream,
		put that token into t, and the seperator should be a space ' '
			
		when the input was like this:
		take,input,sir
		and seperator was ,
		the ans was like this:

		take
		input
		sir

		and so on..



	 */
	while (getline(ss, t, '+')) {
		cout << t << endl;
	}

	// cout << s;

	// cout << ss;

	return 0;
}