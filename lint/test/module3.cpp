#include "test.h"

Array::Array( int low, int upp )
    {
    size = upp-low+1;
    lBound = low;
    hBound = upp;
    }
