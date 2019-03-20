#include "LinkedList.h"
#include<iostream>
using namespace std;

int main()
{
    LinkedList<int> Head(0,nullptr,nullptr);
    Head.addNext(3);
    Head.addNext(5);
    Head.addPrev(2);
    cout << Head.getNeff() << endl;
    cout << Head.get(-1) << endl;
    cout << Head.get(0) << endl;
    cout << Head.get(1) << endl;
    cout << Head.get(2) << endl;
    return 0;
}