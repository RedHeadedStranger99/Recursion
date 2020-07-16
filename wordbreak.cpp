/* @author FIRSTNAME LASTNAME
 * @filename wordbreak.c
 * @date 7/13/2020
 * @description Given a sentence without any spaces between the 
 * words, this program finds all possible ways to break up the 
 * spaceless sentence into a spaced sentence of valid dictionary words.
 */
#include <iostream>
#include "lexicon.h"
#include "simpio.h"
using namespace std; 
void wordBreakUtil(string str, int size, string result); 
  
/* @brief The wrapper function for wordBreakUtil
 * @param str The string which is to be broken up. 
 */ 
void wordBreak(string str) { 
  wordBreakUtil(str, str.size(), "");
}

/* @brief Recursive function which, given a list of words,
 * breaks up a given str into all possible combinations
 * of valid words. 
 * @param str The unbroken sentence.
 * @param n The remaining length of our unbroken string. 
 * @param result One of the results of breaking apart str. 
 */
void wordBreakUtil(string str, int n, string result) {
  Lexicon dictionary(words.txt);
  
  // Process each substring. 
  for (int i = 1; i <= n; i++) {
      string prefix = str.substr(0, i);

      // If this is a valid word, add it to our potential sentence.
      if (contains(prefix)) {
      // If no elements remain, print the sentence. 
      	if (i == n) {
	// Add the current element to previous word. 
		result += prefix;
		cout << result << endl;
		return;
	}
	// Otherwise, continue check the sentence for valid words. 
	wordBreakUtil(str.substr(i, n-i), n-i, result + prefix + " ");
     }
}

int main() {
  wordBreak(getLine("Input a sentence to break: "));
  return 0;
}
