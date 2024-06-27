#include <bits/stdc++.h>
using namespace std;

class kQueue
{
public:
    int n, k, *front, *rear, *arr, freeSpot, *next;
    kQueue(int n, int k)
    {
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];
        for (int i = 0; i < k; i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }
        arr = new int[n];
        freeSpot = 0;
        next = new int[n];
        for (int i = 0; i < n; i++)
            next[i] = i + 1;
        next[n - 1] = -1;
    }

    void enqueue(int data, int qn)
    {
        // overflow
        if (freeSpot == -1)
        {
            cout << "Overflow" << endl;
            return;
        }
        // FIND FIRST FREE INDEX
        int index = freeSpot;
        // update freeSpot
        freeSpot = next[index];
       // check whether first element 
       if(front[qn-1]==-1){
        front[qn-1] = index;
       }
       else{
        // link new elemnt to prev element 
        next[rear[qn-1]] = index;
       }
       // update next
       next[index] = -1;
        // update rear
        rear[qn-1] = index;
        // push element
        arr[index] = data;
    }
    int dequeue(int qn){
        // underflow
        if(front[qn-1]==-1){
            cout << "Underflow" << endl;
            return -1;
            }
            // find first element
       int index = front[qn-1];
       // update front
       front[qn-1] = next[index];
       // update next
       next[index] = freeSpot;
       freeSpot = index;
       return arr[index];
       
    }
}; 

int main()
{
    kQueue q(10,3);
    q.enqueue(1,1);
    q.enqueue(2,2);
    q.enqueue(1,3);
    q.enqueue(6,3);

    cout<<q.dequeue(2)<<endl;
    cout<<q.dequeue(2)<<endl;
    return 0;
}
