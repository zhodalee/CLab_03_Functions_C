/******************************************************************************

HANDS-ON LAB #3: Functions
In-lab Assignment #2

*******************************************************************************/
#include <stdio.h>

void Rec_AreaPeriCalc1( int, int );
void Rec_AreaPeriCalc1( int int_w, int int_h )
{
    // Function to compute the area and perimeter of a rectangle
    // with a width of 3 inches and a height of 5 inches
    int int_area;
    int int_peri;
    
    int_area = int_w * int_h;
    int_peri = ( int_w * (int)2 ) + ( int_h * (int)2 );
    
    printf("Area is: %d\n", int_area);
    printf("Perimeter is: %d\n", int_peri);
}

void Rec_AreaPeriCalc2( float, float );
void Rec_AreaPeriCalc2( float flt_w, float flt_l )
{
    // Function to compute the area and perimeter of a rectangle
    // with a width of 6.8 inches and a length of 2.3 inches
    float flt_area;
    float flt_peri;
    
    flt_area = flt_w * flt_l;
    flt_peri = ( flt_w * (float)2 ) + ( flt_l * (float)2 );
    
    printf("Area is: %.2f\n", flt_area);
    printf("Perimeter is: %.2f\n", flt_peri);
}

void main()
{
    int int_x = 3;
    int int_y = 5;
    Rec_AreaPeriCalc1(int_x, int_y);
    
    float flt_x = 6.8;
    float flt_y = 2.3;
    Rec_AreaPeriCalc2(flt_x, flt_y);
    
}
