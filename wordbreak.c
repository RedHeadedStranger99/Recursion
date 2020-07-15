/* @author FIRSTNAME LASTNAME
 * @filename wordbreak.c
 * @date 7/13/2020
 * @description Given a sentence without any spaces between the 
 * words find all possible ways to break up the spaceless 
 * sentence into a spaced sentence of valid dictionary words.
 */
#include <iostream>
#include "lexicon.h"
#include "simpio.h"
using namespace std; 
void wordBreakUtil(string str, int size, string result); 
  
/* @brief The wrapper function for wordBreakUtil
 * @param str The setence to be broken up. 
 */ 
void wordBreak(string str) { 
  wordBreakUtil(str, str.size(), "");
}

/* @brief Recursive function which, given a list of words
 * breaks up the given sentence into all possible combinations
 * of valid words. 
 * @param str The unbroken sentence.
 * @param n 
 * @param result A complete sentence.
 */
void wordBreakUtil(string str, int n, string result) {
  Lexicon dictionary(words.txt);
  
  //Process all prefixes one by one
  for (int i = 1; i <= n; i++) {
      string prefix = str.substr(0, i);

      // if dictionary conatins this prefix, then
      // we check for remaining string. Otherwise
      // we ignore this prefix (there is no else for
      // this if) and try next
      if (contains(prefix)) {
      // if no more elements are there, print it
	if (i == n) {
	  // add this element to previous prefix
	  result += prefix;
	  cout << result << endl; //print result
	  return;
	}
	wordBreakUtil(str.substr(i, n-i), n-i, result + prefix + " ");
     }
}

int main() {
  wordBreak(getLine("Input a sentence to break: "));
  return 0;
}
