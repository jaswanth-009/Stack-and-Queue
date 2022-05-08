Problem Statement: Given a circular integer array A,
return the next greater element for every element in A.
The next greater element for an element x is the first element greater than x
that we come across while traversing the array in a clockwise manner. 
If it doesn’t exist, return -1 for this element


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

	bool isempty(){
		return s.size() == 0;
	}
};



int main() {
	stack s = stack();
	vector<int> arr = {1,10,9,13,5,2,1,8, 5,7};
	int n = arr.size();
	vector<int> nge(n,-1);
	
	for(int i=(2*n)-1;i>=0;i--) {
		while(!s.isempty() && s.top() <= arr[i%n]) {
				s.pop();
		}

		if(i<n){
			if(!s.isempty()){
				nge[i] = s.top();
			}
		}
		s.push(arr[i%n]);
	}

	for(int i:nge){
		cout << i << " ";
	}

	return 0;
}
