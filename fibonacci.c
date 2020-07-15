/* @author Mimi St Johns
 * @date 7/13/2020
 * @description This program recursively prints a 
 * user specified number of fibonacci numbers.
 */
#include <iostream>
#include "simpio.h"
using namespace std;

/* @brief fib Recursively returns fibonacci number up to n.   
 * @param n The number of fibonacci numbers which will be returned. 
 */
int fib (int n) { 
    if (n <= 1)  return n; 
    return fib(n - 1) + fib(n - 2); 
}
/* @brief main The call to our recursive function "fib" is made here. 
 */
int main () {
  int n = getInteger("How many fibonacci numbers would you like to print? ");
  cout << fib(n); 
  getchar(); 
  return 0; 
} 

