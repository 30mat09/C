#ifndef LOGIN_H_INCLUDED
#define LOGIN_H_INCLUDED

int login(char nom_utilisateur[],char motdepasse[])
{
    int verification;
    if(strcmp(nom_utilisateur,"Mathieu")==0)
    {
        verification=1;
    }
    else
    {
        return verification=0;
    }
    if(strcmp(motdepasse,"0000")==0)
    {
        return verification=1;
    }
    else
    {
        return verification=0;
    }
}

#endif // LOGIN_H_INCLUDED
