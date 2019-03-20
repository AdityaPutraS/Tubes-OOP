#include "Node.h"


#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template <class T>
class LinkedList{
    private:
    Node<T> info;
    LinkedList<T>* next;
    public:
    LinkedList();
    LinkedList(const LinkedList&);
    ~LinkedList();
    LinkedList& operator= (const LinkedList&);
    int find(T element);
    bool isEmpty();
    void add(T element);
    void remove(T element);
    T get(int indeks);
    int getNeff();
};

template <class T>
LinkedList<T>::LinkedList(){
    info = "";  
    next = nullptr;
}
template <class T>
LinkedList<T>::LinkedList(const LinkedList<T>& LL){
    info = LL.info;
    next = LL.next;
}
template <class T>
LinkedList<T>::~LinkedList(){

}
template <class T>
LinkedList<T>& LinkedList<T>::operator= (const LinkedList<T>& LL){
    
}
template <class T>
int LinkedList<T>::find(T element){
    
    else return i;
}
template <class T>
bool LinkedList<T>::isEmpty(){
    return info == nullptr;
}
template <class T>
void LinkedList<T>::add(T element){
    
}
template <class T>
void LinkedList<T>::remove(T element){
    
}
template <class T>
T LinkedList<T>::get(int indeks){
    
}
template <class T>
int LinkedList<T>::getNeff(){
    
}


#endif