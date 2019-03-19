#include <iostream>
using namespace std;


#ifndef GENERIK_H
#define GENERIK_H

#define MAXSIZE 500

template <class T>
class LinkedList{
    private:
    T* List;
    int neff;
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
    T = new T[MAXSIZE];
    neff = 0;
}
template <class T>
LinkedList<T>::LinkedList(const LinkedList<T>& LL){
    T = new T[MAXSIZE];
    neff = LL.neff;
    for(int i=0;i<neff;i++){
        List[i] = LL.List[i];
    }
}
template <class T>
LinkedList<T>::~LinkedList(){
    delete [] T;
    neff = 0;
}
template <class T>
LinkedList<T>& LinkedList<T>::operator= (const LinkedList<T>& LL){
    delete [] T;
    T = new T[MAXSIZE];
    neff = LL.neff;
    for(int i=0;i<neff;i++){
        List[i] = LL.List[i];
    }
    return *this;
}
template <class T>
int LinkedList<T>::find(T element){
    int i = 0;
    bool found = false;
    while(!found && i<neff){
        if(List[i] == element) found = true;
        else i++;
    }
    if(i==neff) return -1;
    else return i;
}
template <class T>
bool LinkedList<T>::isEmpty(){
    return neff == 0;
}
template <class T>
void LinkedList<T>::add(T element){
    if(neff!=MAXSIZE){
        List[neff] = T;
        neff++;
    }
}
template <class T>
void LinkedList<T>::remove(T element){
    if(find(element)!= -1){
        neff--;
        //delete atau jadiin 0 aja?
        delete List[find(element)];
    }
}
template <class T>
T LinkedList<T>::get(int indeks){
    return List[indeks];
    //zero based yak, neff tetep ngitung indeks ke 0
}
template <class T>
int LinkedList<T>::getNeff(){
    return neff;
}


class Point{
    private:
        int x;
        int y;
    public:
        //ctor
        Point(int _x = 0, int _y = 0):x(_x), y(_y){}

        //Getter dan setter
        int getAbsis() const{return x;}
        int getOrdinat() const{return y;}

        void setAbsis(int _x){x = _x;}
        void setOrdinat(int _y){y = _y;}

};

#endif