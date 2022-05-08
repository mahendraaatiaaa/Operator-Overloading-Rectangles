#ifndef __RECTANGLE_HPP__
#define __RECTANGLE_HPP__

#include <iostream>

class Persegi_Panjang
{
    private: 

    //Bagian x berupa lebar/width dengan min dan max
    float x_min;
    float x_max;

    //Bagian y berupa panjang/length dengan mix dan max
    float y_min;
    float y_max;

    public:

    Persegi_Panjang(float length, float width, float midpoint_x, float midpoint_y);
    bool operator== (const Persegi_Panjang &)const;
    Persegi_Panjang operator+(const Persegi_Panjang &);
    Persegi_Panjang operator-(const Persegi_Panjang &);
    void operator++();
    void operator--();
    void printResult();

};

#endif