#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include "boot.h"
#include "login.h"
#include "tache.h"
#include "preference.h"

int login();
void boot();
void tache();
void preference();

int main(int argc, char *argv[])
{
    int verification;
    int choix;
    char nom_utilisateur[50];
    char motdepasse[50];

    system("color 0f");
    system("echo off");
    system("cls");
    printf("Nom d'utilisateur : ");
    scanf("%s", nom_utilisateur);
    printf("\nMot de passe : ");
    scanf("%s", motdepasse);
    verification=login(nom_utilisateur,motdepasse);
    if(verification==0)
    {
        printf("\nRefuse...");
        return 0;
    }
    else if(verification==1)
    {
        system("cls");
        printf("Autorise...\n");
        system("pause");
        system("cls");
        for(int i=0;i<3;i+=1)
        {
            printf("Chargement.");
            Sleep(500);
            system("cls");
            printf("Chargement..");
            Sleep(500);
            system("cls");
            printf("Chargement...");
            Sleep(500);
            system("cls");
        }
        for(int i=0;i<1;i+=0)
        {
            system("cls");
            printf("1- Extinction, extinction programee et redemarrage\n2- Tache\n\n98-Preferences\n99- Quitter\n");
            scanf("%d", &choix);
            switch(choix)
            {
                case 1:
                    boot();
                    break;
                case 2:
                    tache();
                    break;
                case 98:
                    preference();
                    break;
                case 99:
                    return 0;
                default:
                    printf("\nMerci de faire un choix, si vous souhaitez quitte, composez 99\n");
            }
        }
    }
}
