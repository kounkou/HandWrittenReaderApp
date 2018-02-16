///////////////////////////////////////////////
///
/// FILE         test.c
///
/// DESCRIPTION  test.c is the definition of the test
///              It represents the unitary micro_brain
///              element. test has a linked list structure
///
/// HISTORY      creation 2018-02-16
///
///////////////////////////////////////////////

#include "node.h"
#include <stdlib.h>
#include <stdio.h>

///////////////////////////////////////////////
void run_testActionFunction()
{
   printf("===== RUNNING Test run_testActionFunction\n");

   // creation of a neuron head
   struct Node *n   = (struct Node *) malloc(sizeof(struct Node));
   n->nodeId        = 'a';
   n->nexts         = (struct Node *) malloc(sizeof(struct Node));
   n->activationPtr = activation;

   float i;
   for (i = 0.0; i < 1.0; i += 0.1) {
      // calling the neuron activation function
      float ou = (*(n->activationPtr))(i);

      printf("activation : %1f\n", ou);

      if (ou > 1.00) {
	 printf("===== FAIL\n");
	 printf("     Excepted a value <= 1.00, got %1f\n", ou);
	 exit(1);
      }
   }
   printf("===== PASS\n");

   // destroying the neuron
   free(n->nexts);
   free(n);
}

///////////////////////////////////////////////
int main(int argc, char *argv[])
{
   run_testActionFunction();

   return 0;
}
