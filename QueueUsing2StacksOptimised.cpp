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

stack input = stack();
stack output = stack();

void push(int x){
	input.push(x);
}

int top() {
	if(!output.isEmpty()){
		return output.top();
	} else {
		while(!input.isEmpty()){
			output.push(input.top());
			input.pop();
		}
		return output.top();
	}
}

void pop() {
	if(!output.isEmpty()){
		return output.pop();
	} else {
		while(!input.isEmpty()){
			output.push(input.top());
			input.pop();
		}
		return output.pop();
	}

}

int main() {
	push(1);
	push(2);
	push(3);
	push(4);
	cout << top() << "\n";
	pop();
	cout << top() << "\n";

}
