class Solution {
public:
    bool isAnagram(string s, string t) {
        // First check the length, if it is an anagram they will have the same length
        if(s.size() != t.size()){
            return false;
        }
        unordered_map <char, int> letters;
        for(char letter : s){
            letters[letter] +=1;
        }
        //Revisar segunda palabra 
        for(char letter : t){
            if(letters.find(letter) == letters.end()){
                //Si la clave no existe
                return false;
            }
            else{
                letters[letter] -= 1;
            }
        }
        // Barrido general para asegurar que todas están en 0
        for(const auto& letter : letters){
            if(letter.second != 0){
                return false;
            }
        }
        return true;
        
    }
};
