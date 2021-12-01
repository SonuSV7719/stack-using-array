#include<string>
#include<iostream>
#define MAX 50
using namespace std;
string stack[MAX];
string pal;
int top= -1;

bool isFull()
{
	if (top>=MAX)
		return 1;
	else
		return 0;
	
}

bool isEmpty()
{
	if (top==-1)
		return 1;
	else
		return 0;	
}
void push(char data)
{
	if (isFull())
		cout<<"Stack is Full"<<endl;
	else
	{
		top++;
		stack[top] = data;
		
	}
}

void pop() {
   if(isEmpty())
   cout<<"Stack empty"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
		pal = pal+ stack[top];
      top--;
   }
}

int main()
{
	string str;
	cout<<"Enter string which you want to check its palindrome or not: ";
	cin>>str;
	for (int i= 0; i<str.size(); i++)
	{
		push(str[i]);
	}
	
	for(int i = 0; i<str.size(); i++)
	{
		pop();
	}
	cout<<"String obtained after poping: "<<pal<<endl;
	if(pal.compare(str))
	cout<<"Not Palindrome";
	else
	cout<<"Palindrome";
	
	
	return 0;
}
