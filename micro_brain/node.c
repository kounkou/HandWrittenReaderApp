///////////////////////////////////////////////
///
/// FILE         Node.c
///
/// DESCRIPTION  Node.c is the definition of the Node
///              It represents the unitary micro_brain
///              element. Node has a linked list structure
///
/// HISTORY      creation 2018-02-16
///
///////////////////////////////////////////////

#include "node.h"
#include <math.h>

///////////////////////////////////////////////
float activation(float in)
{
   // this function hold the activation
   // function that is the sigmoid
   return (float)(1 / (1 + exp((double)(-1 * in))));
}
