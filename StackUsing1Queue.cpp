#include<iostream>
#include<vector>
using namespace std;

class queue{
private:
	vector<int> q;
public:
	int top() {
		if(q.size() == 0){
			cout << "Queue is empty\n";
			return INT_MIN;
		}
		return q[0];
	}

	void pop() {
		if(q.size() == 0){
			cout << "Queue is empty\n";
			return;
		}
		q.erase(q.begin());
	}

	void push(int x) {
		q.push_back(x);
	}

	bool isEmpty() {
		return q.size() == 0;
	}

	int length() {
		return q.size();
	}

};

queue q1 = queue();

void push(int x) {
	q1.push(x);
	int n = q1.length() - 1;
	for(int i=1;i<=n;i++){
		if(!q1.isEmpty()){
			q1.push(q1.top());
			q1.pop();
		}
	}
}

int top() {
	if(!q1.isEmpty()){
		return q1.top();
	} else {
		cout << "Stack is empty\n";
		return INT_MIN;
	}
}

void pop(){
	if(q1.isEmpty()){
		cout << "Stack is empty\n";
		return;
	}
	q1.pop();
}

int main() {

	push(1);
	push(2);
	push(3);
	cout << top() << "\n";
	push(4);
	push(5);
	cout << top() << "\n";
	pop();
	cout << top() << "\n";
}
