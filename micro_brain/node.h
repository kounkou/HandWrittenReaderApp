///////////////////////////////////////////////
///
/// FILE         Node.h
///
/// DESCRIPTION  Node.h is the declaration of the Node
///              It represents the unitary micro_brain
///              element. Node has a linked list structure
///
/// HISTORY      creation 2018-02-16
///
///////////////////////////////////////////////

#ifndef _NODE_H_
#define _NODE_H_

extern float activation(float in);

struct Node {
   char         nodeId;
   struct Node *nexts;
   float        (*activationPtr)(float in);
};

#endif // end of _NODE_H_
