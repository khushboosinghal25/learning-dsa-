#include <iostream>
using namespace std;
void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];
    // copy value
    int mainArrayIndex = s;
    for (int i = 0; i < len1;)
    {
        first[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }
    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    while (index1 < len1 && index2 < len2){
        if(first[index1]=second[index2]){
            arr[mainArrayIndex++]=first[index1++];
        }
        else{
             arr[mainArrayIndex++]=second[index2++];
        }
    }

}
#include<bits/stdc++.h>
using namespace std;

void supporterswithitems(int tc){
	for(int i = 0; i<tc; i++){
		int numsupp, numstalls;
		cin>>numsupp;
		vector<int> suppreq(numsupp);
		for(int j = 0; j<numsupp; ++j){
			cin>>suppreq[j];
		}
		cin>>numstalls;
		vector<pair<int, int> > stalls(numstalls);
		for(int j = 0; j<numstalls; ++j){
			int l, r;
			cin>> l>>r;
			stalls[j] = make_pair(l, r);
		}
		int suppobitem = 0;
		for(int item: suppreq){
			for(auto stall: stalls){
				if(item >= stall.first && item<=stall.second){
					++suppobitem;
					break;
				}
			}
		}
		cout<< suppobitem << endl;
	}
}

int main(){
	int numtc;
	cin>>numtc;
	supporterswithitems(numtc);
	return 0;
}
void mergeSort(int *arr, int s, int e)
{
    // base case
    if (s > e)
    {
        return;
    }
    int mid = (s + e) / 2;
    // left part sorting
    mergeSort(arr, s, mid);
    // right part sorting
    mergeSort(arr, mid + 1, e);
    // merging the array
    merge(arr, s, e);
}
int main()
{
    int s,e;
    int arr[5] = {2, 5, 1, 6, 9};
    int n = 5;
    mergeSort(arr, s, e);
    for(auto i:arr)
        cout<<i<<" ";

    return 0;
}