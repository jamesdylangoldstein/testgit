//
//  sizeof.c
//  CS501
//
//  Created by James Dylan Goldstein on 6/2/16.
//  Copyright © 2016 James Dylan Goldstein. All rights reserved.
//

#include <stdio.h>
#include "cs50.h"

int main(void){
    char w;
    float x;
    double y;
    int z;
    
    printf("Size of char: %i.\n", sizeof(w));
    printf("Size of float: %i.\n", sizeof(x));
    printf("Size of double: %i.\n", sizeof(y));
    printf("Size of int: %i\.n", sizeof(z));
}
