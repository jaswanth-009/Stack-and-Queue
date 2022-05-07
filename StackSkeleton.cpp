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

	void top(){
		if(s.size() == 0){
			cout << "stack is empty\n";
			return;
		}
		cout << s[s.size()-1] << "\n";
	}

	void pop(){
		if(s.size() == 0){
			cout << "stack is empty\n";
			return;
		}
		s.pop_back();
	}

	bool isempty(){
		return s.size() == 0;
	}
};



int main() {
	stack s = stack();
	s.push(10);
	s.top();
	return 0;
}
