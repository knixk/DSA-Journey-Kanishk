#include <bits/stdc++.h>
using namespace std;


string convert_to_digital_time(int minutes){
	
	// string ans;
	// precision(2);
	int hours = (minutes / 60);
	int mins = minutes % 60;

	string str_of_hrs = to_string(hours);
	string str_of_mins = to_string(mins);

	string first_digits = str_of_hrs;
	string second_digits = mins < 9 ? "0" + str_of_mins : str_of_mins;

	return first_digits + ":" + second_digits;
}


int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	int minutes;
	cin >> minutes;	
	cout << convert_to_digital_time(minutes);

	return 0;
}


/*
get the hours by dividing mins / 60
get the mins hands by modding

convert both to str,

then show it accordingly im sure u can do it...
*/