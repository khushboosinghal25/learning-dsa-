#include <iostream>
#include <queue>
using namespace std;
class queue
{
    int *arr;
    int front;
    int rear;
    int size;
    queue()
    {
        size = 1001;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    bool isEmpty()
    {
        if (front == rear)
            return true;
        else
            return false;
    }
    void enqueue(int data)
    {
        if (rear == size)
            cout << "queue is full " << endl;
        else
        {
            arr[rear] = data;
            rear++;
        }
    }
    int dequeue()
    {
        if (front == rear)
            cout << "Queue is empty " << endl;
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
        if (front == rear)
            return -1;
    }
};
class CircularQueue
{
public:
    int *arr;
    int front;
    int rear;
    int size;
    CircularQueue(int n)
    {
        size = 100001;
        arr = new int[size];
        front = rear = -1;
    }
    bool enqueue(int value)
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        { 
            cout << "Queue is full ";
            return false;
        }
        else if (front == -1) // first element to push
        {
            front = rear = 0;
            // arr[rear] = value;
        }
        else if (rear = size - 1 && front != 0)
        { // to maintain cyclic nature
            rear = 0;
            // arr[rear] = value;
        }
        else
        {
            rear++;
            // arr[rear] = value;
        }
        arr[rear] = value;
        return true;
    }
    int dequeue()
    {
        if(front == -1)
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if(front==rear) // single element
        {
            front =rear=-1;
        }
        else if(front==size-1)
        {
            front= 0;
        }
        else
        {
            front++;
        }
        return ans;


    }
};
int main()
{
}