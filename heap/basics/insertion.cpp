#include<bits/stdc++.h>
using namespace std;
class Heap{
    public:
        vector<int> arr;
        int size;
        heap(){
            arr[0] = -1;
            size=0;
        }
        void insert(int x){
            size++;
            int idx=size;
            arr[idx] = x;
            while(idx>1){
                int parent=idx/2;
                if(arr[parent]<arr[idx]){
                    swap(arr[idx],arr[parent]);
                    idx = parent;
                }
                else
                    return;
            }
        }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int main(){
        heap h;
        h.insert(50);
        h.insert(55);
        h.insert(53);
        h.insert(52);
        h.insert(54);
        h.print();
        return 0;
    }
};