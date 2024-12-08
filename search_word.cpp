#include <iostream>

int longueur(const char* chaine){
    int n = 0;
    while (*(chaine + n) != '\0')
    {
        n++;
    }
    return n;
}

char to_lower(char c){
    char a[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char A[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char low;
    for (int i = 0; i < 26; i++)
    {
        if (c == A[i])
        {
            low = a[i];
        }
        else
        {
           low = c; 
        }
    }
    return low;
}

char* cherche_mot(const char *phrase, const char *mot){
    int j = 0, len_mot = longueur(mot);
    while (*phrase != '\0') {
        while (to_lower(*(phrase + j)) == to_lower(mot[j]) && j < len_mot) {
            j++;
        }
        if (j == len_mot) {
            return (char*)phrase;
        }
        phrase++;
        j = 0;
    }
    return NULL;
}

int main(int argc,char** argv){
    char* word = new char[25];
    char* sentence = new char[255];
    std::cout<<"Entrer une phrase: ";
    std::cin.getline(sentence, 255);
    std::cout<<"entrer le mot que vous chercher dans cette phrase: ";
    std::cin>> word;
    sentence = cherche_mot(sentence, word);
    std::cout<<sentence;
    return 0;
}