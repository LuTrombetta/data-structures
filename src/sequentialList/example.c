#include "sequentialList.h"

int main(int argc, char *argv[])
{   
    SequentialList *example = (SequentialList*) malloc(sizeof(SequentialList));
    initialize(example, 10);
    
    
    reinitialize(example, 10);
    
    
    finalize(example);
    free(example);
    return 0;
}