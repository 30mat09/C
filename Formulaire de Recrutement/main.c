#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int tempsdejeu, i=0;
    char motivation[100];
    char faction[100];
    char nomfaction[100];
    char dc[100];
    char home[100];
    char fin;
    FILE* fichier=NULL;
    system("color 0f");
    printf("Bievenue sur le Formulaire de Recrutement!\nFinis le questionnaire, ensuite, un fichier se trouvera sur le meme repertoire que l'application (oui je sais je ne suis pas bien clair), passe le nous sur discord.\nDiscord de la faction : https://discord.gg/68EwNDu\n");
    system("pause > nul");
    system("cls");
    printf("Depuis combien de temps joues-tu sur Sunaria (en mois) : ");
    scanf("%d", &tempsdejeu);
    printf("\nAs-tu des doubles-comptes (oui ou non !pas de majuscule!) : ");
    scanf("%s", dc);
    while (i < 1)
    {
        printf("\nAs-tu des homes ou des bp (oui ou non !pas de majuscule!) : ");
        scanf("%s", home);
        if(strcmp(home,"oui")==0)
        {
            printf("Si tu es accepte dans la faction, nous te demandrons un screenshot de tes homes (/home) avec leur coordonnee et une photo du home (en f3), le tout sur un fichier word");
            break;
        }
        else if(strcmp(home,"non")==0)
        {
            printf("Nous te demandrons un screen de tes homes (/home");
            break;
        }
        else
        {
            printf("Merci de respecter la casse!");
        }
    }
    while (i < 1)
    {
        printf("\nAs tu deja eu une faction (oui ou non !pas de majuscule!) : ");
        scanf("%s", faction);
        if(strcmp(faction,"oui")==0)
        {
            printf("Laquelle : ");
            scanf("%s", nomfaction);
            break;
        }
        else if(strcmp(faction,"non")==0)
        {
            break;
        }
        else
        {
            printf("Merci de respecter la casse!");
        }
    }
    printf("Donne nous tes motivations, tes qualites, tes defauts : ");
    scanf("%s", motivation);
    system("cls");
    printf("Merci pour ta participation, n'oublies pas de nous envoyer ta candidature sur discord pour qu'elle puisse etre analyser.\n");
    printf("Si tu es accepte, nous te demanderons le fichier word (delai de 2 jours) et si tout est accepter tu pourras nous rejoindre.\n");
    printf("Si nous pouvons te faire confiance, tu auras l'acces au hfhome 1 mois apres ton recrutement\n\n");
    system("pause");
    system("cls");
    fichier=fopen("Candidature.txt", "w");
    if (fichier != NULL)
    {
        fprintf(fichier,"Est sur le serveur depuis %d mois\nDC : %s\nHome : %s\nFaction : %s\nNom de faction : %s\nMotivation, qualite, default : %s", tempsdejeu,dc,home,faction,nomfaction,motivation);
        fclose(fichier);
    }
    else
    {
        printf("\nUne erreur est survenuen, merci de contacter l'administration...");
    }
    return 0;
}
