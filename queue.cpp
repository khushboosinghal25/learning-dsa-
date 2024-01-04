#include <iostream>
#include <queue>
using namespace std;
class queue
{
public:
  int *arr;
  int front;
  int rear;
  int size;
  queue()
  {
    size = 10001;
    arr = new int[size];
    front = 0;
    rear = 0;
  }
  bool isEmpty()
  {
    if(front == rear)
    {
      return true;
    }
    else
    return false;
  }
  void enqueue(int data)
  {
    if (rear == size)
    {
      cout << "Queue is full " << endl;
    }
    else
    {
      arr[rear] = data;
      rear++;
    }
  }
  int dequeue()
  {
    if (front == rear)
    {
      cout << "queue is empty " << endl;
    }
    else
    {
      int ans = arr[front];
      arr[front] = -1;
      front++;
      if (front == rear)
      {
        front = 0;
        rear = 0;
      }
      return ans;
    }
  }
  int front()
  {
    if(front == rear)
    {
      return -1;
    }

  }
};
int main()
{

  // create a queue of string
  queue<char> animals;

  // // push elements into the queue
  // animals.push("Cat");
  // animals.push("Dog");

  // cout << "Queue: ";

  // // print elements of queue
  // // loop until queue is empty
  // while(!animals.empty()) {

  //   // print the element
  //   cout << animals.front() << ", ";

  //   // pop element from the queue
  //   animals.pop();
  // }
  // queue<int>q;
  // q.push(1);
  // q.push(15);
  // q.push(13);
  // cout<<"the size of queue is :"<<q.size()<<endl;
  // q.pop();
  // q.pop();
  // q.pop();
  // cout<<"the size of queue is :"<<q.size()<<endl;

  cout << endl;

  return 0;
}