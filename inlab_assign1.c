/******************************************************************************

HANDS-ON LAB #3: Functions
In-lab Assignment #1

*******************************************************************************/
#include <stdio.h>

void charcheck( char );
void charcheck( char chr_arg )
{
    // Function to check if a character is alphanumeric,
    // that is lower case, upper case or numeric
    // *Alphanumeric:
    //    A character that is either a letter or a number ( isalnum() )
    
    if ( ( 'a' <= chr_arg ) &&
         ( chr_arg <= 'z' ) ) {
        // Lower Case Alphanumeric
        printf("Character is lower case alphanumeric.\n");
    } else if ( ( 'A' <= chr_arg ) &&
         ( chr_arg <= 'Z' ) ) {
        // Upper Case Alphanumeric
        printf("Character is upper case alphanumeric.\n");
    } else if ( ( '0' <= chr_arg ) &&
         ( chr_arg <= '9' ) ) {
        // Numeric
        printf("Character is numeric.\n");
    } else {
        // Not Alphanumeric
        printf("Character is not alphanumeric.\n");
    }
}


void main()
{
    char chr_test;
    
    chr_test = 'a';
    charcheck(chr_test);
    
    chr_test = 'B';
    charcheck(chr_test);
    
    chr_test = '2';
    charcheck(chr_test);
    
    chr_test = '#';
    charcheck(chr_test);
    
}
