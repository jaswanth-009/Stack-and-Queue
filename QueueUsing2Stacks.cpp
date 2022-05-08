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

stack s1 = stack();
stack s2 = stack();

void push(int x) {
	// s1 -> s2
	// push x to s1
	// s2 to s1

	while(!s1.isEmpty()){
		s2.push(s1.top());
		s1.pop();
	}

	s1.push(x);

	while(!s2.isEmpty()){
		s1.push(s2.top());
		s2.pop();
	}

}

int top() {
	if(s1.isEmpty()){
		cout << "Queue is empty\n";
		return INT_MIN;
	}
	return s1.top();
}

void pop() {
	if(s1.isEmpty()){
		cout << "Queue is empty\n";
	}
	s1.pop();
}

int main(){
	push(1);
	push(2);
	push(3);
	push(4);
	cout << top() << "\n";
	pop();
	cout << top() << "\n";
}
