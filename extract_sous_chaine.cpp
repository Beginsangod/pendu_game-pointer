#include <iostream>

void sous_chaine(const char* source, char* dest, int debut, int longueur){
    
    for (int i = 0; i < longueur; i++)
    {
        dest[i] = source[debut - 1 + i];
    } 
    dest[longueur]='\0';
    std::cout<<"votre extrait: "<< dest;
}

int main(int argc, char** argv){
    int debut,longueur;
    char* phrase = new char[255];
    char* extrait = new char[longueur];
    std::cout<<"entrer une phrase: ";
    std::cin.getline(phrase,255);
    std::cout<<"donner l'indice ou vous voulez que commence l'extrait: ";
    std::cin>>debut;
    std::cout<<"donne la longueur de l'extrait: ";
    std::cin>>longueur;
    sous_chaine(phrase,extrait,debut,longueur);
    return 0; 
}