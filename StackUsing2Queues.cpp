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

};

queue q1 = queue();
queue q2 = queue();

void push(int x) {

	q2.push(x);
	while(!q1.isEmpty()){
		q2.push(q1.top());
		q1.pop();
	}
	swap(q1,q2);
}

int top(){
	if(q1.isEmpty()){
		cout << "stack is empty\n";
		return INT_MIN;
	}
	return q1.top();
}

void pop() {
	if(q1.isEmpty()){
		cout << "stack is empty\n";
		return;
	}
	q1.pop();

}

bool isEmpty(){
	return q1.isEmpty();
}

int main() {

	
	push(1);
	push(2);
	push(3);
	push(4);
	cout << top() << "\n";
	pop();
	cout << top() << "\n";
	cout << isEmpty() << "\n";
	return 0;
}
