#include <iostream>
#include "sum.h"

int main() {

  int n = 10;
  int sum = 0;
  for (int i=0; i<n; i++) {
	sum += i;
   }
   printf("sum : %d", sum);
}
