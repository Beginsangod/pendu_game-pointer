#include <iostream>

int longueur(const char* chaine){
    int n = 0;
    while (*(chaine + n) != '\0')
    {
        n++;
    }
    return n;
}

int compare(const char* chaine1,const char* chaine2){
    int n;
    if (longueur(chaine1) == longueur(chaine2))
    {
        return 0;
    }
    else if (longueur(chaine1) > longueur(chaine2))
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main(int argc, char** argv){
    char* word1 = new char[25];
    char* word2 = new char[25];
    std::cout << "Entrez un mot: ";
    std::cin>> word1;
    std::cout << "Entrez un mot: ";
    std::cin>> word2;
    
    if (compare(word1 ,word2) == 0)
    {
        std::cout << "les deux mots sont égaux";
    }else if (compare(word1 ,word2) == 1)
    {
        std::cout<< word1 << " est plus grand que "<< word2;
    }else
    {
        std::cout<< word2 << " est plus grand que "<< word1;
    }
    delete[] word1;
    delete[] word2;
    return 0;   
}