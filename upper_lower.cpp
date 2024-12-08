#include <iostream>

char a[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char A[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

void to_upper(char* chaine){
    while (*chaine != '\0') {
        for (int i = 0; i < 26; i++)
        {
            if (*chaine == a[i])
            {
                *chaine = A[i];
            }
        }
        chaine++;
    }
}

void to_lower(char* chaine){
    while (*chaine != '\0') {
        for (int i = 0; i < 26; i++)
        {
            if (*chaine == A[i])
            {
                *chaine = a[i];
            }
        }
        chaine++;
    }
}

int main(int argc, char** argv){
    char* word = new char[25];
    int c = 0;
    std::cout<< "Entrer un mot: ";
    std::cin>> word;
    std::cout<< "1 pour la majuscule et 0 pour la minscule: ";
    std::cin>> c;
    if (c == 1)
    {
        to_upper(word);  
    }else
    {
        to_lower(word);        
    }
    std::cout<< word;
}