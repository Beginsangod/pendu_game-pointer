#include <iostream>

int compte_mots(const char* phrase){
    int n = 0, i = 0;
    while (*(phrase + i) != '\0')
    {
        if (*(phrase + i) == ' ' && *(phrase + i + 1) != ' ')
        {
            n++;
        }
        i++;
    }
    return n + 1;
}

int main(int argc, char** argv){
    char* sentence = new char[255];
    int n;
    std::cout<<"Entrer une phrase: ";
    std::cin.getline(sentence, 255);
    n = compte_mots(sentence);
    std::cout<<"cette phrase possede "<< n <<" mots";
    return 0;
}