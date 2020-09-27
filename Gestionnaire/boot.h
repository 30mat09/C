#ifndef BOOT_H_INCLUDED
#define BOOT_H_INCLUDED

void boot()
{
    system("cls");
    int choix;
    printf("Bienvenue sur le gestionnaire d'arret!\n1- Programmer un arret\n2- Arreter maintenant (delais de 10 secondes avant arret)\n3- Redemarrer\n4- Annuler un arret\n99- Quitter\n");
    scanf("%d", &choix);
    switch(choix)
    {
        case 1:
            char chaine[100];
            int duree;
            system("cls");
            printf("Duree avant arret systeme (en secondes) : ");
            scanf("%d", &duree);
            snprintf(chaine,100,"shutdown -s -t %d", duree);
            system(chaine);
            break;
        case 2:
            system("cls");
            printf("Arret systeme dans 10 secondes...");
            system("shutdown -s -t 10");
            break;
        case 3:
            system("cls");
            printf("Redemarrage systeme...");
            system("shutdown -r");
            break;
        case 4:
            system("cls");
            printf("Annulation...");
            system("shutdown -a");
            break;
        case 99:
            break;
    }
}

#endif // BOOT_H_INCLUDED
