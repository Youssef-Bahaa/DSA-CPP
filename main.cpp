#include <iostream>
#include "LL.h"
using namespace std;

int main() {
    LinkedList ll;
    ll.insert(5);
    ll.insert(10);
    ll.insert(15);
    ll.insert(20);
    ll.insert(25);
    ll.delete_val(5);
    cout <<"[ ";
    ll.print();
    cout <<"]\n";
    cout <<"Size: "<<ll.size()<<endl;
    cout<<ll.get_first();
    return 0;
}

