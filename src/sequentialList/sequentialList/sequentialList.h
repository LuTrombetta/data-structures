#ifndef _SEQUENTIAL_LIST_H_
#define _SEQUENTIAL_LIST_H_

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>


// Defining structures
typedef struct Data
{   
    // Here you can put your data
    int id;
    
} Data;

typedef struct SequentialList
{   
    Data *list;
    
} SequentialList;


// Management functions
extern void initialize(SequentialList *sl, unsigned size);
extern void reinitialize(SequentialList *sl, unsigned size);
extern void finalize(SequentialList *sl);

// Auxiliary functions



#endif