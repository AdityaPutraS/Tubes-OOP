

#ifndef NODE_H
#define NODE_H

template <class T>
class Node{
    private:
    T value;
    public:
    Node(T _value);
    T getValue();
};



#endif