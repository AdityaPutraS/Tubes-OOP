#include "LinkedList.h"
#include<iostream>
using namespace std;

int main()
{
    LinkedList<int> Lol;
    Lol.addNext(10);
    cout << Lol.getNeff() << endl;
    cout << Lol.get(0) << endl;
    Lol.addPrev(50);
    Lol.addPrev(5011);
    Lol.addPrev(23);
    Lol.addNext(2);
    Lol.addNext(6);
    cout << Lol.getNeff() << endl;
    cout << Lol.get(1) << endl;
    cout << Lol.get(-1) << endl;
    Lol.removeNext();
    cout << Lol.getNeff() << endl;
    cout << Lol.get(1) << endl;
    cout << Lol.get(-1) << endl;
    Lol.print();
    LinkedList<int> Lol2 = *(Lol.getPrev());//= LinkedList<int>(*(Lol.getNext()));
    Lol2.print();
    Lol.removePrev();
    Lol.print();
    Lol2.print();
    return 0;
}