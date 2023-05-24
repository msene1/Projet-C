#include <stdio.h>
#include <string.h>

int main()
{
    char ville[20], sexe[8], prenom[20], nom[20];
    int age, code_postale, taille;

    printf("Entrer votre Nom\n");
    scanf("%s", nom);
    printf("Entrer votre Prénom\n");
    scanf("%s", prenom);
    printf("Entrer votre Sexe (homme/femme)\n");
    scanf("%s", sexe);
    printf("Entrer votre Age\n");
    scanf("%d", &age);

    // Vérifier si le genre est correctement respecté
    if ((strcmp(sexe, "homme") == 0 && age >= 18) || (strcmp(sexe, "femme") == 0 && age >= 16))
    {
        printf("La personne s'appelle %s, %s, c'est une personne de sexe %s et elle est majeure.\n", nom, prenom, sexe);
    }
    else if ((strcmp(sexe, "homme") == 0 && age < 18) || (strcmp(sexe, "femme") == 0 && age < 16))
    {
        printf("La personne s'appelle %s, %s, c'est une personne de sexe %s et elle est mineure.\n", nom, prenom, sexe);
    }
    else
    {
        printf("Le genre spécifié n'est pas valide.\n");
    }

    return 0;
}
