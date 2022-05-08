#include<iostream>
#include<vector>
using namespace std;

class stack {
private:
	vector<int> s;
public:
	int stackSize() {
		return s.size();
	}

	void push(int x){
		s.push_back(x);
	}

	int top(){
		if(s.size() == 0){
			cout << "stack is empty\n";
			return INT_MIN;
		}
		return s[s.size()-1];
	}

	void pop(){
		if(s.size() == 0){
			cout << "stack is empty\n";
			return;
		}
		s.pop_back();
	}

	bool isEmpty(){
		return s.size() == 0;
	}
};

int main() {
	stack s = stack();
	string brackets = "[()[{()}";
	for(int i=0;i<brackets.size();i++){
		if (brackets[i] == '(' || brackets[i] == '{' || brackets[i] == '['){
			s.push(brackets[i]);
		}
		else {
			if(s.isEmpty()){
				cout << "Failed\n";
				exit(0);
			}
			char c = s.top();
			if ((brackets[i] == '(' && c == ')') || (brackets[i] == '{' && c == '}') || (brackets[i] == '[' && c == ']') ){
				s.pop();
			}
		}
	}
	if(s.isEmpty()){
		cout << "Passed\n";
	}
	else {
		cout << "Failed\n";
	}
}
