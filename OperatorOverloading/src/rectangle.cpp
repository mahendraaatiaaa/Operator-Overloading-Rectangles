#include "include/rectangle.hpp"
#include <cmath>
#include <iostream>

Persegi_Panjang::Persegi_Panjang
(
    float length,
    float width,
    float midpoint_x,
    float midpoint_y
    
)

{
    // Constructor dengan parameter keterangan titik tengah dari y atau panjang dari persegi panjang
    this->y_max = midpoint_y + (width / 2);
    this->y_min = midpoint_y - (width / 2);

    // Constructor dengan parameter keterangan titik tengah dari x atau lebar dari persegi panjang
    this->x_max = midpoint_x + (length / 2);
    this->x_min = midpoint_x - (length / 2);
}

void Persegi_Panjang::printResult()
{
    std::cout << "The Number of Length     : " << (this->x_max - this->x_min) << std::endl;
    std::cout << "The Number of Width      : " << (this->y_max - this->y_min) << std::endl;
    std::cout << "The Number of Midpoint X : " << (this->x_max - this->x_min) / 2 + this->x_min << std::endl;
    std::cout << "The Number of Midpoint Y : " << (this->y_max - this->y_min) / 2 + this->y_min << std::endl;
    std::cout << "The Number of x_max      : " << this->x_max << std::endl;
    std::cout << "The Number of x_min      : " << this->x_min << std::endl;
    std::cout << "The Number of y_max      : " << this->y_max << std::endl;
    std::cout << "The Number of y_min      : " << this->y_min << std::endl;
}

/* Buatlah operator == yang berfungsi untuk menentukan apakah dua buah kelas persegi panjang saling beririsan atau tidak */
bool Persegi_Panjang::operator==(const Persegi_Panjang& newdata) const
{
    if (this->x_min >= newdata.x_max|| newdata.x_min >= this->x_max)
        return false;
    if (this->y_min >= newdata.y_max|| newdata.y_min >= this->y_max)
        return false;

    return true;
}

/* Buat operator + dengan menambah luasan dari persegi panjang dengan melakukan penggabungan terdapat kedua luasan dari persegi panjang tersebut.
   Syarat bahwa operator + bisa dilakukan adalah bahwa kedua persegi panjang yang ditambahkan harus saling beririsan */

Persegi_Panjang Persegi_Panjang::operator+(const Persegi_Panjang& newdata)
{
    Persegi_Panjang result(0, 0, 0, 0);
    if (*this == newdata)
    {
        result.x_min = std::min(this->x_min, newdata.x_min);
        result.x_max = std::max(this->x_max, newdata.x_max);
        result.y_min = std::min(this->y_min, newdata.y_min);
        result.y_max = std::max(this->y_max, newdata.y_max);
    }
    else
        std::cout << "The rectangle for Operator + does not overlap !";

    return result;
}

/* Buat  operator - dengan fungsi mengambil irisan dari kedua buah persegi panjang */

Persegi_Panjang Persegi_Panjang::operator-(const Persegi_Panjang& newdata)
{
    Persegi_Panjang result(0, 0, 0, 0);
    if (*this == newdata)
    {
        result.x_min = std::max(this->x_min, newdata.x_min);
        result.x_max = std::min(this->x_max, newdata.x_max);
        result.y_min = std::max(this->y_min, newdata.y_min);
        result.y_max = std::min(this->y_max, newdata.y_max);
    }
    else
        std::cout << "The rectangle for Operator - does not overlap !";
    return result;
}

/* Buatlah operator ++ yang berfungsi untuk menambah luas persegi panjang
   menjadi dua kali luasan sebelumnya */

void Persegi_Panjang::operator++()
{
    float length = (this->x_max - this->x_min) * 2;
    float width = (this->y_max - this->y_min) * 2;
    float midpoint_x = (this->x_max + this->x_min) / 2;
    float midpoint_y = (this->y_max + this->y_min) / 2;

    this->x_max = midpoint_x + (length / 2);
    this->x_min = midpoint_x - (length / 2);

    this->y_max = midpoint_y + (width / 2);
    this->y_min = midpoint_y - (width / 2);

}

void Persegi_Panjang::operator--()
{
    float length = (this->x_max - this->x_min) / 2;
    float width = (this->y_max - this->y_min) / 2;
    float midpoint_x = (this->x_max + this->x_min) / 2;
    float midpoint_y = (this->y_max + this->y_min) / 2;

    this->x_max = midpoint_x + (length / 2);
    this->x_min = midpoint_x - (length / 2);

    this->y_max = midpoint_y + (width / 2);
    this->y_min = midpoint_y - (width / 2);
}
