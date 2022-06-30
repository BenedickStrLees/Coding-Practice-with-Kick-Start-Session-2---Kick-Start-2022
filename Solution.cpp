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