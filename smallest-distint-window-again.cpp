#include<string>
#include<climits>
using namespace std;

const int MAX_CHARS = 256;
 
 //Algorithm : https://www.geeksforgeeks.org/smallest-window-contains-characters-string/#:~:text=Solution%3A%20Above%20problem%20states%20that,the%20characters%20is%20%E2%80%9Cabcbcd%E2%80%9D.
 
// Function to find smallest window containing
// all distinct characters
string smallestWindow(string str)
{
    int n = str.length();
    if(n==0){
        return "";  
    }   


 
    // Return substring starting from start_index
    // and length min_len
    return str.substr(start_index, min_len);
}