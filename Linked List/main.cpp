#include <iostream>

#include "LL.h"
using namespace std;

int main() {
    LinkedList ll;
    ll.insert(50);
    ll.insert(40);
    ll.insert(30);
    ll.insert(20);
    ll.insert(10);
    cout <<"Size: "<<ll.size()<<endl;
    ll.sort();
    ll.print();
    return 0;
}

