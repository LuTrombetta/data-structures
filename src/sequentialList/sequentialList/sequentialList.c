#include "sequentialList.h"

// Management functions
extern void initialize(SequentialList *sl, unsigned size)
{   
    sl->list = (Data*) malloc(sizeof(Data) * size);
}

extern void reinitialize(SequentialList *sl, unsigned size)
{   
    finalize(sl);
    initialize(sl, size);
}

extern void finalize(SequentialList *sl)
{   
    free(sl->list);
}


// Auxiliary functions


