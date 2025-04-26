#include <iostream>
using namespace std;
#define MAX_size 20;
class Stack
{
private:
  int top;
  int arr[MAX_size];

public:
  Stack()
  {
    top = -1;
  }
  bool push(int x)
  {
    if (top >= MAX_size - 1)
    {
      cout << "Stack is Full" << endl;
    }
    return false;
  }
  arr[++top] = x;
  return true;
} int pop()
{
  if (top < 0)
  {
    cout << "Stack underflow" << endl;
    return 0;
  }
  return arr[top--];
}

bool isEmpty()
{
  return (top < 0);
}

void display()
{
  if (top < 0)
  {
    cout << "Stack is empty" << endl;
    return;
  }
  cout << "\nStack elements :";
  for (int i = top; i > 0; i--)

    cout << arr[i] << " ";
  cout << endl;
  }
};

int main()
{
  cout << "Creating a stack object ";
  Stack s;
  cout << "Checking that the stack is empty or not ";
  cout << s.isEmpty() << endl;
  cout << "\n Inserting elements :" << endl;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  s.display();
  cout << "Removing an element :";
  cout << s.pop();
  s.display();
  cout << endl;
  return 0;
}
