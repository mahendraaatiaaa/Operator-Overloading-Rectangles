#include "include/rectangle.hpp"
#include <iostream>

using namespace std;

// Name : Tatia Mahendra
// Student Registration Numbers : 5024211073
// Class : B
// Advanced Programming

int main()
{
    float length, width, midpoint_x, midpoint_y;
    
    cout << endl;

    cout << "Operator Overloading by : " << endl ;
    cout << "Tatia Mahendra" << endl;
    cout << "5024211073" << endl;
    cout << "Computer Engineering" << endl;
    cout << "Insitut Teknologi Sepuluh Nopember" << endl;
    cout << "Surabaya, East Java, Indonesia" ;
    
    cout << endl 
         << endl;

    cout << "Enter the number of the First Rectangle : " << endl;
    cout << "Length : ";        cin >> length;
    cout << "Width  : ";        cin >> width;
    cout << "Midpoint X : ";    cin >> midpoint_x;
    cout << "Midpoint Y : ";    cin >> midpoint_y;

    Persegi_Panjang P1(length, width, midpoint_x, midpoint_y);

    cout << endl ;

    cout << "Enter the Number of the Second Rectangle : " << endl;
    cout << "Length : ";        cin >> length;
    cout << "Width  : ";        cin >> width;
    cout << "Midpoint X : ";    cin >> midpoint_x;
    cout << "Midpoint Y : ";    cin >> midpoint_y;

    Persegi_Panjang P2(length, width, midpoint_x, midpoint_y);

    cout << endl
         << endl;

    cout << "The First Rectangle : " << endl;
    P1.printResult();

    cout << "The Second Rectangle : " << endl;
    P2.printResult();
    
    cout << endl;

    Persegi_Panjang P3 = P1 + P2;

    cout << endl;
    
    cout << "The Final Result after Operator + of two Rectangles : " << endl;
    P3.printResult();

    Persegi_Panjang P4 = P1 - P2;
    
    cout << endl;

    cout << "The Final Result after Operator - of two Rectangles : " << endl;
    P4.printResult();

    cout << endl
         << endl;

    cout << "The First Rectangle : " << endl;
    P1.printResult();
    ++P1;

    cout << "The Final Result after Operator ++ for The First Rectangle : " << endl;
    P1.printResult();
    --P1;
    
    cout << endl 
         << endl;

    cout << "The Second Rectangle : " << endl;
    P2.printResult();
    ++P2;

    cout << "The Final Result after Operator ++ for The Second Rectangle : " << endl;
    P2.printResult();
    --P2;

    cout << endl
         << endl;

    cout << "The First Rectangle : " << endl;
    P1.printResult();
    --P1;

    cout << "The Final Result after Operator -- for The First Rectangle : " << endl;
    P1.printResult();
    ++P1;

    cout << endl
         << endl;

    cout << "The Second Rectangle : " << endl;
    P2.printResult();
    --P2;

    cout << "The Final Result after Operator -- for The Second Rectangle : " << endl;
    P2.printResult();
    ++P2;

    cout << endl
         << endl;

    cout << "The Operator == : " << endl;

    if (P1 == P2)
        cout << "Both rectangles does overlap ! ";
    else
        cout << "Both rectangles does not overlap ! ";

    cout << endl
         << endl;

    cout << "The program is done, thank you for start! " << endl << endl;

    return 0;
}

