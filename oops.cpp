#include <iostream>
#include <fstream>
using namespace std;

int main() {

// for input
  // // Create and open a text file
  // ofstream MyFile("newfile.txt");

  // // Write to the file
  // MyFile << "Files can be tricky, but it is fun enough!";

  // // Close the file
  // MyFile.close();

	// for output

	// Create a text string, which is used to output the text file
	string myText;

	// Read from the text file
	ifstream MyReadFile("newfile.txt");

	// Use a while loop together with the getline() function to read the file line by line
	while (getline (MyReadFile, myText)) {
	  // Output the text from the file
	  cout << myText;
	}

	// Close the file
	MyReadFile.close();


}


/* 


#include <iostream>
#include <string>
using namespace std;

int main() {
  
  string name = "kanishk";
  
  string typedName;
  cin >> typedName;
  //cin >> typedName; 
  
  try {
  	if (name == typedName) {
    	cout << "correct!";
    } else {
    	throw(typedName);
    }
  
  } catch (string name) {
  	cout << "sorry you aren't auth" << name;
  }
  
  return 0;
}


/*

try {
    int age = 1;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw (age);
    }
  }
  catch (int myNum) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Age is: " << myNum;  
  }

*/


*/