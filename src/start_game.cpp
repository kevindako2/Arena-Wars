//
// Created by DAKO Kenneth on 22/08/2025.
//

#include "../my.hpp"

char print_menu(char choix) {
    printf("Bienvenue dans Arena-wars !!!!\n");
    printf("Suivez les instructions donner dans le menu\n");
    printf("\n");
    printf("(:======    Menu    ======:)\n");
    printf("| a - Continuer de jouer   |\n");
    printf("| h - Aide                 |\n");
    printf("| q - Quitter              |\n");
    printf("|__________________________|\n");
    printf("\n");
    printf("Choisissez une option : ");
    scanf(" %c", &choix);

    return choix;
}

int start_game() {
    char choix = 'a';
    char le_choix = print_menu(choix);
    //int c = 0;
    //char opt = 's';

    switch (le_choix) {
        case 'a':
            printf("Le jeu va pourvoir commencer \n");
            game_manager();
            return 0;
        case 'q':
            printf("\n");
            printf("Merci d'avoir jouer a notre jeu !!! :)\n");
            return 0;
        default:
            printf("option par défaut \n");
    }
    return 0;
}