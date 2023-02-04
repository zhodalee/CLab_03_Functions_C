/******************************************************************************

HANDS-ON LAB #3: Functions
In-lab Assignment #3

*******************************************************************************/
#include <stdio.h>

int isLeapYear( int year );
int isLeapYear( int year )
{
    // Function that determines if a year is a leap year or not
    // and gives a different function return value for both cases.
    // return: int_isLeapYear
    //   1: leap year
    //   0: not leap year 
    int int_isLeapYear;
    
    if ( ( year % 400 ) == 0 ) {
        int_isLeapYear = 1;
    } else if ( ( year % 100 ) == 0 ) { 
        int_isLeapYear = 0;
    } else if ( ( year % 4 ) == 0 ) { 
        int_isLeapYear = 1;
    } else {
        int_isLeapYear = 0;
    }
    
    return int_isLeapYear;
}

int numberOfDays( int month, int year );
int numberOfDays( int month, int year )
{
    // Function that calculates the number of days in the month
    // of the year given
    // return: int_numberOfDays
    int int_numberOfDays;
    
    if ( month == 2 ) {
        int_numberOfDays = 28 + isLeapYear(year);
    } else if ( ( month == 4 ) ||
                ( month == 6 ) ||
                ( month == 9 ) ||
                ( month == 11 ) ) {
        int_numberOfDays = 30;
    } else {
        int_numberOfDays = 31;
    }
    
    return int_numberOfDays;
}

void main()
{
    int int_month;
    int int_year;
    int int_days;
    
    printf("Enter a month: ");
    scanf("%d", &int_month);
    
    if ( ( 1 <= int_month ) && ( int_month <= 12 ) ) {
        printf("Enter a year: ");
        scanf("%d", &int_year);
        
        int_days = numberOfDays(int_month, int_year);
        printf("month %d of %d has %d days\n", int_month, int_year, int_days);
            
    } else {
        printf("Month should be from 1 to 12.");
    }
    
    /*
    int_month = 2;
    int_year = 2000;
    int_days = numberOfDays(int_month, int_year);
    printf("month %d of %d has %d days\n", int_month, int_year, int_days);
    
    int_month = 2;
    int_year = 1900;
    int_days = numberOfDays(int_month, int_year);
    printf("month %d of %d has %d days\n", int_month, int_year, int_days);
    
    int_month = 1;
    int_year = 1950;
    int_days = numberOfDays(int_month, int_year);
    printf("month %d of %d has %d days\n", int_month, int_year, int_days);
    
    int_month = 4;
    int_year = 1950;
    int_days = numberOfDays(int_month, int_year);
    printf("month %d of %d has %d days\n", int_month, int_year, int_days);
    */
    
    
}
