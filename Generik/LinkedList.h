/**
 * \class LinkedList
 * \brief Class generik struktur data List
 * 
 * \author Naufal Aditya & Aditya Putra Santosa
 * 
 */
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#define NOT_FOUND -999999

#define MAX_NEXT 99999
#define MAX_PREV -99999

template <class T>
class LinkedList
{
    /**
     * \brief getDelVis menandakan apakah LinkedList sudah dikunjungi saat sedang dtor
     */
    bool delVis;
    /**
     * \brief Isi dari Linked List
     */
    T isi;
    /**
     * \brief prev merupakan pointer to linked list sebelumnya, nullptr jika tidak ada
     */
    LinkedList<T> *prev;
    /**
     * \brief next merupakan pointer to linked list sebelumnya, nullptr jika tidak ada
     */
    LinkedList<T> *next;

  public:
    /**
     * \brief Default constructor, membuat linkedlist dengan ukuran 0 dan prev = _prev, next = _next
     * serta isi = _isi
     * \param _isi Isi dari linked list ini
     * \param _prev Pointer ke Linked List sebelumnya
     * \para _next Pointer ke Linked List selanjutnya
     */
    LinkedList<T>(T _isi, LinkedList<T> *_prev, LinkedList<T> *_next)
    {
        isi = _isi;
        prev = _prev;
        next = _next;
        delVis = false;
    }
    /**
     * \brief Copy constructor, mengcopy isi dari LinkedList lainnya
     * \param LL LinkedList yang akan dicopy isinya
     */
    LinkedList<T>(const LinkedList<T> &LL)
    {
        delVis = false;
        LinkedList<T> *iterLLNext = LL.getNext();
        LinkedList<T> *iterLLPrev = LL.getPrev();
        this.next = nullptr;
        this.prev = nullptr;
        if (iterLLNext != nullptr)
        {
            this.next = new LinkedList<T>(*iterLLNext);
        }
        if (iterLLPrev != nullptr)
        {
            this.prev = new LinkedList<T>(*iterLLPrev);
        }
    }
    /**
     * \brief Destructor LinkedList, menghapus prev, dan next
     */
    ~LinkedList()
    {
        this->delVis = true;
        if (next != nullptr && !next->getDelVis())
        {
            delete next;
        }
        if (prev != nullptr && !prev->getDelVis())
        {
            delete prev;
        }
    }
    /**
     * \brief Assignment operator, mengcopy isi dari LinkedList LL ke LinkedList ini
     * \param LL LinkedList yang akan dicopy isinya
     */
    LinkedList<T> &operator=(const LinkedList<T> &LL)
    {
        if (next != nullptr)
        {
            delete next;
        }
        if (prev != nullptr)
        {
            delete prev;
        }
        LinkedList<T> *iterLLNext = LL.getNext();
        LinkedList<T> *iterLLPrev = LL.getPrev();
        this.next = nullptr;
        this.prev = nullptr;
        if (iterLLNext != nullptr)
        {
            this.next = new LinkedList<T>(*iterLLNext);
        }
        if (iterLLPrev != nullptr)
        {
            this.prev = new LinkedList<T>(*iterLLPrev);
        }
    }
    /**
     * \brief Setter dari isi
     * \param _isi Isi elemen sekarang
     */
    void setIsi(int _isi)
    {
        isi = _isi;
    }
    /**
     * \brief Setter dari prev
     * \param _prev pointer ke linked list sebelumnya
     */
    void setPrev(LinkedList<T> *_prev)
    {
        prev = _prev;
    }
    /**
     * \brief Setter dari next
     * \param _next pointer ke linked list selanjutnya
     */
    void setNext(LinkedList<T> *_next)
    {
        next = _next;
    }
    bool getDelVis()
    {
        return delVis;
    }
    /**
     * \brief Getter dari isi
     */
    T getIsi()
    {
        return isi;
    }
    /**
     * \brief Getter dari prev
     */
    LinkedList<T> *getPrev()
    {
        return prev;
    }
    /**
     * \brief Getter dari next
     */
    LinkedList<T> *getNext()
    {
        return next;
    }
    /**
     * \brief Mencari elemen T dengan acuan LinkedList sekarang
     * 0 = Elemen ada di LinkedList ini, 1 = Elemen ada di LinkedList selanjutnya, -1 = Elemen ada di LinkedList sebelumnya
     * NOT_FOUND = Elemen tidak ada
     * \param element Objek yang akan dicari
     */
    int find(T element)
    {
        if(isi == element)
        {
            return 0;
        }else{
            int hasil = 0;
            bool ketemu = false;
            //Cek kanan
            LinkedList<T>*iterKanan = next;
            while(iterKanan != nullptr && !ketemu && hasil < MAX_NEXT)
            {
                hasil++;
                if(iterKanan->getIsi() == element)
                {
                    ketemu = true;
                    return hasil;
                }else{
                    iterKanan = iterKanan->getNext();
                }
            }
            hasil = 0;
            //Cek kiri
            LinkedList<T>*iterKiri = prev;
            while(iterKiri != nullptr && !ketemu && hasil > MAX_PREV)
            {
                hasil--;
                if(iterKanan->getIsi() == element)
                {
                    ketemu = true;
                    return hasil;
                }else{
                    iterKiri = iterKiri->getPrev();
                }
            }
            if(!ketemu)
            {
                return NOT_FOUND;
            }
        }
    }
    /**
     * \brief Mengecek apakah LinkedList kosong, kosong apabila prev = next = nullptr
     */
    bool isEmpty()
    {
        return (next == nullptr && prev == nullptr);
    }
    /**
     * \brief Menambahkan elemen baru ke LinkedList, ditaruh di next
     * \param element Objek yang akan dimasukkan
     */
    void addNext(T element)
    {
        if(next == nullptr)
        {
            next = new LinkedList(element, this, nullptr);
        }else{
            LinkedList* tempNext = new LinkedList(element, this, next);
            next = tempNext;
        }
    }
    /**
     * \brief Menambahkan elemen baru ke LinkedList, ditaruh di prev
     * \param element Objek yang akan dimasukkan
     */
    void addPrev(T element)
    {
        if(prev == nullptr)
        {
            prev = new LinkedList(element, nullptr, this);
        }else{
            LinkedList* tempPrev = new LinkedList(element, prev, this);
            prev = tempPrev;
        }
    }
    /**
     * \brief Menghapus 1 LinkedList next dari linkedList sekarang, jika null maka tidak terjadi apa apa.
     * Penghapusan akan menyebabkan pergeseran elemen dan index semua elemen di kanan LinkedList ini
     */
    void removeNext()
    {
        if(next != nullptr)
        {
            LinkedList* tempNext = next;
            next = next->getNext();
            delete tempNext;
        }
    }
    /**
     * \brief Menghapus 1 LinkedList prev dari linkedList sekarang, jika null maka tidak terjadi apa apa.
     * Penghapusan akan menyebabkan pergeseran elemen dan index semua elemen di kiri LinkedList ini
     */
    void removePrev()
    {
        if(prev != nullptr)
        {
            LinkedList* tempPrev = prev;
            prev = prev->getPrev();
            delete tempPrev;
        }
    }
    /**
     * \brief Mendapatkan elemen dengan indeks ke _indeks relatif terhadap LinkedList sekarang
     * \param _indeks Indeks elemen yang akan didapatkan relatif terhadap indeks sekarang
     */
    T get(int _indeks)
    {
        if(_indeks == 0)
        {
            return isi;
        }else if(_indeks > 0)
        {
            return next->get(_indeks -1);
        }else if(_indeks < 0)
        {
            return prev->get(_indeks +1);
        }
    }
    /**
     * \brief Menghitung besar LinkedList dengan menghitung berapa banyak elemen di kanan + kiri + elemen LinkedList ini
     */
    int getNeff()
    {
        int banyak = 1;
        LinkedList<T>* iterNext = next;
        LinkedList<T>* iterPrev = prev;
        while(iterNext != nullptr)
        {
            banyak += 1;
            iterNext = iterNext->getNext();
        }
        while(iterPrev != nullptr)
        {
            banyak += 1;
            iterPrev = iterPrev->getPrev();
        }
        return banyak;
    }
};

#endif