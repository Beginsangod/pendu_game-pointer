#include <iostream>
#include <stdlib.h>

void draw_pendu(int e);
void verify_char(const char* word, char* dest, char c, int &erreur);
int longueur(const char* chaine);
char to_upper(char c);

int main(int argc, char** argv) {
    const char* word = "R E U S S I R";
    char dest[] = "_ _ _ _ _ _ _";
    char c;
    int e = 0;
    bool victory = false;

    while (e < 6 && !victory) {  // Correction de la condition de jeu
        draw_pendu(e);
        std::cout << dest << std::endl;
        std::cout << "entrer une lettre: ";
        std::cin >> c;
        
        // Appeler la fonction de vérification du caractère
        verify_char(word, dest, c, e);

        // Vérifier si le mot est complet
        victory = true;
        for (int i = 0; i < longueur(dest); i++) {
            if (dest[i] == '_') {
                victory = false;
                break;
            }
        }

        system("CLS");  // Effacer l'écran
    }

    if (!victory) {
        std::cout << "perdu (-_-)";  // Afficher la défaite
    } else {
        std::cout << "congratulation (*~*) !!";  // Afficher la victoire
    }

    return 0;
}

void draw_pendu(int e) {
    switch (e) {
        case 0:
            std::cout << " -----\n" 
                      << " |   |\n"
                      << " |\n"
                      << " |\n"
                      << " |\n"
                      << " |\n"
                      << "=========\n"; 
            break;
        case 1:
            std::cout << " -----\n" 
                      << " |   |\n" 
                      << " |   O\n" 
                      << " |\n" 
                      << " |\n" 
                      << " |\n"
                      << "=========\n"; 
            break;
        case 2:
            std::cout << " -----\n" 
                      << " |   |\n" 
                      << " |   O\n" 
                      << " |   |\n" 
                      << " |\n" 
                      << " |\n"
                      << "=========\n"; 
            break;
        case 3:
            std::cout << " -----\n" 
                      << " |   |\n" 
                      << " |   O\n" 
                      << " |  /|\n" 
                      << " |\n" 
                      << " |\n"
                      << "=========\n"; 
            break;
        case 4:
            std::cout << " -----\n" 
                      << " |   |\n" 
                      << " |   O\n" 
                      << " |  /|\\ \n" 
                      << " |\n" 
                      << " |\n"
                      << "=========\n"; 
            break;
        case 5:
            std::cout << " -----\n" 
                      << " |   |\n" 
                      << " |   O\n" 
                      << " |  /|\\\n" 
                      << " |  / \n" 
                      << " |\n"
                      << "=========\n"; 
            break;
        case 6:
            std::cout << " -----\n" 
                      << " |   |\n" 
                      << " |   O\n" 
                      << " |  /|\\n" 
                      << " |  / \\\n" 
                      << " |\n"
                      << "=========\n"; 
            break;
    }
}

int longueur(const char* chaine) {
    int n = 0;
    while (*(chaine + n) != '\0') {
        n++;
    }
    return n;
}

char to_upper(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 'a' + 'A';
    }
    return c;
}

void verify_char(const char* word, char* dest, char c, int &erreur) {
    int l = longueur(word);
    bool found = false; 
    for (int i = 0; i < l; i++) {
        if (to_upper(*(word + i)) == to_upper(c)) {
            dest[i] = to_upper(c);  
            found = true;
        }
    }
    if (!found) {
        erreur++;  
    }
}
