#include<iostream>
#include<vector>
using namespace std;

class queue{
private:
	vector<int> q;
public:
	void top(){
		if(q.size() == 0){
			cout << "Queue is empty\n";
			return;
		}
		cout << q[0] << "\n";
	}

	void push(int x){
		q.push_back(x);
	}

	void pop() {
		if(q.size() == 0){
			cout << "Queue is empty\n";
			return;
		}
		q.erase(q.begin());
	}

	bool isEmpty(){
		return q.size() == 0;
	}

};

int main(){
	queue q1 = queue();
	q1.push(1);
	q1.push(2);
	q1.push(3);
	q1.top();
	q1.pop();
	q1.top();
}
