#include <iostream>

int longueur(const char* chaine){
    int n = 0;
    while (*(chaine + n) != '\0')
    {
        n++;
    }
    return n;
}

void inverse(char* chaine){
    int l1 = longueur(chaine);
    char* sdrow = new char[l1 + 1];
    for (int i = 0; i < l1; i++) {
        sdrow[i] = chaine[l1 - 1 - i];
    }
    sdrow[l1] = '\0'; 
    std::cout << "Mot inverse: " << sdrow << std::endl;
}

int main(int argc, char** argv){
    char* word = new char[25];
    std::cout<< "Entrer un mot: ";
    std::cin>> word;
    inverse(word);
    return 0;
}