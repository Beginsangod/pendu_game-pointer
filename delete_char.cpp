#include <iostream>

void supprime_caractere(char* chaine,char caractere){
    char* src = chaine;
    char* dest = chaine;
    bool find;
    find = false;
    while (*src != '\0') 
    { 
        if (*src != caractere) 
        { 
            *dest++ = *src; 
        } else 
        { 
            find = true; 
        } 
        src++; 
    } 
    *dest = '\0';
    if (!find)
    {
        std::cout<<"le caractere pas trouver"<<std::endl;
    }else{
        std::cout<<chaine<<std::endl;
    }
}

int main(int argc,char** argv){
    char* word = new char[25];
    char c;
    std::cout<<"Entrer un mot: ";
    std::cin>> word;
    std::cout<<"entrer le caractere que vous voulez supprimer dans ce mot: ";
    std::cin>> c;
    supprime_caractere(word, c);
    return 0;
}