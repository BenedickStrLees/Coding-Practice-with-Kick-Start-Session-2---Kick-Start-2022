// Google_contesy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

string CheckSpell(const string& spell) {
   int l = spell.length();
   int c_vowel = 0;
   int first[100];
   for (int i = 0; i < l; i++) {
           if (spell[i] == 'a' || spell[i] == 'o' || spell[i] == 'e' || spell[i] == 'u' || spell[i] == 'i') {
               first[c_vowel] = i;
               c_vowel++;
           }
   }
   if (c_vowel > 4 ){
       for (int j = 0; j < c_vowel; j++) {
           for (int g = j+3; g < c_vowel; g++){
               if (spell.substr(first[j], first[j + 1] - first[j] + 1) == spell.substr(first[g], first[g + 1] - first[g] + 1)) {
                   return "Spell!";
               }
           }
       }
       }
   return "Nothing.";
}

int main() {
    int test_case_count;
    cin >> test_case_count;
    string spell;

    for (int tc = 1; tc <= test_case_count; ++tc) {
        cin >> spell;
        cout << "Case #" << tc << ": " << CheckSpell(spell) << "\n";
    }
    return 0;
}

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
