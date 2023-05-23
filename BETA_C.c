#include <stdio.h>
int main()
{
    char ville[20], sexe[8], prenom[20], nom[20];
   int age, code_postale, taille;

    printf("Entrer votre Nom\n");
    scanf("%s", &nom);
    printf("Entrer votre Prénom\n");
    scanf("%s", &prenom);
    printf("Entrer votre Sexe\n");
    scanf("%s", &sexe);
    printf("Entrer votre Age\n");
    scanf("%d", &age);

    printf("Le personne s'appelle %s, %s c'est une personne de sexe %s a %d ans.  \n", nom, prenom, sexe, age);
    return 0;
}
