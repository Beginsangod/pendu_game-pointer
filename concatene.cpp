#include <iostream>

void concatener(char* dest, const char* source) {
    int i = 0;
    while (dest[i] != '\0') {
        i++;
    }

    int j = 0;
    while (source[j] != '\0') {
        dest[i+j] = source[j];
        j++;
    }

    dest[i+j] = '\0';
}

int main(int argc,char** argv){
    char* source = new char[25];
    char* dest = new char[50];
    std::cout<<"entrer un mot: ";
    std::cin >> dest;
    std::cout<<"entrer un mot: ";
    std::cin >> source;
    concatener(dest,source);
    std::cout << "le contenu de dest est : "<< dest;
    delete[] source;
    delete[] dest;
    return 0;
}