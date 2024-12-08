#include <iostream>

char* chercher_char(const char *chaine, char caractere) {
    while (*chaine != '\0') {
        if (*chaine == caractere) {
            return (char*)chaine;
        }
        chaine++;
    }
    return NULL;
}

int main(int argc,char** argv){
    char* word = new char[25];
    char c;
    std::cout<<"Entrer un mot: ";
    std::cin>> word;
    std::cout<<"entrer le caractere que vous chercher dans ce mot: ";
    std::cin>> c;
    std::cout<<chercher_char(word, c);
    return 0;
}