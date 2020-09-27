#ifndef TACHE_H_INCLUDED
#define TACHE_H_INCLUDED

void tache()
{
    system("cls");
    int choix;
    printf("Bienvenue sur le gestionnaire des taches!\n1- Liste des taches\n2- Arreter une tache\n99- Quitter\n");
    scanf("%d", &choix);
    switch(choix)
    {
        case 1:
            system("cls");
            system("tasklist");
            printf("\n\n");
            system("pause");
            break;
        case 2:
            char tache[100];
            char nomtache[100];
            system("cls");
            printf("Tache a arreter : ");
            scanf("%s", nomtache);
            snprintf(tache,100,"taskkill -f -im %s", nomtache);
            system(tache);
        case 99:
            break;
    }
}

#endif // TACHE_H_INCLUDED
