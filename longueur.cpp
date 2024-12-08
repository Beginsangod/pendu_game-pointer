#include <iostream>
int longueur(const char* chaine){
    int n = 0;
    while (*(chaine + n) != '\0')
    {
        n++;
    }
    return n;
}

int main(int argc,char** argv){
    char* word = new char[25];
    std::cout << "Entrez un mot: ";
    std::cin>> word;
    std::cout<<longueur(word);
    delete[] word;
    return 0;
}