#include "func.h"
_Bool isInArea (double x, double y){
    if ((x >= 0 && y <= 0) && (x <= 0 && y >= 0))
    { 
         return 1;
    }
    return 0;
}