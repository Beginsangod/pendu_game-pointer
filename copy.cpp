#include <iostream>

void copy(char* dest, const char* source){
    int i = 0;
    while (*(source + i) != '\0')
    {
        *(dest + i) = *(source + i);
        i++;
    }
    *(dest + i) = '\0';
}

int main(int argc,char** argv){
    char* word = new char[25];
    char* twin = new char[25];
    std::cout<<"Entrer un mot";
    std::cin>>word;
    copy(twin, word);
    std::cout<<"le mot est: "<< word <<" sa copie: "<< twin;
    delete[] word;
    delete[] twin;
    return 0;
}
