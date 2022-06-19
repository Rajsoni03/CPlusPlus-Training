#include <iostream>
using namespace std;

class Stack{
	public:
		virtual void push() = 0;
		virtual void pop() = 0;
		virtual int top() = 0;
}

class ArrayBasedStack : public Stack{
	public:
	
};

class LinkedListBasedStack : public Stack{
	public:
	
};

int main(){
	return 0;
}