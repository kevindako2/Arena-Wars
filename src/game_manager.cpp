//
// Created by DAKO Kenneth on 22/08/2025.
//
#include "../my.hpp"

/*
 je crois que c'est quelque part ici que tu va faire la fonction qui génère la map
    en tt cas cette fonction doit etre appeler uniquement quand le joeur écide de jouer
    ensuite quand la map est générer et que le jouer est dedans tu peux appeler
    la fonction la qui va lui permettre de lancer son dé pour se déplacer etc
*/
void game_manager() {
    printf("Appuyez sur Entrée pour lancer le dé...\n");
    getch(); // Attend une touche (Enter)
    int resultat = my_roll();
    printf("Résultat du dé : %d\n", resultat);
}