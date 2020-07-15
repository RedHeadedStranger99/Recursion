/* @author FIRSTNAME LASTNAME
 * @filename copystr.c
 * @date 7/13/2020
 * @description This program recursively copys one string to another. 
 */ 
#include <bits/stdc++.h>
#indlude "simpio.h"
using namespace std; 
  
/* @brief myCopy Recursively copys one string to another.
 * @param s1 The first string to be copied.
 * @param s2 The second string to be copied. 
 */
void myCopy(char s1[], char s2[], int index = 0) { 
    // copying each character from s1 to s2 
    s2[index] = s1[index];  
  
    // if string reach to end then stop  
    if (s1[index] == '\0')   
        return; 
  
    // increase character index by one 
    myCopy(s1, s2, index + 1);  
} 
   
int main() { 
  char s1[100] = getLine("Enter string one: "); 
  char s2[100] = getLine("Enter string two: "); 
  myCopy(s1, s2); 
  cout << s2; 
  return 0; 
} 
