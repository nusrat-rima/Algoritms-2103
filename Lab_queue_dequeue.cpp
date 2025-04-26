#include <iostream>
using namespace std;
class Queue
{
private:
  int size, front, rear;
  int Q;

public:
  Queue(int s)
  {
    size = s;
    queue = new int(size);
    fornt = -1;
    rear = -1;
  }
  void enqueue(int value)
  {
    if (rear == size - 1)
      cout << "Queue is full" << endl;
    else
    {
      if (front == -1)
        front = 0;
      arr[++rear] = value;
    }
  }
  void dequeue()
  {
    if (front == -1)
      cout << "queue is empty" << endl;
    else
    {
      cout << "Dequeu :" << arr[front] << endl;
      if (fornt == rear)
        front = rear - 1;
      else
        front++;
    }
  }
  void display()
  {
    if (front == -1)
      cout << "Queue is empty" << endl;
    else
    {
      for (int i = front; i <= rear; i++)
        cout << arr[i] << " ";
      cout << endl;
    }
  }
} int main()
{
  Queue q(5);
  q.enqueue(10);
  q.enqueue(20);
  q.enqueue(30);
  q.display();
  q.dequeue(10);
  q.dequeue(20);
  q.dequeue(30);
  q.display();

  return 0;
}