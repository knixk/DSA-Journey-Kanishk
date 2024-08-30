#include<iostream>
#include<stack>
#include<string>
using namespace std;


bool isBalanced(string input){
	//Todo: Complete this method

	stack<char> my_stack;
	for(auto ch : input){

		switch(ch){
			case '(':
			case '[':
			case '{': my_stack.push(ch);
						break;

			case ')': if(!my_stack.empty() and my_stack.top()=='('){
						my_stack.pop();
					  }
					  else{
					  	return false;
					  }
					  break;

			case ']': if(!my_stack.empty() and my_stack.top()=='['){
						my_stack.pop();
					  }
					  else{
					  	return false;
					  }
					  break;

			case '}': if(!my_stack.empty() and my_stack.top()=='{'){
						my_stack.pop();
					  }
					  else{
					  	return false;
					  }
					  break;
			default : continue;	  
		}
	}

	if(my_stack.empty()==true){
		return true;
	}
	return false;
}



int main(){
	string s = "{ a + (b+c) + ([d+e]*f)) } + k`";//{ a + (b+c) + ([d+e]*f)) } + k";

	if(isBalanced(s)){
		cout<<"Balanced!"<<endl;
	}
	else{
		cout<<"Not Balanced "<<endl;

	}
return 0;
}