#include <iostream>
#include "LL.h"
using namespace std;

int main() {
    LinkedList ll;
    ll.insert(1);
    ll.insert(15);
    ll.insert(18);

    ll.delete_val(15);
    ll.print();

    return 0;
}

