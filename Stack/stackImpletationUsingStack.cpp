#include<iostream>
using namespace std;

class Stack{
private:
	int arr[5];
	int top;

public:
    Stack(){
   top = -1;
}
bool isEmpty(){
	return (top == -1);
}
bool isFull(){
	return (top == 4);
}

void push(int val){
	if(isFull()){
		cout<<"Overflow"<<endl;
	}
	else{
		arr[++top] = val;
	}
}
void pop(){
	if(isEmpty()){
		cout<<"stack is empty"<<endl;
		return;
		
	}
    --top;
}
int peek(){
	if(isEmpty()){
		cout<<"stack is empty"<<endl;
		return -1;
	}else{
		return arr[top];
	}
}
int size(){
	return top + 1;
}
};
int main(){
  Stack s;
  cout<<"Empty : "<<s.isEmpty()<<endl;
   cout<<"Full : "<<s.isFull()<<endl;
   s.push(3);
   s.push(7);
   s.push(9);



   cout<<"top : "<<s.peek()<<endl;
   cout<<"size : "<<s.size()<<endl;

   s.pop();
   cout<<"top : "<<s.peek()<<endl;

	return 0;
}
