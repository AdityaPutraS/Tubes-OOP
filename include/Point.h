/**
 * \class Point
 * \brief Point adalah suatu class yang menampung posisi x dan y sebagai representasi posisi
 *
 * 
 * \author M. Khairul Makirin
 * 
 */
#ifndef POINT_H
#define POINT_H 
 
 
class Point{ 
    private: 
        int x; 
        int y; 
    public: 
        /**
        * \brief Constructor Point dengan parameter x dan y
        * \param x dan y dengan default 0
        */
        Point(int _x = 0, int _y = 0):x(_x), y(_y){} 
        /**
        * \brief operator+ overloading dengan menjumlahkan 2 buah Point
        * \param Point
        */
        Point operator+(const Point&);
        /**
        * \brief operator- overloading dengan mengurangkan 2 buah Point
        * \param Point
        */
        Point operator-(const Point&);
 
        /** \brief getter absis */
        int getAbsis() const{return x;} 
        /** \brief getter ordinat */
        int getOrdinat() const{return y;} 

        /** \brief setter absis 
        * \param _x dan _y
        */
        void setAbsis(int _x){x = _x;} 
        /** \brief setter ordinat 
        * \param _x dan _y
        */
        void setOrdinat(int _y){y = _y;} 
 
}; 
 
#endif