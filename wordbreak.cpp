/* @author FIRSTNAME LASTNAME
 * @filename wordbreak.c
 * @date 7/13/2020
 * @description Given a sentence without any spaces between the 
 * words, this program finds all possible ways to break up the 
 * spaceless sentence into a spaced sentence of valid dictionary words.
 */
#include <iostream>
using namespace std; 
void wordBreakUtil(string str, int size, string result); 
  
/* @brief The helper function for wordBreakUtil, which checks for 
 * the existence of a word in out dictionary.
 * @param The word which we are checking the existence of. 
 */ 
int dictionaryContains(string word) { 
    string dictionary[] = {"walk","the","dog", 
                            "cat","bat","to","and", 
                             "go","i","from","fries"}; 
    int size = sizeof(dictionary)/sizeof(dictionary[0]); 
    for (int i = 0; i < size; i++) 
        if (dictionary[i].compare(word) == 0) 
           return true; 
    return false; 
} 

/* @brief Recursive function which, given a list of words,
 * breaks up a given str into all possible combinations
 * of valid words. 
 * @param str The unbroken sentence.
 */
bool wordBreak(string str) 
{ 
    int size = str.size(); 
  
    if (size == 0)  return true; 
  
    for (int i=1; i<=size; i++) {  
        if (dictionaryContains( str.substr(0, i) ) && 
            wordBreak( str.substr(i, size-i) )) 
            return true; 
    } 
  
    return false; 
} 

int main() { 
    wordBreak("iwalkthedog")? cout <<"Yes\n": cout << "No\n"; 
    return 0; 
} 