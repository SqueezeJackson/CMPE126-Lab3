#include <iostream>
using namespace std;
#include "arrayList.h"

int main(){
    arrayList<int> list;
    list.insertEnd(5);
    list.insertEnd(6);
    list.insertEnd(7);
    list.insertEnd(8);
    list.print();
    cout<<list.listSize()<<"   <-- is list size"<<endl;
    cout<<endl;
    cout<<"removing element 2 then printing list and returning size"<<endl;
    list.removeAt(2);
    list.print();
    cout<<list.listSize()<<"   <-- is list size"<<endl;
    cout<<endl;
    cout<<"retrieving at element 0"<<endl;
    cout<<list.retreiveAt(0)<<endl<<endl;
    cout<<"testing if 5 is equal at position 0, should return true"<<endl;
    if(list.isItemAtEqual(0, 5)){
        cout<<"Elements are equal\n\n";
    }
    else{
        cout<<"elements are not equal\n\n";
    }
    cout<<"Emptying list now, attempting to print (nothing should be output but size should equal zero)"<<endl;
    list.clearList();
    list.print();
    cout<<list.listSize()<<"   <-- is list size"<<endl;


    
}