#ifndef PREFERENCE_H_INCLUDED
#define PREFERENCE_H_INCLUDED

void preference()
{
    system("cls");
    int choix;
    printf("1- Couleur de l'interface\n\n99- Quitter\n");
    scanf("%d", &choix);
    switch(choix)
    {
        case 1:
            char chaine[100];
            char choixpolice[100];
            char choixap[100];
            system("cls");
            printf("Couleur :\n1- Noir\n2- Bleu\n3- Vert\n4- Bleu-Gris\n");
            printf("5- Rouge\n6- Violet\n7- Jaune\n8- Blanc\n9- Gris\n10- Bleu-Clair\n11- Vert-Clair\n");
            printf("12- Cyan\n13- Rouge-Clair\n14- Violet-Clair\n15- Jaune-Clair\n16- Blanc-Brillant\n");
            printf("Couleur de police : ");
            scanf("%s", choixpolice);
            printf("\nCouleur de l'arriere-plan : ");
            scanf("%s", choixap);
            snprintf(chaine,100,"color %s%s", choixap, choixpolice);
            system(chaine);
            system("pause");
    }
}

#endif // PREFERENCE_H_INCLUDED
