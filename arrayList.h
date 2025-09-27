#include <iostream>
using namespace std;

template <typename T> class arrayList{
    private:
        T* list;
        int size;
    public:
        arrayList(){
            size = 0;
            list = new T[size];
        }
        bool isEmpty(){
            if(size==0){
                return true;
            }
            return false;
        }
        bool isFull(){
            cout<<"Using dynamic memory so array is always \"full\" but size is size is currently: "<<size<<endl;
        }
        int listSize(){
            return size;
        }
        int maxListSize(){
            return size;
        }
        void print(){
            for(int i = 0; i<size;i++){
                cout<<list[i]<<endl;
            }
        }
        void isItemAtEqual(int pos, T element);
        bool insertEnd(T element);
        T retreiveAt(int pos);
        bool clearList(); //should be T* maybe
        bool removeAt(int pos);
};