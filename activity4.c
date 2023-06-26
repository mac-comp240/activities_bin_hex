#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Include the header file containing the prototypes (declarations) of
// functions defined in the helper file binary_convert.c
#include "binary_convert.h"

// Declarations of functions defined below


void print_all_pos_bytes();



int main() {
    print_all_pos_bytes();

    return 0;
}


/* 
 * Loops over the unsigned integers from 0 to 255, and for each, 
 * prints the value in decimal, in hexadecimal, and in binary.
 * The binary conversion uses functions from binary_convert.h.
 * TODO: You must complete this function according to instructions
 */
void print_all_pos_bytes() {
    // Loop counter, to be turned to binary and hex
    unsigned int i;
    
    // String variable to contain binary string
    char *bin_str; 

    printf("\nUNSIGNED CHARS IN HEX AND BINARY\n\n");      // a header line

    i = 0x00;
    while (1) {  // while true
        // TODO: call conversion function to make string rep for binary
        
    	// TODO: add to this print statement to print both hex and binary
	    printf("Decimal: %hhu | Hex:  | Binary: \n", i);

    	// We need this to manage memory--remember that each memory allocation
    	// requires a matching free()!
    	free(bin_str);

        // Stops the loop
       	if (i == UCHAR_MAX)
            break;

	    i++;
    }
}

