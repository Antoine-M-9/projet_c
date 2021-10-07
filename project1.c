#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    // tableaux de différentes catégories
    string filmCategorieEnfant[3] = {"Kirikou", "the Iron giant", "Robots"};
    string filmCategorieAdos[3] = {"Avatar", "Terminator", "The Giver"};
    string filmCategorieAdult[3] = {"The Imitation Game", "Passengers", "Ex Machina"};

    // Question avec if / else if / else
    string ouiNon = get_string("Bonjour vous souhaitez voir des films incroyable ? \n");
    {
        // Si la réponse est = à oui où Oui alors le code continue dans ce chemin sinon il passe à l'autre condition
        if (strcmp(ouiNon, "oui") == 0 || strcmp(ouiNon, "Oui") == 0)
        {
            int age = get_int("Très bien, vueillez saisir votre age ci-dessous \n");
            if (age > 0 && age < 11)
            {
                ouiNon = get_string("Très bien parmis ma sélection souhaitez vous regarder %s . \n", filmCategorieEnfant[0]);
                if (strcmp(ouiNon, "oui") == 0 || strcmp(ouiNon, "Oui") == 0)
                {
                    printf("J'espère que vous apprecierez ce film, bon visionnage. \n");
                    return 1;
                }
                else if (strcmp(ouiNon, "non") == 0 || strcmp(ouiNon, "Non") == 0)
                {
                    ouiNon = get_string("D'accord et si je vous proposais %s . \n", filmCategorieEnfant[1]);
                    if (strcmp(ouiNon, "oui") == 0 || strcmp(ouiNon, "Oui") == 0)
                    {
                        printf("J'espère que vous apprecierez ce film, bon visionnage. \n");
                        return 1;
                    }
                    else if (strcmp(ouiNon, "non") == 0 || strcmp(ouiNon, "Non") == 0)
                    {
                        ouiNon = get_string("La dernière pépite que je peux vous proposer est %s, cela vous convient ? . \n", filmCategorieEnfant[2]);
                        if (strcmp(ouiNon, "oui") == 0 || strcmp(ouiNon, "Oui") == 0)
                        {
                            printf("J'espère que vous apprecierez ce film, bon visionnage. \n");
                            return 1;
                        }
                        else
                        {
                            printf("C'est dommage ce sont de supers films \n");
                            return 1;
                        }
                    }
                }
            }
            else if (age >= 11 && age <= 17)
            {
                ouiNon = get_string("Parmis votre bel âge laisser moi vous proposer %s . \n", filmCategorieAdos[0]);
                if (strcmp(ouiNon, "oui") == 0 || strcmp(ouiNon, "Oui") == 0)
                {
                    printf("J'espère que vous apprecierez ce film, bon visionnage. \n");
                    return 1;
                }
                else if (strcmp(ouiNon, "non") == 0 || strcmp(ouiNon, "Non") == 0)
                {
                    ouiNon = get_string("D'accord et si je vous proposais %s . \n", filmCategorieAdos[1]);
                    if (strcmp(ouiNon, "oui") == 0 || strcmp(ouiNon, "Oui") == 0)
                    {
                        printf("J'espère que vous apprecierez ce film, bon visionnage. \n");
                        return 1;
                    }
                    else if (strcmp(ouiNon, "non") == 0 || strcmp(ouiNon, "Non") == 0)
                    {
                        ouiNon = get_string("La dernière pépite que je peux vous proposer est %s, cela vous convient ? . \n", filmCategorieAdos[2]);
                        if (strcmp(ouiNon, "oui") == 0 || (strcmp(ouiNon, "Oui") == 0))
                        {
                            printf("J'espère que vous apprecierez ce film, bon visionnage. \n");
                            return 1;
                        }
                        else
                        {
                            printf("C'est dommage ce sont de supers films \n");
                            return 1;
                        }
                    }
                }
            }
            else if (age >= 18 && age < 130)
            {
                ouiNon = get_string("Votre intelligence intellectuel me laisse vous proposer %s . \n", filmCategorieAdult[0]);
                if (strcmp(ouiNon, "oui") == 0 || strcmp(ouiNon, "Oui") == 0)
                {
                    printf("J'espère que vous apprecierez ce film, bon visionnage. \n");
                    return 1;
                }
                else if (strcmp(ouiNon, "non") == 0 || strcmp(ouiNon, "Non") == 0)
                {
                    ouiNon = get_string("D'accord et si je vous proposais %s . \n", filmCategorieAdult[1]);
                    if (strcmp(ouiNon, "oui") == 0 || strcmp(ouiNon, "Oui") == 0)
                    {
                        printf("J'espère que vous apprecierez ce film, bon visionnage. \n");
                        return 1;
                    }
                    else if (strcmp(ouiNon, "non") == 0 || strcmp(ouiNon, "Non") == 0)
                    {
                        ouiNon = get_string("La dernière pépite que je peux vous proposer est %s, cela vous convient ? . \n", filmCategorieAdult[2]);
                        if (strcmp(ouiNon, "oui") == 0 || strcmp(ouiNon, "Oui") == 0)
                        {
                            printf("J'espère que vous apprecierez ce film, bon visionnage. \n");
                            return 1;
                        }
                        else if (strcmp(ouiNon, "non") == 0 || strcmp(ouiNon, "Non") == 0)
                        {
                            ouiNon = get_string("Je peux vous proposer la cathégorie Ados où Enfant, que souhaitez vous ? \n");
                            if (strcmp(ouiNon, "ados") == 0 || strcmp(ouiNon, "Ados") == 0)
                            {
                                ouiNon = get_string("Ma sélection prenium pour les Ados est %s . \n", filmCategorieAdos[0]);
                                if (strcmp(ouiNon, "oui") == 0 || strcmp(ouiNon, "Oui") == 0)
                                {
                                    printf("J'espère que vous apprecierez ce film, bon visionnage. \n");
                                    return 1;
                                }
                                else if (strcmp(ouiNon, "non") == 0 || strcmp(ouiNon, "Non") == 0)
                                {
                                    ouiNon = get_string("D'accord et si je vous proposais %s . \n", filmCategorieAdos[1]);
                                    if (strcmp(ouiNon, "oui") == 0 || strcmp(ouiNon, "Oui") == 0)
                                    {
                                        printf("J'espère que vous apprecierez ce film, bon visionnage. \n");
                                        return 1;
                                    }
                                    else if (strcmp(ouiNon, "non") == 0 || strcmp(ouiNon, "Non") == 0)
                                    {
                                        ouiNon = get_string("La dernière pépite que je peux vous proposer est %s, cela vous convient ? . \n", filmCategorieAdos[2]);
                                        if (strcmp(ouiNon, "oui") == 0 || (strcmp(ouiNon, "Oui") == 0))
                                        {
                                            printf("J'espère que vous apprecierez ce film, bon visionnage. \n");
                                            return 1;
                                        }
                                        else if (strcmp(ouiNon, "non") == 0 || strcmp(ouiNon, "Non") == 0)
                                        {
                                            printf("Vous avez soit de mauvais goûts, soit vous les avez déjà tous regardés. \n");
                                            return 1;
                                        }
                                    }
                                }
                            }
                            else if (strcmp(ouiNon, "enfant") == 0 || strcmp(ouiNon, "Enfant") == 0)
                            {
                                ouiNon = get_string("Parmis les films que je peux proposer aux enfant il y a %s . \n", filmCategorieEnfant[0]);
                                if (strcmp(ouiNon, "oui") == 0 || strcmp(ouiNon, "Oui") == 0)
                                {
                                    printf("J'espère que vous apprecierez ce film, bon visionnage. \n");
                                    return 1;
                                }
                                else if (strcmp(ouiNon, "non") == 0 || strcmp(ouiNon, "Non") == 0)
                                {
                                    ouiNon = get_string("D'accord et si je vous proposais %s . \n", filmCategorieEnfant[1]);
                                    if (strcmp(ouiNon, "oui") == 0 || strcmp(ouiNon, "Oui") == 0)
                                    {
                                        printf("J'espère que vous apprecierez ce film, bon visionnage. \n");
                                        return 1;
                                    }
                                    else if (strcmp(ouiNon, "non") == 0 || strcmp(ouiNon, "Non") == 0)
                                    {
                                        ouiNon = get_string("La dernière pépite que je peux vous proposer est %s, cela vous convient ? . \n", filmCategorieEnfant[2]);
                                        if (strcmp(ouiNon, "oui") == 0 || (strcmp(ouiNon, "Oui") == 0))
                                        {
                                            printf("J'espère que vous apprecierez ce film, bon visionnage. \n");
                                            return 1;
                                        }
                                        else if (strcmp(ouiNon, "non") == 0 || strcmp(ouiNon, "Non") == 0)
                                        {
                                            printf("Vous avez soit de mauvais goûts, soit vous les avez déjà tous regardés. \n");
                                            return 1;
                                        }
                                    }
                                    else
                                    {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                printf("Vous avez surement fait une erreur, veuillez recommencer. \n");
                return 1;
            }
        }
        else
        {
            return 1;
        }
    }
}