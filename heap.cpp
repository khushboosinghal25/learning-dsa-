#include <iostream>
#include<queue>
using namespace std;
class heap{
    public:
    int arr[100];
    int size ;
    heap()
    {
        int size=0;
        arr[0]=-1;
    }
    void insert(int val)
    {
        size=size+1;
        int index = size;
        arr[index] = val;
        while(index>1)
        {
            int parent = index/2;
            if(arr[parent]<arr[index])
            {
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }
    void deletion()
    {
        if (size == 0)
        {
            cout << "nothing to delete" << endl;
            return;
        }
        arr[1] = arr[size];
        size--;
        int i=1;
        while(i<size)
        {
            int leftIndex = 2*i;
            int rightIndex = 2*i+1;
            if(leftIndex<size && arr[i]<arr[leftIndex])
            {
                swap(arr[i],arr[leftIndex]);
                i = leftIndex;
            }
            else if(rightIndex<size && arr[i]<arr[rightIndex])
            {
                swap(arr[i],arr[rightIndex]);
                i = rightIndex;
            }
            else{
                return;
            }
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left <= n && arr[largest] < arr[left])
    {
        // swap(arr[largest], arr[left]);
        largest = left;
    } 
    if (right <= n && arr[largest] < arr[right])
    {
        // swap(arr[largest], arr[right]);
        largest = right;
    }
    if (largest!= i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}
void heapSort(int arr[], int n)
{
    int size = n;
    while (size > 1)
    {
        // swap
        swap(arr[size], arr[1]);
        size--;
        heapify(arr, size, 1);
    }
}
void printing(int arr[],int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    heap h;
    h.insert(56);
    h.insert(45);
    h.insert(76);
    h.insert(34);
    h.insert(189);
    h.insert(9);
    h.insert(8);
    h.print();
    h.deletion();
    h.print();
    int arr[6] = {-1,54, 53, 55, 52, 50};
    int n = 5;
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
    printing(arr,n);
    heapSort(arr, n);
    printing(arr,n);
    int abrr[6] = {-1, 544, 531, 551, 52, 50};
    for (int i = n / 2; i > 0; i--)
    {
        heapify(abrr, n, i);
    }
    heapSort(abrr, n); 
    printing(abrr,n);
    cout<<"using priority queue "<<endl;
    // max heap 
    priority_queue<int> pq;
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);
    cout<<"element at top "<<pq.top()<<endl;
    pq.pop();
    cout<<"element at top "<<pq.top()<<endl;
    cout<<"size is "<<pq.size()<<endl;
    if(pq.empty())
    {
        cout<<"yep";
    }
    else
    {
        cout<<"nope";
    }
    // min heap
    priority_queue<int , vector<int> , greater<int> > minheap;
    minheap.push(6);
    minheap.push(1);
    minheap.push(5);
    minheap.push(3);
    cout<<"element at top "<<minheap.top()<<endl;
    minheap.pop();
    cout<<"element at top "<<minheap.top()<<endl;
    cout<<"size is "<<minheap.size()<<endl;
    if(minheap.empty())
    {
        cout<<"yep";
    }
    else
    {
        cout<<"nope";
    }
}