#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <dos.h>

/* Algorithme projet : calculator.exe */


int main(int argc, char *argv[])
{
    int choix = 0;
    const char nomUtilisateur[50];
    printf("ENTREZ VOTRE PRENOM (remplacer les espaces par des '_') : \n");
    printf("\n\n :>> ");
    scanf("%s", &nomUtilisateur);

    do
    {
        system("title CALCULATOR (4.0)");

        system("cls");
        system("color 0f");

        printf("BONJOUR %s !\n", &nomUtilisateur);
        printf("                                   …ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕª             MS-DOS [version 3.5]\n", nomUtilisateur);
        printf("                                   ∫   CALCULATOR 4.0   ∫");
        system(" echo              %DATE%");
        printf("                                   »ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕº");
        system(" echo              %TIME%");
        printf(" Welcome to calculator 4.0\n");
        printf(" Fr [version 1.99.07.94.017.071.46]\n");
        printf(" seb enterprises 1999 - all rights reserved©\n");
        printf(" Microsoft Windows [version 10.0.10586]\n");
        printf("(c) 2015 Microsoft Corporation. Tous droits reserves\n\n");
        printf("                                       …ÕÕÕÕÕÕÕÕÕÕÕÕª\n");
        printf("                                       ∫ == MENU == ∫\n");
        printf("                …ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕ»ÕÕÕÕÕÕÕÕÕÕÕÕºÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕª\n");
        printf("                ∫ [1] = ADDITION         [9] = VARIATION    [17] = GAMES     ∫\n");
        printf("                ∫ [2] = SOUSTRACTION    [10] = PERCENTAGE   [18] = GEOMETRY  ∫\n");
        printf("                ∫ [3] = MULTIPLICATION  [11] = AIRE         [19] = TABLES    ∫\n");
        printf("                ∫ [4] = DIVISION        [12] = DERIVEE      [20] = SUITES    ∫\n");
        printf("                ∫ [5] = CARRE NOMBRE    [13] = STATISTICS   [21] = INFOS     ∫\n");
        printf("                ∫ [6] = DELTA           [14] = I.M.C                         ∫\n");
        printf("                ∫ [7] = pAuB            [15] = T.V.A                         ∫\n");
        printf("                ∫ [8] = pAnB            [16] = CONVERTER                     ∫\n");
        printf("                »ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕº\n\n\n");

        printf("Que souhaitez vous realiser %s ?  ", &nomUtilisateur);
        scanf("%d", &choix);

        if (choix == 1)
        {
            system("cls");

            float n, sum = 0, c, value;

            printf("Entrer le nombre de chiffres a additionner :");
            scanf("%f", &n);
            printf("\n\n");
            printf("Entrer les %f nombres :", n);
            printf("\n\n");
            for (c = 1; c <= n; c++)
            {
                scanf("%f", &value);
                sum = sum + value;
            }

            printf("Somme des nombres = %f\n\n", sum);

            printf("Process returned 0(0x0)   execution time : ?????\n");
            printf("Press any key to continue.");
            system("pause > nul");

        }

        if (choix == 2)
        {
            system("cls");

            float n, sum = 0, c, value;

            printf("Entrer le nombre de chiffres a soustraire :");
            scanf("%f", &n);
            printf("\n\n");
            printf("Entrer les %f nombres :", n);
            printf("\n\n");
            for (c = 1; c <= n; c++)
            {
                scanf("%f", &value);
                sum = sum - value;
            }

            printf("Somme des nombres = %f\n\n", sum);


            printf("Process returned 0(0x0)   execution time : ?????\n");
            printf("Press any key to continue.");
            system("pause > nul");

        }

        if (choix == 3)
        {
            system("cls");

            float NbMulti1 = 0;
            float NbMulti2 = 0;
            float NbMultiRes = 0;

            printf("\n");
            printf("MULTIPLIER 2.8\n\n");

            printf("Entrer le premier nombre : ");
            scanf("%f", &NbMulti1);
            printf("\n");
            printf("Entrer le deuxeme nombre : ");
            scanf("%f", &NbMulti2);

            NbMultiRes = NbMulti1 * NbMulti2;
            printf("\n\n");
            printf("%f * %f = %f\n\n", NbMulti1, NbMulti2, NbMultiRes);



            printf("Process returned 0(0x0)   execution time : ?????\n");
            printf("Press any key to continue.");
            system("pause > nul");
        }

        if (choix == 4)
        {
            system("cls");

            float NbDivi1 = 0;
            float NbDivi2 = 0;
            float NbDiviRes = 0;

            printf("\n");
            printf("DIVIDER 2.8\n\n");

            printf("Entrer le premier nombre : ");
            scanf("%f", &NbDivi1);
            printf("\n");
            printf("Entrer le second nombre : ");
            scanf("%f", &NbDivi2);
            printf("\n");

            NbDiviRes = NbDivi1 / NbDivi2;

            printf("\n\n");

            printf("%f / %f = %f\n", NbDivi1, NbDivi2, NbDiviRes);


            printf("Process returned 0(0x0)   execution time : ?????\n");
            printf("Press any key to continue.");
            system("pause > nul");

        }

        if (choix == 5)
        {
            system ("cls");

            printf("\n");
            printf("CARRE 2.7\n\n");

            float Carre = 0;
            float ResCarre = 0;

            printf("Entrer le nombre a mettre au carre : ");
            scanf("%f", &Carre);

            ResCarre = Carre * Carre;

            printf("\n\n");

            printf("%f ^2 = %f\n", Carre, ResCarre);

            printf("\n\n");


            printf("Process returned 0(0x0)   execution time : ?????\n");
            printf("Press any key to continue.");
            system ("pause > nul");
        }

        if (choix == 6)
        {
            system("cls");

            printf("\n");
            printf("DELTA CALCULATOR 2.7\n\n");

            float DeltaA = 0;
            float DeltaB = 0;
            float DeltaC = 0;
            float resA = 0;
            float resB = 0;
            float resC = 0;
            float resD = 0;
            float quatre = 4;

            printf("Entrer a : ");
            scanf("%f", &DeltaA);
            printf("\n");
            printf("Entrer b : ");
            scanf("%f", &DeltaB);
            printf("\n");
            printf("Entrer c : ");
            scanf("%f", &DeltaC);
            printf("\n");
            printf("\n");


            resD = (DeltaB * DeltaB) - (quatre * DeltaA * DeltaC);

            printf("DELTA = %f\n", resD);



            if (resD < 0)
            {
                printf("\n\nDelta est inferieur a 0, donc l'equation n'a aucune solution.\n\n");


                printf("Process returned 0(0x0)   execution time : ?????\n");
                printf("Press any key to continue.");
                system("pause > nul");
            }
            if (resD == 0)
            {
                float resb2a = 0;
                float deux = 2;
                float DeltaB2 = 0;
                float DeltaA2 = 0;


                printf("\n");
                printf("                                           - b \n");
                printf("l'equation n'admet qu'une solution :      ______\n");
                printf("                                            2a \n\n\n");


                resb2a = (DeltaB - DeltaB - DeltaB) / (deux * DeltaA);

                printf("La solution de l'equation est : %f\n\n", resb2a);

                printf("Process returned 0(0x0)   execution time : ?????\n");
                printf("Press any key to continue.");

                system("pause > nul");
            }
            if (resD > 0)
            {
                float xde1 = 0;
                float xde2 = 0;
                float racine1 = 0;
                float deux = 2;
                float deuxA = 0;
                float moinsB = 0;

                printf("\n\n");
                printf("Delta admet deux solutions : x1 et x2\n\n.");
                printf("Process returned 0(0x0)   execution time : ?????\n");
                printf("Press any key to continue.");
                system("pause > nul");
                printf("\n\n");

                racine1 = sqrt(resD);
                xde1 = (DeltaB - DeltaB - DeltaB - racine1) / (deux * DeltaA);
                xde2 = (DeltaB - DeltaB - DeltaB + racine1) / (deux * DeltaA);


                printf("  -%f - V%f        -%f + V%f \n", DeltaB, resD, DeltaB, resD);
                printf(" -------------------------     ------------------------ \n");
                printf("        2*%f                    2*%f     \n", DeltaA, DeltaA);
                printf("\n\n");
                printf("     x1 = %f ; x2 = %f\n\n", xde1, xde2);


                printf("Process returned 0(0x0)   execution time : ?????\n");
                printf("Press any key to continue.");

                system("pause > nul");


            }

        }

        if (choix == 7)
        {
            system("cls");
            printf("\n");
            printf("pA union pB 2.7\n");
            printf("\n");

            float pdeA = 0;
            float pdeB = 0;
            float pAinterpB = 0;
            float respAupB = 0;

            printf("Entrer pA : ");
            scanf("%f", &pdeA);
            printf("\n");
            printf("Entrer pB : ");
            scanf("%f", &pdeB);
            printf("\n");
            printf("Entrer pAnB : ");
            scanf("%f", &pAinterpB);

            printf("\n");

            respAupB = pdeA + pdeB - pAinterpB;
            printf("\n");
            printf(" pAuB = %f\n", respAupB);
            printf("\n");

            float pourcentPauB = 0;
            int cent = 100;

            pourcentPauB = respAupB * cent;

            printf("soit %f %%", pourcentPauB);
            printf("\n\n");

            printf("Process returned 0(0x0)   execution time : ?????\n");
            printf("Press any key to continue.");
            system("pause > nul");

        }

        if (choix == 8)
        {
            system("cls");
            printf("\n");
            printf("pA intersection pB\n\n");


            float PdeA = 0;
            float PdeB = 0;
            float PAunionPB = 0;
            float resPAnPB = 0;

            printf("Entrer pA : ");
            scanf("%f", &PdeA);
            printf("\n");
            printf("Entrer pB : ");
            scanf("%f", &PdeB);
            printf("\n");
            printf ("Entrer pAuB : ");
            scanf("%f", &PAunionPB);
            printf("\n");

            resPAnPB = PdeA + PdeB - PAunionPB;

            printf("\n");
            printf("PanB = %f", resPAnPB);
            printf("\n");
            printf("\n");

            float cent = 100;
            float pourcent = 0;

            pourcent = resPAnPB * cent;

            printf("soit %f %%", pourcent);
            printf("\n");
            printf("\n\n");

            printf("Process returned 0(0x0)   execution time : ?????\n");
            printf("Press any key to continue.");
            system("pause > nul");

        }

        if (choix == 9)
        {
            system("cls");
            printf("\n");
            printf("VARIATION 3.0");
            printf("\n");

            float VInitiale = 0;
            float VFinale = 0;
            float vfmoinsvi = 0;
            float resa = 0;
            float resb = 0;
            float resk = 0;
            float cent = 100;

            printf("Entrer la valeur initiale : ");
            scanf("%f", &VInitiale);
            printf("\n");
            printf("Entrer la valeur finale : ");
            scanf("%f", &VFinale);
            printf("\n");

            resa = (VFinale - VInitiale) / (VInitiale);

            printf("    %f - %f\n", VFinale, VInitiale);
            printf(" ---------------------------\n");
            printf("         %f\n\n", VInitiale);

            printf("  t = %f\n\n", resa);

            resb = resa * cent;
            resk = resa + 1;
            printf("taux d'evolution (t) = %f * 100 = %f\n\n", resa, resb);
            printf("coefficient multiplicateur (k) = %f + 1 = %f\n\n", resa, resk);

            printf("\n\n");

            printf("Process returned 0(0x0)   execution time : ?????\n");
            printf("Press any key to continue.");
            system("pause > nul");
        }

        if (choix == 10)
        {
            system("cls");
            printf("\n");
            printf("PERCENTER 1.0");
            printf("\n\n");

            float choice = 0;

            printf("\n");

            printf(" [1] = AUGEMENTATION\n");
            printf(" [2] = BAISSE\n");
            printf(" [3] = POURCENTAGE SIMPLE\n\n");
            printf("De quoi s'agit-il ? : ");
            scanf("%f", &choice);

            if (choice == 1)
            {
                printf("\n\n");

                float percenter_plus = 0;
                float percenter_moins = 0;
                float ValeurInitiale = 0;
                float ValeurFinale = 0;
                float taux = 0;


                printf("Entrer le prix / valeur Initiale : ");
                scanf("%f", &ValeurInitiale);
                printf("\n\n");
                printf("Entrer le taux d'evolution (%%) : ");
                scanf("%f", &taux);

                ValeurFinale = (ValeurInitiale + (ValeurInitiale * (taux / 100)));
                printf("\n\n");
                printf("Le prix final sera de %f", ValeurFinale);
                printf("\n\n\n");

                printf("Process returned 0(0x0)   execution time : ?????\n");
                printf("Press any key to continue.");
                system("pause > nul");

            }

            if (choice == 2)
            {
                printf("\n\n");

                float percenter_plus = 0;
                float percenter_moins = 0;
                float ValeurInitiale = 0;
                float ValeurFinale = 0;
                float taux = 0;

                printf("Entrer le prix / valeur initiale : ");
                scanf("%f", &ValeurInitiale);
                printf("\n\n");
                printf("Entrer le taux d'evolution : ");
                scanf("%f", &taux);
                printf("\n\n");

                ValeurFinale = (ValeurInitiale - (ValeurInitiale * (taux / 100)));
                printf("\n\n");

                printf("Le prix final sera de %f", ValeurFinale);
                printf("\n\n\n");


                printf("Process returned 0(0x0)   execution time : ?????\n");
                printf("Press any key to continue.");
                system("pause > nul");

            }
            if (choice == 3)
            {
                printf("\n\n");
                printf("PERCENTER BASIC\n\n");

                float nombreDivise, nombreDiviseur, resultat;

                printf("\n");
                printf("ENTRER LE PREMIER NOMBRE :");
                scanf("%f", &nombreDivise);
                printf("\n\n");
                printf("ENTRER LE SECOND NOMBRE :");
                scanf("%f", &nombreDiviseur);
                printf("\n\n");

                resultat = (nombreDivise / nombreDiviseur) * 100;
                printf("  %f\n", nombreDivise);
                printf("------------- x 100 = %f\n", resultat);
                printf("  %f\n\n", nombreDiviseur);
                printf("\n");
                system("pause");
            }
        }

        if (choix == 11)
        {
            system("cls");
            printf("\n");
            printf(" AIRE 1.0");
            printf("\n\n");
            int reponse = 0;

            printf("  CARRE = [1]\n");
            printf("  RECTANGLE = [2]\n");
            printf("  TRIANGLE = [3]\n");
            printf("  CERCLE = [4]\n");
            printf("  RECTANGLE = [5]\n");
            printf("\n\n");

            printf(" Quelle AIRE calculer? : ");
            scanf("%d", &reponse);

            if (reponse == 1)
            {
                printf("\n\n");
                printf(" AIRE CARRE 1.0\n\n");

                float cote = 0;
                float AireCarre = 0;

                printf("Entrer une longueur d'un cote du carre : ");
                scanf("%f", &cote);

                AireCarre = pow(cote, 2); /*pow : les puissances */

                printf("\n\n");
                printf("L'aire du carre est de %f\n", AireCarre);
                printf("\n\n\n");

                printf("Process returned 0(0x0)   execution time : ?????\n");
                printf("Press any key to continue.");

                system("pause > nul");
            }


            if (reponse == 2)
            {
                printf("\n\n");
                printf(" AIRE RECTANGLE 1.0\n\n");

                float largeur = 0;
                float hauteur = 0;
                float LfoisH = 0;

                printf("Entrer la largeur du rectangle : ");
                scanf("%f", &largeur);
                printf("\n");
                printf("Entrer la hauteur du rectangle : ");
                scanf("%f", &hauteur);


                LfoisH = (largeur) * (hauteur);

                printf("\n\n");
                printf("l'Aire du rectangle est de %f.", LfoisH);
                printf("\n\n\n");

                printf("Process returned 0(0x0)   execution time : ?????\n");
                printf("Press any key to continue.");
                system("pause > nul");
            }

            if (reponse == 3)
            {
                printf("\n\n");
                printf(" AIRE TRIANGLE 1.0\n\n");

                float base = 0;
                float hauteur = 0;
                float baseFoisHauteur = 0;

                printf("Entrer la BASE du triangle : ");
                scanf("%f", &base);
                printf("\n");
                printf("Entrer la HAUTEUR du triangle : ");
                scanf("%f", &hauteur);

                baseFoisHauteur = (base * hauteur) / 2;

                printf("\n\n");
                printf("l'Aire du Triangle est de %f", baseFoisHauteur);
                printf("\n\n\n");

                printf("Process returned 0(0x0)   execution time : ?????\n");
                printf("Press any key to continue.");
                system("pause > nul");

            }

            if (reponse == 4)
            {
                int diametreOuRayon = 0;

                printf("\n");
                printf(" AIRE CERCLE 1.0");
                printf("\n\n");
                printf(" [1] = DIAMETRE\n");
                printf(" [2] = RAYON\n\n");
                printf(" Quelle mesure est utilisee ? : ");
                scanf("%d", &diametreOuRayon);

                if (diametreOuRayon == 1)
                {
                    float pi = 3.141592;
                    float rayon = 0;
                    float aireCercle = 0;

                    printf("Entrer le DIAMETRE du cercle (cm) :");
                    scanf("%f", &rayon);

                    aireCercle = pow(rayon / 2, 2) * pi;

                    printf("\n\n");
                    printf("L'aire du cercle est de %f cm^2\n\n", aireCercle);

                    printf("Process returned 0(0x0)   execution time : ?????\n");
                    printf("Press any key to continue.");
                    system("pause > nul");

                }

                else if (diametreOuRayon == 2)
                {
                    float pi = 3.141592;
                    float rayon = 0;
                    float aireCercle = 0;

                    printf("Entrer le RAYON du cercle (cm) :");
                    scanf("%f", &rayon);

                    aireCercle =  pow(rayon, 2) * pi;

                    printf("\n\n");
                    printf("L'aire du cercle est de %f cm^2\n\n", aireCercle);

                    printf("Process returned 0(0x0)   execution time : ?????\n");
                    printf("Press any key to continue.");
                    system("pause > nul");

                }



            }

            if (reponse == 5)
            {
                printf("\n");
                printf("AIRE RECTANGLE 1.0");
                printf("\n\n");

                float longueur = 0;
                float largeur = 0;
                float aireRectangle = 0;

                printf("Entrer une longueur du rectangle :");
                scanf("%f", &longueur);
                printf("\n");
                printf("Entrer la largeur du rectangle :");
                scanf("%f", &largeur);
                printf("\n\n");

                aireRectangle = longueur * largeur;

                printf("L'aire du rectangle est : %f cm^2\n\n", aireRectangle);

                printf("Process returned 0(0x0)   execution time : ?????\n");
                printf("Press any key to continue.");
                system("pause > nul");

            }

        }

        if (choix == 12)
        {
            system("cls");
            printf("\n");
            printf("DERIVEE 1.0\n");
            printf("\n\n");

            int reponse = 0;

            printf(" [1] - Coefficient Directeur\n");
            printf(" [2] - Equation de la Tengeante\n");
            printf(" [3] - Fonction Polynome (degre 2, 3)\n\n");
            printf(" De quoi s'agit-il ? : ");
            scanf("%d", &reponse);


            if (reponse == 1)
            {
                printf("\n\n");

                float xdea = 0;
                float xdeb = 0;
                float ydea = 0;
                float ydeb = 0;
                float resultat = 0;

                printf("Entrer xa :");
                scanf("%f", &xdea);
                printf("\n");
                printf("Entrer xb :");
                scanf("%f", &xdeb);
                printf("\n");
                printf("Entrer ya :");
                scanf("%f", &ydea);
                printf("\n");
                printf("Entrer yb :");
                scanf("%f", &ydeb);
                printf("\n\n");

                resultat = (ydeb - ydea) / (xdeb - xdea);

                printf("           %f - %f\n", ydeb, ydea);
                printf("a =   ---------------------------\n");
                printf("           %f - %f\n\n", xdeb, xdea);

                printf("le Coefficient multiplicateur (a) = %f\n\n", resultat);


                printf("\n\n");
                printf("Process returned 0(0x0)   execution time : ?????\n");
                printf("Press any key to continue.");
                system("pause > nul");

            }

            if (reponse == 2)
            {
                printf("\n\n");

                float fprimedea = 0;
                float fdea = 0;
                float x = 0;
                float a = 0;
                float resultat1 = 0;
                float pointDabssice = 0;

                printf("Entrer le point d'abssice : ");
                scanf("%f", &pointDabssice);
                printf("\n");
                printf("Entrer f'(%f) : ", pointDabssice);
                scanf("%f", &fprimedea);
                printf("\n");
                printf("Entrer f(%f) : ", pointDabssice);
                scanf("%f", &fdea);
                printf("\n\n");

                resultat1 = fprimedea * (x - pointDabssice) + fdea;

                if (resultat1 > 0)
                {
                    printf("le point d'abssice de a (y) = %f x + %f ", fprimedea, resultat1);

                    printf("\n\n\n");
                    printf("Process returned 0(0x0)   execution time : ?????\n");
                    printf("Press any key to continue.");
                    system("pause");
                }

                if (resultat1 < 0)
                {
                    printf("le point d'abssice de a (y) = %f x %f ", fprimedea, resultat1);

                    printf("\n\n");
                    printf("Process returned 0(0x0)   execution time : ?????\n");
                    printf("Press any key to continue.");
                    system("pause > nul");
                }

            }

            if (reponse == 3)
            {
                printf("\n");

                float deg = 0;

                printf("Degre du polynome, 2 ou 3 ? : ");
                scanf("%f", &deg);

                if (deg == 2)
                {
                    float a = 0;
                    float b = 0;
                    float c = 0;
                    float d = 0;
                    float x = 0;
                    float dx = 0;

                    printf("\n\n");
                    printf("Valeur de a : ");
                    scanf("%f", &a);
                    printf("\n");
                    printf("Valeur de b : ");
                    scanf("%f", &b);
                    printf("\n");
                    printf("Valeur de c : ");
                    scanf("%f", &c);
                    printf("\n");
                    printf("Valeur de d : ");
                    scanf("%f", &d);
                    printf("\n");
                    printf("Valeur de x : ");
                    scanf("%f", &x);
                    printf("\n");
                    printf("\n");

                    dx = (2 * a * x) + (b);

                    printf(" f'(x) = %f\n\n", dx);
                    if (dx > 0)
                    {
                        printf(" f est croissante.\n");
                    }
                    else if (dx == 0)
                    {
                        printf(" f est constante.\n");
                    }
                    else if (dx < 0)
                    {
                        printf("f est decroissante.\n");
                    }

                    printf("Process returned 0(0x0)   execution time : ?????\n");
                    printf("Press any key to continue.");
                    system("pause > nul");

                }

                if (deg == 3)
                {
                    printf("\n");

                    float a = 0;
                    float b = 0;
                    float c = 0;
                    float d = 0;
                    float x = 0;
                    float dx = 0;

                    printf("\n\n");
                    printf("Valeur de a : ");
                    scanf("%f", &a);
                    printf("\n");
                    printf("Valeur de b : ");
                    scanf("%f", &b);
                    printf("\n");
                    printf("Valeur de c : ");
                    scanf("%f", &c);
                    printf("\n");
                    printf("Valeur de d : ");
                    scanf("%f", &d);
                    printf("\n");
                    printf("Valeur de x : ");
                    scanf("%f", &x);
                    printf("\n");
                    printf("\n");

                    dx = (3 * a * (x * x)) + ((2 * b * x) + c);

                    printf("f'(x) = %f", dx);

                    if (dx > 0)
                    {
                        printf(" f est croissante.\n");
                    }
                    else if (dx == 0)
                    {
                        printf(" f est constante.\n");
                    }
                    else if (dx < 0)
                    {
                        printf("f est decroissante.\n");
                    }


                    printf("\n\n");
                    printf("Process returned 0(0x0)   execution time : ?????\n");
                    printf("Press any key to continue.");
                    system("pause > nul");


                }
            }


        }

        if (choix == 13)
        {
            system("cls");
            printf("\n");

            int ChoixStat = 0;

            printf(" STATISTICS 1.0\n\n");
            printf(" [1] = STATS NUMBER SERIE\n");
            printf(" [2] = ASCENDING LIST ORDER\n");
            printf(" [3] = STATS \\ Q1,  Q3, Med\n\n");

            printf("QUE FAIRE ? :");
            scanf("%d", &ChoixStat);

            if (ChoixStat == 1)
            {
                system("cls");
                int POINTS[100];  /* tableau des points */
                int NOTES[7];    /* tableau des notes  */
                int N;           /* nombre d'ÈlËves    */
                int I, IN;       /* compteurs d'aide   */
                int SOM;         /* somme des points   */
                int MAX, MIN;    /* maximum, minimum de points    */
                int MAXN;        /* nombre de lignes du graphique */

                /* Saisie des donnÈes */
                printf("Entrez le nombre de valeurs (max.100) : ");
                scanf("%d", &N);
                printf("Entrer les valeurs :\n");
                for (I=0; I<N; I++)
                {
                    printf("valeur %d:", I+1);
                    scanf("%d", &POINTS[I]);
                }
                printf("\n");

                /* Calcul et affichage du maximum et du minimum des points */
                for (MAX=0, MIN=60, I=0; I<N; I++)
                {
                    if (POINTS[I] > MAX) MAX=POINTS[I];
                    if (POINTS[I] < MIN) MIN=POINTS[I];
                }
                printf("La valeur maximale est %d \n", MAX);
                printf("La valeur minimale est %d \n", MIN);
                /* Calcul et affichage de la moyenne des points */
                for (SOM=0,I=0 ; I<N ; I++)
                    SOM += POINTS[I];
                printf("La moyenne de la serie est %f \n", (float)SOM/N);

                /* Etablissement du tableau NOTES */
                for (IN=0 ; IN<7 ; IN++)
                    NOTES[IN] = 0;
                for (I=0; I<N; I++)
                    NOTES[POINTS[I]/10]++;

                /* Recherche du maximum MAXN dans NOTES */
                for (MAXN=0,IN=0 ; IN<7 ; IN++)
                    if (NOTES[IN] > MAXN)
                        MAXN = NOTES[IN];

                /* Affichage du graphique de barreaux */
                /* ReprÈsentation de MAXN lignes */
                for (I=MAXN; I>0; I--)
                {
                    printf("\n %2d  >", I);
                    for (IN=0; IN<7; IN++)
                    {
                        if (NOTES[IN]>=I)
                            printf(" ≤≤≤≤≤≤≤");
                        else
                            printf("        ");
                    }
                }

                /* Affichage du domaine des notes */
                printf("\n      +");
                for (IN=0; IN<7; IN++)
                    printf("-------+");
                printf("\n      I 0 - 9 I 10-19 I 20-29 "
                       "I 30-39 I 40-49 I 50-59 I  60   I\n");

                system("pause");

            }

            if (ChoixStat == 2)
            {

                int n, array[1000], c, d, t;

                system("cls");
                printf("INSERTION SORT ASCENDING ORDER 1.0\n\n");

                printf("ENTRER LE NOMBRE D'ELEMENTS : ");
                scanf("%d", &n);

                printf("ENTRER LES %d ELEMENTS : ", n);

                for (c = 0; c < n; c++)
                {
                    scanf("%d", &array[c]);
                }

                for (c = 1; c <= n - 1; c++)
                {

                    d = c;

                    while (d > 0 && array[d] < array[d - 1])
                    {

                        t = array[d];
                        array[d] = array[d - 1];
                        array[d - 1] = t;

                        d--;
                    }
                }

                printf("LISTE DANS L'ORDRE CROISSANT :\n");

                for (c = 0; c <= n - 1; c++)
                {

                    printf("%d - ", array[c]);
                }

                system("pause > nul");
            }

            /*if (ChoixStat == 3)
            {
                system("cls");
                int VALEURS[100];  /* tableau des points
                int NOTES[7];    /* tableau des notes
                int NombreValeurs;           /* nombre d'ÈlËves
                int I, IN;       /* compteurs d'aide
                int SOM;         /* somme des points
                int MAX, MIN;    /* maximum, minimum de points
                int MAXN;        /* nombre de lignes du graphique
                float Q1;
                float Q3;
                float moyenne;
                float locateQ1;
                float locateQ3;
                float Medianne;
                float locateMed;
                /* Saisie des donnÈes
                printf("Entrez le nombre de valeurs (max.100) : ");
                scanf("%d", &NombreValeurs);
                printf("Entrer les valeurs :\n");
                for (I=0; I<NombreValeurs; I++)
                {
                    printf("valeur %d:", I+1);
                    scanf("%d", &VALEURS[I]);
                }
                locateQ1 = ceil(NombreValeurs * 0.25);
                locateQ3 = ceil(NombreValeurs * 0.75);
                Q1 = ceil((VALEURS) * 0.25);
                Q3 = ceil((VALEURS) * 0.75);
                moyenne = VALEURS / NombreValeurs;
                locateMed = NombreValeurs / 2;
                Medianne = ceil(VALEURS / 2);
                VALEURS[locateQ1] = Q1;
                VALEURS[locateQ3] = Q3;
                VALEURS[locateMed] = Medianne;

                printf("MOYENNE = %f\n", moyenne);
                printf("MEDIANNE = %f\n", Medianne);
                printf("Q1 = %f\n", Q1);
                printf("Q3 = %f\n\n", Q3);
                system("pause");

            }
            /*float nombreDeValeurs = 0;
            float premierQaurtile = 0;
            float Mediane = 0;
            float troisiemeQuartile = 0;
            double arrondieQ1 = 0;
            double arrondieQ3 = 0;
            double arrondieMediane = 0;

            printf("Entrer le nombre de valeurs de la serie statistique : ");
            scanf("%f", &nombreDeValeurs);
            printf("\n\n");

                    premierQaurtile = (nombreDeValeurs) * 0.25;
                    troisiemeQuartile = (nombreDeValeurs) * 0.75;
                    Mediane = (nombreDeValeurs) / 2;
                    arrondieQ1 = ceil(premierQaurtile);
                    arrondieQ3 = ceil(troisiemeQuartile);
                    arrondieMediane = ceil(Mediane);

            printf(" Q1 = %f. (%feme valeur).", premierQaurtile, arrondieQ1);
            printf("\n\n");
            printf(" Mediane = %f. (%feme valeur.)", Mediane, arrondieMediane);
            printf("\n\n");
            printf(" Q3 = %f. (%feme valeur).", troisiemeQuartile, arrondieQ3);
            printf("\n\n\n");

            printf("Process returned 0(0x0)   execution time : ?????\n");
            printf("Press any key to continue.");
            system("pause > nul");
            */
        }

        if (choix == 14)
        {
            system("cls");
            printf("\n");
            printf("Indice de Masse Corporel (I.M.C)");
            printf("\n\n");

            float poids = 0;
            float taille = 0;
            float imc = 0;


            printf("Entrer le poids :");
            scanf("%f", &poids);
            printf("\n");
            printf("Entrer la taille :");
            scanf("%f", &taille);
            printf("\n\n");

            imc = (poids) / (taille * taille);

            printf("  < 16.5 = Denutrition.\n");
            printf("  16.5 -- 18.5 = Maigreur.\n");
            printf("  18.5 -- 25 = Normal.\n");
            printf("  25 -- 30 = surpoids (modere)\n");
            printf("  30 -- 35 = Obesite modere\n");
            printf("  35 -- 40 = Obesite severe\n");
            printf("  > 40 = Obesite massive.\n\n");
            printf("votre IMC est de : %f kg/m^2\n\n", imc);

            if (imc <= 16)
            {
                printf("Vous etes en sous-nutrition, parlez-en a votre dietetitien,\n");
                printf("Mangez plus de produits gras, 4 ou 5 produits laitiers par jour, \n");
                printf("2 litres de boisson, 500g de proteines, faites vous plaisir (moderement)\n");
                printf("chips, bonbons, biscuits, chocolat, gateaux...\n\n");

                printf("Process returned 0(0x0)   execution time : ?????\n");
                printf("Press any key to continue.");
                system("pause > nul");
            }
            else if (imc > 16 && imc < 19)
            {
                printf("Vous etes maigre, pour reprendre un peu de poids :\n");
                printf("augementez votre apport energetique, prevoyez 3 ou 4 collations par jour, \n");
                printf("Mangez du pain et/ou des feculents a chaque repas, \n");
                printf("ne sautez aucun repas, prevoyez 300g de proteines par repas.\n\n");

                printf("Process returned 0(0x0)   execution time : ?????\n");
                printf("Press any key to continue.");
                system("pause > nul");
            }
            else if (imc > 19 && imc < 25)
            {
                printf("Rien a signaler, vous etes dans les normes, \n");
                printf("votre corpulence est normale, continuez a manger equillibre, \n");
                printf(" Et continuez a faire du sport regulierement, felicitations!\n\n");

                printf("Process returned 0(0x0)   execution time : ?????\n");
                printf("Press any key to continue.");
                system("pause > nul");
            }
            else if (imc > 25 && imc < 30)
            {
                printf("Vous etes en surpoids, la perte de 2 ou 3 kilos serait bien, \n");
                printf("Faites un repas tres leger le soir, faites du sport, sinon, \n");
                printf("30min de marche par jours au minimum!\n\n");

                printf("Process returned 0(0x0)   execution time : ?????\n");
                printf("Press any key to continue.");
                system("pause > nul");
            }
            else if (imc > 30 && imc < 35)
            {
                printf("Vous etes en obesite moderee, \n");
                printf("pensez serieusement a perdre 5 a 6 kilos, \n");
                printf("evitez de manger tard le soir, prenez un repas tres leger le soir, \n");
                printf("par exemple une soupe de legumes ! Evitez desormais les fast-foods, \n");
                printf("ne grignotez plus (chips, chocolat), entre les repas, \n");
                printf("faites au moins une heure de sport /jour, chaque 48h, \n\n");

                printf("Process returned 0(0x0)   execution time : ?????\n");
                printf("Press any key to continue.");
                system("pause > nul");
            }
            else if (imc > 35 && imc < 40)
            {
                printf("Vous etes en obesite severe! il vous faut imperativement :\n");
                printf("perdre plusieurs kilos, changer votre nutrition radicalement, \n");
                printf("consultez un nutritionniste, etablissez un regime specifique, \n");
                printf("N'oubliez pas de boire beaucoup d'eau et faire beaucoup de marche !\n\n");

                printf("Process returned 0(0x0)   execution time : ?????\n");
                printf("Press any key to continue.");
                system("pause > nul");
            }
            else if (imc > 40)
            {
                printf("Aie! Vous etes en obesite massive ou morbide !\n");
                printf("La chirurgie esthetique telle qu'une liposcuccion est envisageable ! \n");
                printf("s'ajoute a cela un regime severe, un programme de sport, \n");
                printf("tout ca etablit par un nutritionniste et un specialiste !\n\n");

                printf("Process returned 0(0x0)   execution time : ?????\n");
                printf("Press any key to continue.");
                system("pause > nul");
            }

        }

        if (choix == 15)
        {
            system("cls");
            printf("\n");
            printf(" TVA CALCULATOR 1.0");
            printf("\n\n");

            float choiTva = 0;

            printf(" [1] = TVA A PARTIR DE MONTANT HT\n");
            printf(" [2] = TVA A PARTIR DE MONTANT TTC\n");
            printf(" [3] = MONTANT HT, MONTANT TTC ET TAUX TVA\n");
            printf(" [4] = MONTANT TTC, MONTANT HT ET TAUX TVA\n");
            printf("\n\n");
            printf(" De quoi est il question ? : ");
            scanf("%f", &choiTva);

            if (choiTva == 1)
            {
                float MontantHT = 0;
                float tauxTVA = 0;
                float resultatTVA1 = 0;

                printf(" TVA MONTANT HT.\n\n");
                printf("Entrer le montant HT (Hors Taxes) :");
                scanf("%f", &MontantHT);
                printf("\n");
                printf("Entrer le taux TVA :");
                scanf("%f", &tauxTVA);
                printf("\n\n");

                tauxTVA = tauxTVA / 100;

                resultatTVA1 = MontantHT * (1 + tauxTVA) - MontantHT;
                printf("TVA = %f Ä\n\n", resultatTVA1);
                printf("\n");

                printf("Process returned 0(0x0)   execution time : ?????\n");
                printf("Press any key to continue.");
                system("pause > nul");

            }

            else if (choiTva == 2)
            {
                float montantTTC = 0;
                float tauxTVA = 0;
                float resultatTVA2 = 0;

                system("cls");
                printf("\n");
                printf(" TVA MONTANT TTC.");
                printf("\n\n");

                printf("Entrer le montant TTC (Toutes Taxes Comprises) :");
                scanf("%f", &montantTTC);
                printf("\n");
                printf("Entrer le taux TVA :");
                scanf("%f", &tauxTVA);
                printf("\n");

                tauxTVA = tauxTVA / 100;

                resultatTVA2 = montantTTC - montantTTC / (1 + tauxTVA);

                printf("TVA = %f Ä\n\n", resultatTVA2);

                printf("Process returned 0(0x0)   execution time : ?????\n");
                printf("Press any key to continue.");
                system("pause > nul");
            }
            else if (choiTva == 3)
            {
                float montantHT = 0;
                float montantTTC = 0;
                float tauxTVA = 0;

                system("cls");
                printf("\n");
                printf(" MONTANT HT, MONTANT TTC ET TAUX TVA.");
                printf("\n\n");

                printf("Entrer le montant TTC (Toutes Taxes Comprises) :");
                scanf("%f", &montantTTC);
                printf("\n");
                printf("Entrer le taux TVA :");
                scanf("%f", &tauxTVA);
                printf("\n\n");

                tauxTVA = tauxTVA / 100;

                montantHT = montantTTC / (1 + tauxTVA);

                printf("Montant HT = %f\n\n", montantHT);

                printf("Process returned 0(0x0)   execution time : ?????\n");
                printf("Press any key to continue.");
                system("pause > nul");

            }
            else if (choiTva == 4)
            {
                float montantHT = 0;
                float montantTTC = 0;
                float tauxTVA = 0;

                system("cls");
                printf("\n");
                printf(" MONTANT TTC, MONTANT HT ET TAUX TVA.");
                printf("\n\n");

                printf("Entrer le montant HT (Hors Taxes) :");
                scanf("%f", &montantHT);
                printf("\n");
                printf("Entrer le taux TVA :");
                scanf("%f", &tauxTVA);
                printf("\n\n");

                tauxTVA = tauxTVA / 100;

                montantTTC = montantHT * (1 + tauxTVA);

                printf("Montant TTC = %f\n\n", montantTTC);

                printf("Process returned 0(0x0)   execution time : ?????\n");
                printf("Press any key to continue.");
                system("pause > nul");
            }

        }

        if (choix == 16)
        {
            int monney = 0;

            system("cls");
            printf("\n");
            printf("CONVERTER 1.0");
            printf("\n\n");

            printf("[1] = EURO --> FRANC\n");
            printf("[2] = FRANC --> EURO\n");
            printf("[3] = EURO --> DOLLARD\n");
            printf("[4] = DOLLARD --> EURO\n");
            printf("[5] = POUCES --> CENTIMETRES\n");
            printf("[6] = DECIMAL --> BINARY\n\n");

            printf("De quelle conversion est il sujet ? :");
            scanf("%d", &monney);

            if (monney == 1)
            {
                printf("\n\n");
                float euro = 0;
                float franc = 6.5596;
                float resultatFranc = 0;

                printf("\n");
                printf("Entrez la somme en euro :");
                scanf("%f", &euro);

                resultatFranc = euro * franc;
                printf("\n\n");

                printf("%f ÄÄ = %f Francs.\n\n", euro, resultatFranc);

                printf("Process returned 0(0x0)   execution time : ?????\n");
                printf("Press any key to continue.");
                system("pause > nul");


            }
            else if (monney == 2)
            {
                printf("\n\n");
                float francs = 0;
                float franc = 6.5596;
                float resultatEuro = 0;

                printf("\n");
                printf("Entrez la somme en Francs :");
                scanf("%f", &francs);

                resultatEuro = francs / franc;
                printf("\n\n");

                printf("%f Francs = %f ÄÄ.\n\n", francs, resultatEuro);

                printf("Process returned 0(0x0)   execution time : ?????\n");
                printf("Press any key to continue.");
                system("pause > nul");
            }
            else if (monney == 3)
            {
                printf("\n\n");
                float euro = 0;
                float dollard = 0.8917;
                float resultatDollard = 0;

                printf("Entrez la somme en Euros :");
                scanf("%f", &euro);

                resultatDollard = euro * dollard;

                printf("\n\n");
                printf("%f ÄÄ = %f $$.\n\n", euro, resultatDollard);


                printf("Process returned 0(0x0)   execution time : ?????\n");
                printf("Press any key to continue.");
                system("pause > nul");



            }
            else if (monney == 4)
            {
                printf("\n\n");
                float dollard = 0.8912;
                float euro = 0;
                float resultatEuro = 0;

                printf("Entrer la somme en USD ($) :");
                scanf("%f", &euro);

                resultatEuro = euro / dollard;

                printf("\n\n");

                printf("%f $$ = %f ÄÄ\n\n", euro, resultatEuro);


                printf("Process returned 0(0x0)   execution time : ?????\n");
                printf("Press any key to continue.");
                system("pause > nul");
            }

            else if (monney == 5)
            {
                printf("\n\n");
                float resultat = 0;
                float valeur_pouces = 2.54;
                float pouces = 0;

                printf("Entrer le nombre de pouces :");
                scanf("%f", &pouces);

                resultat = pouces * valeur_pouces;

                printf("\n\n");

                printf(" %f pouces = %f centimetres.\n\n", pouces, resultat);

                printf("Process returned 0(0x0)   execution time : ?????\n");
                printf("Press any key to continue.");
                system("pause > nul");
            }

            if (monney == 6)
            {
                int n, c, k;

                system("cls");
                printf(" DECIMAL TO BINARY 1.0\n\n");

                printf("ENTRER UN NOMBRE ENTIER A CONVERTIR EN BINAIRE : ");
                scanf("%d", &n);

                printf("%d in BINARY NUMBER SYSTEM IS :\n", n);

                for (c = 31; c >= 0; c--)
                {

                    k = n >> c;

                    if (k & 1)
                        printf("1");
                    else
                        printf("0");
                }

                printf("\n\n");

                system("pause > nul");
            }
        }

        if (choix == 17)
        {
            int ChoixJeu = 0;
            do
            {
                system("cls");


                printf("\n");
                printf("GAME CONSOLE 1.0");
                printf("\n\n");

                printf(" [1] = JEU PLUS OU MOINS\n");
                printf(" [2] = RPS (PIERRE, FEUILLE, CISEAUX\n");
                printf(" [3] = MORPION (2J) (NON-OPERATIONNEL)\n");
                printf(" [0] = EXIT\n");


                printf("A quel jeu souhaitez-vous jouer ? :");
                scanf("%d", &ChoixJeu);

                if (ChoixJeu == 1)
                {
                    int ChoixNiveau = 0;

                    printf("\n");
                    printf(" JEU PLUS OU MOINS\n\n");
                    printf("\n");
                    printf(" [1] = NIVEAU 1 ( 1 - 100)\n");
                    printf(" [2] = NIVEAU 2 ( 1 - 1000)\n");
                    printf(" [3] = NIVEAU 3 ( 1 - 10 000)\n");
                    printf(" [4] = NIVEAU 4 ( 1 - 100 000)\n");
                    printf(" [5] = ORDINATEUR(NV4) ( 1 - 100 000)\n");
                    printf(" [6] = IMPOSSIBLE. ( 1 - ??RANDOM??)\n\n");
                    printf("A quel niveau jouer ?");
                    scanf("%d", &ChoixNiveau);

                    if (ChoixNiveau == 1)
                    {

                        int ChoixJoueur;

                        system("cls");
                        printf("PLUS OU MOINS NV1\n\n");
                        printf(" [1] = JOUEUR\n");
                        printf(" [2] = ORDINATEUR\n\n");

                        printf(" QUI JOUE ? :");
                        scanf("%d", &ChoixJoueur);

                        if (ChoixJoueur == 1)
                        {

                            int nombreMystere = 0, nombreEntre = 0;
                            int NombreDeCoups = 0;
                            const int MAX = 100, MIN = 1;

                            // GÈnÈration du nombre alÈatoire

                            srand(time(NULL));
                            nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

                            /* La boucle du programme. Elle se rÈpËte tant que l'utilisateur n'a pas trouvÈ le nombre mystËre */

                            do
                            {

                                NombreDeCoups++;
                                // On demande le nombre
                                printf("Quel est le nombre ? ");
                                scanf("%d", &nombreEntre);

                                // On compare le nombre entrÈ avec le nombre mystËre

                                if (nombreMystere > nombreEntre)
                                    printf("C'est plus !\n\n");
                                else if (nombreMystere < nombreEntre)
                                    printf("C'est moins !\n\n");
                                else
                                    printf ("Bravo, vous avez trouve le nombre mystere en %d coups !\n", NombreDeCoups);


                            }
                            while (nombreEntre != nombreMystere);
                            system("pause");
                        }

                        else if (ChoixJoueur == 2)
                        {
                            {
                                system("cls");
                                printf("PLUS OU MOINS ORDINATEUR MOD(NV1)\n\n");
                                int nombreMystere = 0, nombreEntre = 0;
                                int NombreDeCoups = 0;
                                int MAX = 100, MIN = 1;

                                // GÈnÈration du nombre alÈatoire

                                srand(time(NULL));
                                nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

                                /* La boucle du programme. Elle se rÈpËte tant que l'utilisateur n'a pas trouvÈ le nombre mystËre */
                                system("pause");
                                do
                                {

                                    NombreDeCoups++;

                                    if (nombreMystere > 50)
                                    {
                                        if (nombreMystere > 75 && nombreMystere < 100)
                                        {
                                            MAX = 100;
                                            MIN = 75;
                                            nombreEntre = (rand() % (MAX - MIN + 1)) + MIN;
                                        }
                                        else if (nombreMystere < 75 && nombreMystere > 50)
                                        {
                                            MAX = 75;
                                            MIN = 50;
                                            nombreEntre = (rand() % (MAX - MIN + 1)) + MIN;
                                        }
                                    }
                                    else if (nombreMystere < 50)
                                    {
                                        if (nombreMystere > 25 && nombreMystere < 50)
                                        {
                                            MAX = 50;
                                            MIN = 25;
                                            nombreEntre = (rand() % (MAX - MIN + 1)) + MIN;
                                        }
                                        else if (nombreMystere < 25 && nombreMystere > 1)
                                        {
                                            MAX = 25;
                                            MIN = 1;
                                            nombreEntre = (rand() % (MAX - MIN + 1)) + MIN;
                                        }
                                    }




                                    if (nombreMystere > nombreEntre)
                                    {
                                        printf(" C'est %d ?", nombreEntre);
                                        printf("  Non, c'est plus !\n\n");

                                    }

                                    else if (nombreMystere < nombreEntre)
                                    {
                                        printf("c'est %d ?", nombreEntre);
                                        printf("  Non c'est moins !\n\n");

                                    }
                                    else if (nombreEntre == nombreMystere)
                                    {
                                        printf("C'est %d ?", nombreEntre);
                                        printf(" Oui, c'est ca, c'etait %d et tu as mis %d coups pour le trouver !\n\n", nombreMystere, NombreDeCoups);

                                        if (NombreDeCoups < 10 && NombreDeCoups < 20)
                                        {
                                            printf("C'est tres bien joue !\n");
                                        }
                                        else if (NombreDeCoups > 20 && NombreDeCoups < 50)
                                        {
                                            printf("Ca va, c'pas mal !\n");
                                        }
                                        else if (NombreDeCoups > 50 && NombreDeCoups < 75)
                                        {
                                            printf("eh bien tu en a mis du temps, il faut etre plus methodique !\n");
                                        }
                                        else if (NombreDeCoups > 75)
                                        {
                                            printf("Tu t'est un peu rate, ce n'est pas tres glorieux !\n");
                                        }
                                        else if (NombreDeCoups < 5)
                                        {
                                            printf("C'est parfait !");
                                        }
                                    }


                                }
                                while (nombreEntre != nombreMystere);
                                system("pause");
                            }
                        }
                    }

                    if (ChoixNiveau == 2)
                    {
                        system("cls");
                        printf("PLUS OU MOINS NV2\n\n");
                        int nombreMystere = 0, nombreEntre = 0;
                        int NombreDeCoups = 0;
                        const int MAX = 1000, MIN = 1;

                        // GÈnÈration du nombre alÈatoire

                        srand(time(NULL));
                        nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

                        /* La boucle du programme. Elle se rÈpËte tant que l'utilisateur n'a pas trouvÈ le nombre mystËre */

                        do
                        {

                            NombreDeCoups++;
                            // On demande le nombre
                            printf("Quel est le nombre ? ");
                            scanf("%d", &nombreEntre);

                            // On compare le nombre entrÈ avec le nombre mystËre

                            if (nombreMystere > nombreEntre)
                                printf("C'est plus !\n\n");
                            else if (nombreMystere < nombreEntre)
                                printf("C'est moins !\n\n");
                            else if (nombreMystere == nombreEntre)
                            {
                                printf ("Bravo, vous avez trouve le nombre mystere en %d coups\n", NombreDeCoups);

                                if (NombreDeCoups < 10 && NombreDeCoups < 20)
                                {
                                    printf("C'est tres bien joue !\n");
                                }
                                else if (NombreDeCoups > 20 && NombreDeCoups < 50)
                                {
                                    printf("Ca va, c'pas mal !\n");
                                }
                                else if (NombreDeCoups > 50 && NombreDeCoups < 75)
                                {
                                    printf("eh bien tu en a mis du temps, il faut etre plus methodique !\n");
                                }
                                else if (NombreDeCoups > 75)
                                {
                                    printf("Tu t'est un peu rate, ce n'est pas tres glorieux !\n");
                                }
                            }


                        }
                        while (nombreEntre != nombreMystere);
                        system("pause");
                    }

                    if (ChoixNiveau == 3)
                    {
                        system("cls");
                        printf("PLUS OU MOINS NV3\n\n");
                        int nombreMystere = 0, nombreEntre = 0;
                        int NombreDeCoups = 0;
                        const int MAX = 10000, MIN = 1;

                        // GÈnÈration du nombre alÈatoire

                        srand(time(NULL));
                        nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

                        /* La boucle du programme. Elle se rÈpËte tant que l'utilisateur n'a pas trouvÈ le nombre mystËre */

                        do
                        {
                            NombreDeCoups++;
                            // On demande le nombre
                            printf("Quel est le nombre ? ");
                            scanf("%d", &nombreEntre);

                            // On compare le nombre entrÈ avec le nombre mystËre

                            if (nombreMystere > nombreEntre)
                                printf("C'est plus !\n\n");
                            else if (nombreMystere < nombreEntre)
                                printf("C'est moins !\n\n");
                            else if (nombreMystere == nombreEntre)
                            {
                                printf ("Bravo, vous avez trouve le nombre mystere en %d coups\n", NombreDeCoups);

                                if (NombreDeCoups < 10 && NombreDeCoups < 20)
                                {
                                    printf("C'est tres bien joue !\n");
                                }
                                else if (NombreDeCoups > 20 && NombreDeCoups < 50)
                                {
                                    printf("Ca va, c'pas mal !\n");
                                }
                                else if (NombreDeCoups > 50 && NombreDeCoups < 75)
                                {
                                    printf("eh bien tu en a mis du temps, il faut etre plus methodique !\n");
                                }
                                else if (NombreDeCoups > 75)
                                {
                                    printf("Tu t'est un peu rate, ce n'est pas tres glorieux !\n");
                                }
                            }

                        }
                        while (nombreEntre != nombreMystere);
                        system("pause");
                    }

                    if (ChoixNiveau == 4)
                    {
                        system("cls");
                        printf("PLUS OU MOINS NV4\n\n");
                        int nombreMystere = 0, nombreEntre = 0;
                        int NombreDeCoups = 0;
                        const int MAX = 100000, MIN = 1;

                        // GÈnÈration du nombre alÈatoire

                        srand(time(NULL));
                        nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

                        /* La boucle du programme. Elle se rÈpËte tant que l'utilisateur n'a pas trouvÈ le nombre mystËre */

                        do
                        {

                            NombreDeCoups++;
                            // On demande le nombre
                            printf("Quel est le nombre ? ");
                            scanf("%d", &nombreEntre);

                            // On compare le nombre entrÈ avec le nombre mystËre

                            if (nombreMystere > nombreEntre)
                                printf("C'est plus !\n\n");
                            else if (nombreMystere < nombreEntre)
                                printf("C'est moins !\n\n");
                            else if (nombreMystere == nombreEntre)
                            {
                                printf ("Bravo, vous avez trouve le nombre mystere en %d coups !\n", NombreDeCoups);

                                if (NombreDeCoups < 10 && NombreDeCoups < 20)
                                {
                                    printf("C'est tres bien joue !\n");
                                }
                                else if (NombreDeCoups > 20 && NombreDeCoups < 50)
                                {
                                    printf("Ca va, c'pas mal !\n");
                                }
                                else if (NombreDeCoups > 50 && NombreDeCoups < 75)
                                {
                                    printf("eh bien tu en a mis du temps, il faut etre plus methodique !\n");
                                }
                                else if (NombreDeCoups > 75)
                                {
                                    printf("Tu t'est un peu rate, ce n'est pas tres glorieux !\n");
                                }
                            }

                        }
                        while (nombreEntre != nombreMystere);
                        system("pause");
                    }

                    if (ChoixNiveau == 5)
                    {
                        system("cls");
                        printf("PLUS OU MOINS ORDINATEUR MOD(NV4)\n\n");
                        int nombreMystere = 0, nombreEntre = 0;
                        int NombreDeCoups = 0;
                        const int MAX = 100000, MIN = 1;

                        // GÈnÈration du nombre alÈatoire

                        srand(time(NULL));
                        nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

                        /* La boucle du programme. Elle se rÈpËte tant que l'utilisateur n'a pas trouvÈ le nombre mystËre */
                        system("pause");
                        do
                        {

                            NombreDeCoups++;
                            // L'ordinateur essaie toutes les combinaisons possibles.

                            nombreEntre = (rand() % (100000 - 1 + 1)) + 1;

                            // On compare le nombre entrÈ avec le nombre mystËre

                            if (nombreEntre > 50000 && nombreEntre > nombreMystere)
                            {

                                int MAX = 100000;
                                int MIN = 50000;
                                nombreEntre = (rand() % (MAX - MIN + 1)) + MIN;
                            }

                            else if (nombreEntre > 75000 && nombreEntre > nombreMystere)
                            {

                                int MAX = 100000;
                                int MIN = 75000;
                                nombreEntre = (rand() % (MAX - MIN + 1)) + MIN;
                            }


                            else if (nombreEntre < 50000 /*&& nombreEntre < nombreMystere*/)
                            {

                                /*int MAX = 50000;
                                int MIN = 1;
                                nombreEntre = (rand() % (MAX - MIN + 1)) + MIN;*/
                            }
                            else if (nombreEntre < 25000 && nombreEntre < nombreMystere)
                            {

                                int MAX = 25000;
                                int MIN = 1;
                                nombreEntre = (rand() % (MAX - MIN + 1)) + MIN;
                            }

                            if (nombreEntre > nombreMystere /*&& nombreMystere > 50000*/)
                            {
                                printf(" C'est %d ? ", nombreEntre);
                                printf(" NON, c'est moins ! que %d\n", nombreEntre);

                                /* int MAX = 100000;
                                 int MIN = 50000;
                                 nombreEntre = (rand() % (MAX - MIN + 1)) + MIN;*/
                            }
                            else if (nombreEntre < nombreMystere/* && nombreMystere < 50000*/)
                            {
                                printf(" C'est %d ?", nombreEntre);
                                printf(" NON, c'est plus que %d\n", nombreEntre);

                                /*int MAX = 50000;
                                int MIN = 1;
                                nombreEntre = (rand() % (MAX - MIN + 1)) + MIN;*/

                            }
                            else if (nombreEntre == nombreMystere)
                            {
                                printf("\n\n");
                                printf(" C'est %d ?", nombreEntre);
                                printf(" OUI, c'est %d ! tu as mis %d coups\n", nombreMystere, NombreDeCoups);

                                if (NombreDeCoups < 100 && NombreDeCoups < 200)
                                {
                                    printf("C'est presque parfait !\n");
                                }
                                else if (NombreDeCoups > 200 && NombreDeCoups < 1200)
                                {
                                    printf("C'est super !\n");
                                }
                                else if (NombreDeCoups > 1200 && NombreDeCoups < 10000)
                                {
                                    printf("c'est pas mal !\n");
                                }
                                else if (NombreDeCoups > 10000)
                                {
                                    printf("Ca manque un peu de methodologie !\n");
                                }
                            }

                        }
                        while (nombreEntre != nombreMystere);

                        system("pause");
                    }

                    if (ChoixNiveau == 6)
                    {
                        int choixniveauimpossible = 0;

                        system("cls");
                        printf("\n");
                        printf(" LE NIVEAU IMPOSSIBLE CONSISTE A TROUVER UN NOMBRE ALEATOIRE.\n");
                        printf(" MAIS ATTENTION, CE NOMBRE CHANGE A CHAQUE FOIS QUE VOUS VOUS TROMPEZ !\n");
                        printf(" PAR EXEMPLE SI VOUS CHOISISSEZ 6 ET QUE LE CHIFFRE MYSTERE EST 9,\n");
                        printf(" LE NOMBRE CHANGERA DE 9 A 15 PAR EXEMPLE,\n");
                        printf(" CE QUI EN FAIT UN NIVEAU CASIMENT IMPOSSIBLE, MEME POUR UN ORDINATEUR.\n\n");
                        printf(" PRET ?\n");
                        system("pause");
                        printf("\n\n");
                        printf(" [1] = JOUEUR HUMAIN (Bonne chance !)\n");
                        printf(" [2] = JOUEUR MACHINE (EASY !!)\n");
                        printf(" [3] = QUITTER (faible !)\n\n");
                        printf(" QUI JOUE ? :");
                        scanf("%d", &choixniveauimpossible);

                        if (choixniveauimpossible == 1)
                        {
                            system("cls");
                            printf("JE VOUS SOUHAITE BONNE CHANCE !\n");
                            printf(" (LE NOMBRE SE SITUE ENTRE 1 ET 100\n\n");
                            system("pause");

                            int nombreMystere = 0, nombreEntre = 0;
                            int NombreDeCoups = 0;
                            const int MAX = 100, MIN = 1;

                            // GÈnÈration du nombre alÈatoire

                            srand(time(NULL));
                            nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

                            /* La boucle du programme. Elle se rÈpËte tant que l'utilisateur n'a pas trouvÈ le nombre mystËre */

                            do
                            {
                                NombreDeCoups++;

                                nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

                                printf("QUEL EST LE NOMBRE ? :");
                                scanf("%d", &nombreEntre);

                                if (nombreEntre > nombreMystere)
                                {
                                    printf("C'EST MOINS !\n");
                                }
                                else if (nombreEntre < nombreMystere)
                                {
                                    printf("C'EST PLUS !\n");
                                }
                                else if (nombreEntre == nombreMystere)
                                {
                                    printf(" GAGNE !! C'ETAIT %d, ET IL VOUS A FALLU % COUPS !\n\n", nombreMystere, NombreDeCoups);
                                }


                            }
                            while(nombreEntre != nombreMystere);
                            system("pause > nul");

                        }
                        if (choixniveauimpossible == 2)
                        {
                            system("cls");
                            printf(" IMPOSSIBLE LEVEL ORDINATEUR MOD.\n\n");
                            printf(" PATIENCE ... IL FINIRA PAR TROUVER ...\n\n");
                            printf(" Quand il sera pret,  ");
                            system("pause");
                            printf("\n\n");


                            int nombreMystere = 0, nombreEntre = 0;
                            int NombreDeCoups = 0;
                            int NombreOptions = 100;
                            const int MAX = 100, MIN = 1;

                            // GÈnÈration du nombre alÈatoire

                            srand(time(NULL));
                            nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

                            printf("EVALUATON ONGOING ...\n\n");
                            system("timeout /t 2 /nobreak > nul");
                            printf("EVALUATING STRATEGIES ...\n\n");
                            system("timeout /t 2 /nobreak > nul");
                            printf("SEVERAL OPTIONS AVAILABLE.\n");
                            printf("%d OPTIONS AVAILBLE.\n", NombreOptions);
                            printf("PROBABLY SOLUTION : %d\n", nombreMystere);
                            system("timeout /t 1 /nobreak > nul");
                            printf(" /!\ RANDOM SOLUTIONS /!\. \n\n");
                            printf("ATTEMPTING TO FIND SOLUTION BY RANDOM NUMBERS.\n\n");
                            system("timeout /t 2 /nobreak > nul");


                            /* La boucle du programme. Elle se rÈpËte tant que l'utilisateur n'a pas trouvÈ le nombre mystËre */

                            do
                            {
                                NombreDeCoups++;
                                NombreOptions--;

                                printf("CALCULATING OPTIMAL STRATEGY\n");
                                printf(" OPTON = %d /=\ REMAINNIG OPTONS = %d\n\n", NombreDeCoups, NombreOptions);

                                nombreEntre = (rand () % (MAX - MIN + 1)) + MIN;
                                nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

                                if (nombreEntre > nombreMystere)
                                {
                                    printf(" IT IS %d ? (ATTEMPTING RESPONSE ...)", nombreEntre);
                                    printf(" IT LESS THAN %d ! (RETRY ...)\n\n", nombreEntre);
                                }
                                else if (nombreEntre < nombreMystere)
                                {
                                    printf(" IT IS %d ? (ATTEMPTING RESPONSE ...)", nombreEntre);
                                    printf("IT MORE THAN %d ! (RETRY ... )\n\n", nombreEntre);
                                }
                                else if (nombreEntre == nombreMystere)
                                {
                                    printf("\n\n");
                                    printf("OPTON %d SELECTED.\n", NombreDeCoups);
                                    printf(" NUMBER FIND, [%d = %d], %d ATTEMPTINGS.\n\n", nombreEntre, nombreMystere, NombreDeCoups);
                                    system("pause > nul");
                                }


                            }
                            while(nombreEntre != nombreMystere);


                        }

                    }
                }

                if (ChoixJeu == 2)
                {
                    int choixNiveau = 0;
                    printf("\n\n");
                    printf("PIERRE FEUILLE CISEAUX 1.0\n\n");
                    printf(" [1] = NIVEAU 1 (1/2 TO WIN)\n");
                    printf(" [2] = NIVEAU 2 (0/2 TO WIN)\n\n\n");
                    printf("A QUEL NIVEAU SOUHAITEZ VOUS JOUER ? :");
                    scanf("%d", &choixNiveau);

                    if (choixNiveau == 1)
                    {
                        int choixObjet = 0;
                        int pierre = 1;
                        int feuille = 2;
                        int ciseaux = 3;
                        int scoreOrdi = 0;
                        int scoreJoueur = 0;
                        do
                        {


                            system("cls");
                            printf("\n");
                            printf("                    ==============PIERRE FEUILLE CISEAUX============\n");
                            printf(" -------------------------------------------------------------------------------------------\n\n");
                            printf("CHOSIR :\n\n");
                            printf("     [1] = PIERRE\n\n");
                            printf("     [2] = FEUILLE                    ORDINATEUR = %d                 [0] = QUITTER\n\n", scoreOrdi);
                            printf("     [3] = CISEAUX                    %s = %d\n\n", nomUtilisateur, scoreJoueur);
                            printf("\n\n");
                            printf("VOTRE CHOIX ? :");
                            scanf("%d", &choixObjet);


                            printf("\n\n");
                            if (choixObjet == 1)
                            {

                                int choixObjet = pierre;
                                int pierre = 1;
                                int feuille = 2;
                                int ciseaux = 3;
                                int choixObjetOrdi;

                                /*pierre > ciseaux;
                                ciseaux > feuille;
                                feuille > pierre;
                                pierre = pierre;
                                feuille = feuille;
                                ciseaux = ciseaux;*/

                                srand(time(NULL));
                                choixObjetOrdi = (rand() % (3 - 1 + 1)) + 1;

                                if (choixObjetOrdi == 1)
                                {
                                    printf(" ORDINATEUR A CHOISI LA PIERRE !\n\n");
                                    printf(" !!!BANG!!!\n\n\n");
                                    printf(" EGALITE !\n");
                                    system("pause > nul");
                                }
                                else if (choixObjetOrdi == 2)
                                {
                                    printf(" ORDINATEUR A CHOISI LA FEUILLE ! \n\n");
                                    printf(" !!!BANG!!!\n\n\n");
                                    printf("VOUS AVEZ PERDU !\n");
                                    system("pause > nul");
                                    scoreOrdi++;
                                }
                                else if (choixObjetOrdi == 3)
                                {
                                    printf(" ORDINATEUR A CHOISI LES CISEAUX ! \n\n");
                                    printf(" !!!BANG!!!\n\n\n");
                                    printf(" VOUS AVEZ GAGNE !\n\n");
                                    system("pause > nul");
                                    scoreJoueur++;
                                }



                            }

                            if (choixObjet == 2)
                            {

                                int choixObjet = pierre;
                                int pierre = 1;
                                int feuille = 2;
                                int ciseaux = 3;
                                int choixObjetOrdi;

                                srand(time(NULL));
                                choixObjetOrdi = (rand() % (3 - 1 + 1)) + 1;

                                if (choixObjetOrdi == 1)
                                {
                                    printf(" ORDINATEUR A CHOISI LA PIERRE.\n\n");
                                    printf(" !!!BANG!!!\n\n\n");
                                    printf(" VOUS AVEZ GAGNE !\n\n");
                                    system("pause > nul");
                                    scoreJoueur++;
                                }
                                else if (choixObjetOrdi == 2)
                                {
                                    printf(" ORDINATEUR A CHOISI LA FEUILLE.\n\n");
                                    printf(" !!!BANG!!!\n\n\n");
                                    printf(" EGALITE !\n\n");
                                    system("pause > nul");
                                }
                                else if (choixObjetOrdi == 3)
                                {
                                    printf(" ORDINATEUR A CHOISI LE CISEAUX !\n\n");
                                    printf(" !!!BANG!!!\n\n\n");
                                    printf(" VOUS AVEZ PERDU !\n\n");
                                    system("pause > nul");
                                    scoreOrdi++;

                                }
                            }

                            if (choixObjet == 3)
                            {

                                int choixObjet = pierre;
                                int pierre = 1;
                                int feuille = 2;
                                int ciseaux = 3;
                                int choixObjetOrdi;

                                srand(time(NULL));
                                choixObjetOrdi = (rand() % (3 - 1 + 1)) + 1;

                                if (choixObjetOrdi == 1)
                                {
                                    printf(" ORDINATEUR A CHOISI LA PIERRE.\n\n");
                                    printf(" !!!BANG!!!\n\n\n");
                                    printf(" VOUS AVEZ PERDU !\n\n");
                                    system("pause > nul");
                                    scoreOrdi++;
                                }
                                else if (choixObjetOrdi == 2)
                                {
                                    printf(" ORDINATEUR A CHOISI LA FEUILLE.\n\n");
                                    printf(" !!!BANG!!!\n\n\n");
                                    printf(" VOUS AVEZ GAGNE !\n\n");
                                    system("pause > nul");
                                    scoreJoueur++;
                                }
                                else if (choixObjetOrdi == 3)
                                {
                                    printf(" ORDINATEUR A CHOISI LE CISEAUX.\n\n");
                                    printf(" !!!BANG!!!\n\n\n");
                                    printf(" EGALITE !\n\n");
                                    system("pause > nul");
                                }

                            }
                        }
                        while (scoreJoueur <= 3 && scoreOrdi <= 3);
                        system("cls");
                        //system("clear"); --> LINUX
                        if(scoreJoueur > 3)
                        {
                            printf("\n %s REMPORTE LA PARTIE ! [ %d - %d ]", nomUtilisateur, scoreJoueur, scoreOrdi);
                            system("pause > nul");
                            //system("") --> LINUX
                        }
                        else if(scoreOrdi > 3)
                        {
                            printf("\n ORDINATEUR REMPORTE LA PARTIE ! [ %d - %d ]", scoreOrdi, scoreJoueur);
                            system("pause > nul");
                        }
                    }

                    if (choixNiveau == 2)
                    {
                        int choixObjet = 0;
                        int pierre = 1;
                        int feuille = 2;
                        int ciseaux = 3;
                        int scoreOrdi = 0;
                        int scoreJoueur = 0;
                        do
                        {


                            system("cls");
                            printf("\n");
                            printf("                    ==============PIERRE FEUILLE CISEAUX============\n");
                            printf(" -------------------------------------------------------------------------------------------\n\n");
                            printf("CHOSIR :\n\n");
                            printf("     [1] = PIERRE\n\n");
                            printf("     [2] = FEUILLE                   ORDINATEUR = %d                 [0] = QUITTER\n\n", scoreOrdi);
                            printf("     [3] = CISEAUX                   %s = %d\n\n", nomUtilisateur, scoreJoueur);
                            printf("\n\n");
                            printf("VOTRE CHOIX ? :");
                            scanf("%d", &choixObjet);


                            printf("\n\n");
                            if (choixObjet == 1)
                            {

                                int choixObjet = pierre;
                                int pierre = 1;
                                int feuille = 2;
                                int ciseaux = 3;
                                int choixObjetOrdi;

                                /*pierre > ciseaux;
                                ciseaux > feuille;
                                feuille > pierre;
                                pierre = pierre;
                                feuille = feuille;
                                ciseaux = ciseaux;*/

                                srand(time(NULL));
                                choixObjetOrdi = (rand() % (2 - 1 + 1)) + 1;

                                if (choixObjetOrdi == 1)
                                {
                                    printf(" ORDINATEUR A CHOISI LA PIERRE !\n\n");
                                    printf(" !!!BANG!!!\n\n\n");
                                    printf(" EGALITE !\n");
                                    system("pause > nul");
                                    scoreJoueur++;
                                    scoreOrdi++;
                                }
                                else if (choixObjetOrdi == 2)
                                {
                                    printf(" ORDINATEUR A CHOISI LA FEUILLE ! \n\n");
                                    printf(" !!!BANG!!!\n\n\n");
                                    printf(" VOUS AVEZ PERDU !\n");
                                    system("pause > nul");
                                    scoreOrdi++;
                                }
                                /* else if (choixObjetOrdi == 3){
                                     printf(" ORDINATEUR A CHOISI LES CISEAUX ! \n\n");
                                 printf(" !!!BANG!!!\n\n\n");
                                     printf(" ORDINATEUR A PERDU, VOUS AVEZ GAGNE !\n\n");
                                 system("pause > nul");
                                scoreJoueur++;
                                 }*/



                            }

                            if (choixObjet == 2)
                            {

                                int choixObjet = pierre;
                                int pierre = 1;
                                int feuille = 2;
                                int ciseaux = 3;
                                int choixObjetOrdi;

                                srand(time(NULL));
                                choixObjetOrdi = (rand() % (2 - 1 + 1)) + 1;

                                /*if (choixObjetOrdi == 1){
                                    printf(" ORDINATEUR A CHOISI LA PIERRE.\n\n");
                                printf(" !!!BANG!!!\n\n\n");
                                    printf(" ORDINATEUR A PERDU, VOUS AVEZ GAGNE !\n\n");
                                system("pause > nul");
                                scoreJoueur++;
                                }*/
                                /* else*/ if (choixObjetOrdi == 1)
                                {
                                    printf(" ORDINATEUR A CHOISI LA FEUILLE.\n\n");
                                    printf(" !!!BANG!!!\n\n\n");
                                    printf(" EGALITE !\n\n");
                                    system("pause > nul");
                                    scoreJoueur++;
                                    scoreOrdi++;
                                }
                                else if (choixObjetOrdi == 2)
                                {
                                    printf(" ORDINATEUR A CHOISI LE CISEAUX !\n\n");
                                    printf(" !!!BANG!!!\n\n\n");
                                    printf(" VOUS AVEZ PERDU !\n\n");
                                    system("pause > nul");
                                    scoreOrdi++;

                                }
                            }

                            if (choixObjet == 3)
                            {

                                int choixObjet = pierre;
                                int pierre = 1;
                                int feuille = 2;
                                int ciseaux = 3;
                                int choixObjetOrdi;

                                srand(time(NULL));
                                choixObjetOrdi = (rand() % (2 - 1 + 1)) + 1;

                                if (choixObjetOrdi == 1)
                                {
                                    printf(" ORDINATEUR A CHOISI LA PIERRE.\n\n");
                                    printf(" !!!BANG!!!\n\n\n");
                                    printf(" VOUS AVEZ PERDU !\n\n");
                                    system("pause > nul");
                                    scoreOrdi++;
                                }
                                /*else if (choixObjetOrdi == 2){
                                    printf(" ORDINATEUR A CHOISI LA FEUILLE.\n\n");
                                printf(" !!!BANG!!!\n\n\n");
                                    printf(" VOUS AVEZ GAGNE ! ORDINATEUR A PERDU !\n\n");
                                system("pause > nul");
                                scoreJoueur++;
                                }*/
                                else if (choixObjetOrdi == 2)
                                {
                                    printf(" ORDINATEUR A CHOISI LE CISEAUX.\n\n");
                                    printf(" !!!BANG!!!\n\n\n");
                                    printf(" EGALITE !\n\n");
                                    system("pause > nul");
                                    scoreJoueur++;
                                    scoreOrdi++;
                                }

                            }
                        }
                        while (scoreJoueur <= 3 && scoreOrdi <= 3);

                        if(scoreJoueur > 3)
                        {
                            printf("\n %s REMPORTE LA PARTIE ! [ %d - %d ]", nomUtilisateur, scoreJoueur, scoreOrdi);
                            system("pause > nul");
                            //system("") --> LINUX
                        }
                        else if(scoreOrdi > 3)
                        {
                            printf("\n ORDINATEUR REMPORTE LA PARTIE ! [ %d - %d ]", scoreOrdi, scoreJoueur);
                            system("pause > nul");
                        }

                    }



                }

                 if (ChoixJeu == 3)
                 {       int retour = 1;
                #define TRUE  1
                #define FALSE 0

                do {

                void dessine_plateau (int plateau[3][3]) {
                 system("cls");
                int i=0,j=0;
                printf ("\n-------\n");
                for (i=0;i<3;i++) {
                   for (j=0;j<3;j++) {
                      printf("|");
                      switch(plateau[i][j]) {
                         case 0:
                            printf(" ");
                            break;
                         case 1:
                            printf("O");
                            break;
                         case 2:
                            printf("X");
                            break;
                      }
                   }
                   printf("|\n");
                   printf("-------\n");
                }
                }
                int fin_jeu (int plateau[3][3]) {
                int i=0,j=0;
                for (i=0;i<3;i++) {
                   for (j=0;j<3;j++) {
                      if (plateau [i][j]==0) {
                         return FALSE;
                      }
                   }
                }
                return TRUE;
                }
                int saisie_donnee (char *invite) {
                int valeur;
                do {
                   printf ("%s", invite);
                   scanf ("%d",&valeur);
                } while (( valeur <1) || (valeur >3));
                return (valeur);
                }
                int gagne (int plateau[3][3]) {
                int i=0;
                // Test sur les lignes
                for ( i=0; i<3; i++) {
                   if (( plateau[i][0] >0) && ( plateau[i][0] == plateau[i][1] ) && ( plateau[i][1] == plateau[i][2] )) {
                      puts ("GAGNE");
                      return TRUE;
                   }
                }
                // Test sur les colonnes
                for ( i=0; i<3; i++) {
                   if (( plateau[0][i] >0) && ( plateau[0][i] == plateau[1][i] ) && ( plateau[1][i] == plateau[2][i] )) {
                      puts ("GAGNE");
                      return TRUE;
                   }
                }
                // Test sur les diagonales
                if (( plateau[0][0] >0) && ( plateau[0][0] == plateau[1][1] ) && ( plateau[1][1] == plateau[2][2] )) {
                   puts ("GAGNE");
                   return TRUE;
                }
                // Test sur les diagonales
                if (( plateau[0][2] >0) && ( plateau[0][2] == plateau[1][1] ) && ( plateau[1][1] == plateau[2][0] )) {
                   puts ("GAGNE");
                   return TRUE;
                }
                return FALSE;
                }
                void jeu (int plateau[3][3], int joueur) {
                int pos_x=0,pos_y=0;
                int correct=FALSE;
                do {
                   printf ("Joueur %d\n",joueur);
                   pos_x= saisie_donnee ("Ligne : ");
                   pos_y= saisie_donnee ("Colonne : ");
                   if ( plateau[pos_x-1][pos_y-1]>0 ) {
                      printf ("Case occupÈe !\n");
                   } else {
                      plateau[pos_x-1][pos_y-1]=joueur;
                      correct=TRUE;
                   }
                }
                while (! correct);
                dessine_plateau (plateau);
                }
                int main () {
                int plateau [3][3];
                int joueur=1;
                // la fonction memset permet d'initialiser chacun
                // des octets d'une zone donnÈe avec une valeur
                // dÈterminÈe (ici: 0)
                memset (plateau, 0, 9*sizeof (int));
                dessine_plateau (plateau);
                do {
                   jeu (plateau, joueur);
                   if ( joueur==1 ) {
                      joueur=2;
                   } else {
                      joueur=1;
                   }
                }
                while (( !gagne (plateau)) && (!fin_jeu (plateau)) );
                return 0;
                }
                 }while (retour > 0);
                 }
            }
            while (ChoixJeu != 0);
        }

        if (choix == 18)
        {

            system("cls");
            printf("\n");
            printf("GEOMETRY 1.0\n\n");

            int GeometryChoice = 0;

            printf(" [1] = DIAMOND\n");
            printf(" [2] = FLOYDS TRIANGLE\n");
            printf(" [3] = NUMBER PYRAMID\n");
            printf(" [4] = PASCAL TRIANGLE\n");
            printf(" [5] = PYRAMID\n\n\n");

            printf("QUE FAIRE ? :");
            scanf("%d", &GeometryChoice);

            if (GeometryChoice == 1)
            {
                int n, c, k, space = 1;

                system ("cls");
                printf("DIAMOND 1.0");
                printf("\n\n");

                printf("ENTRER LE NOMBRE DE LIGNES :");
                scanf("%d", &n);

                space = n - 1;

                for (k = 1; k <= n; k++)
                {
                    for (c = 1; c <= space; c++)
                        printf(" ");

                    space--;

                    for (c = 1; c <= 2 * k - 1; c++)
                        printf("*");

                    printf("\n");
                }

                space = 1;

                for (k = 1; k <= n - 1; k++)
                {
                    for (c = 1; c <= space; c++)
                        printf(" ");

                    space++;

                    for (c = 1; c <= 2 * (n - k) - 1; c++)
                        printf("*");

                    printf("\n");
                }
                system("pause > nul");

            }

            else if (GeometryChoice == 2)
            {
                /*
                1
                2 3
                4 5 6
                7 8 9 10
                11 12 13 14 15
                16 17 18 19 20 21
                22 23 24 25 26 27 28
                */

                int n, i, c, a = 1;

                printf("\n");
                printf("FLOYDS TRIANGLE 1.0\n\n");
                printf("ENTRER LE NOMBRE DE LIGNES DU FLOYDS TRIANGLE A AFFICHER :");
                scanf("%d", &n);

                for (i = 1; i <= n; i++)
                {
                    for (c = 1; c <= i; c++)
                    {
                        printf("%d ", a);
                        a++;
                    }
                    printf("\n");
                }

                system("pause > nul");
            }

            else if(GeometryChoice == 3)
            {
                /*
                     1
                    232
                   34543
                  4567654
                 567898765

                */
                system("cls");

                int n, c, d, num = 1, space;

                system("cls");
                printf("NUMBRE PYRAMID 1.0\n\n");

                printf("ENTRER LE NOMBRE DE LIGNES :");
                scanf("%d", &n);

                space = n - 1;

                for (d = 1; d <= n; d++)
                {
                    num = d;

                    for (c = 1; c <= space; c++)
                        printf(" ");

                    space--;

                    for (c = 1; c <= d; c++)
                    {
                        printf("%d", num);
                        num++;
                    }

                    num--;
                    num--;

                    for (c = 1; c < d; c++)
                    {
                        printf("%d", num);
                        num--;

                    }

                    printf("\n");
                }

                system("pause > nul");
            }

            else if (GeometryChoice == 4)
            {

                /*
                    1
                   1 1
                  1 2 1
                 1 3 3 1

                */
                system("cls");

                int i, j;    // Indices de boucle
                int valeur;    // Valeur du coefficient binomial
                unsigned int nbLignes;    // Nombre de lignes du triangle
                printf("Entrez le nombre de lignes du triangle a afficher : ");
                scanf("%i", &nbLignes);
                printf("\n\n");
                // Traitement d'une ligne
                for (i=0; i<=nbLignes; i++)
                {
                    // Centrage des lignes
                    for(j=1; j<=(nbLignes-i)/2; j++) printf("      ");
                    for(j=1; j<= 3*((i+nbLignes)%2); j++) printf(" ");

                    // Calcul des valeurs de la ligne
                    valeur=1;
                    // La premiËre colonne est gÈrÈe sÈparemment
                    printf("%6i", valeur);
                    // Boucle de la deuxiËme colonne ‡ la fin de la ligne
                    for(j=1; j<=i; j++)
                    {
                        valeur = valeur*(i-j+1)/(j);    // Calcul du coefficient
                        printf("%6i", valeur);
                    }
                    // Nouvelle ligne
                    printf("\n");
                }
                printf("\n");
                system("pause");


            }

            if (GeometryChoice == 5)
            {
                /*
                       *
                      ***
                     *****
                    *******
                   *********

                */

                int row, c, n, temp;

                system("cls");
                printf("PYRAMID 1.0\n\n");

                printf("ENTRER LE NOMBRE DE LIGNES DE PYRAMIDE : ");
                scanf("%d", &n);
                printf("\n\n");
                temp = n;

                for(row = 1; row <= n; row++)
                {
                    for (c = 1; c < temp; c++)
                        printf(" ");

                    temp--;

                    for (c = 1; c <= 2 * row - 1; c++)
                        printf("*");

                    printf("\n");
                }

                system("pause >nul");
            }
        }

        if (choix == 19)
        {
            system("cls");
            printf("TABLES DE MULTIPLICATION :\n\n");

            {
                int num, i = 1;
                printf("\ Entrer le multplicateur : ");
                scanf("%d", &num);
                printf("Table de %d : \n", num);

                while (i <= 10)
                {
                    printf("\n %d x %d = %d", num, i, num * i);
                    i++;
                }
                printf("\n\n");
                system("pause");
            }
        }

        if (choix == 20)
        {
    /*        float parametre1;
            float parametre2;
            int s;
            int e;
            int k;
            int x;

            printf("\n");
            printf("PROBABILITES\n\n");
            printf("\n");
            printf("ENTRER LE PREMIER PARAMETRE : ");
            scanf("%f", &parametre1);
            printf("\n");
            printf("ENTRER LA SECOND PARAMETRE : ");
            scanf("%f", &parametre2);
            printf("\n\n");

                    for(int i=1; i<parametre1; i++)
                    {
                        k = rand() % (1 - 6 + 1) - 1;
                    }
*/
        }

        if (choix == 21)
        {
            int leChoix;

            system("cls");
            //clear
            printf("Bonjour %s\n\n", &nomUtilisateur);
            printf("si vous le voulez bien, afin de contribuer au projet\n");
            printf("vous pouvez entrer vos informations personnelles.\n\n");
            printf(" souhaitez vous le faire %s ?\n\n", &nomUtilisateur);
            printf(" [1] = OUI\n");
            printf(" [2] = NON\n");
            printf(" [3] = CONSULTER MES INFOS\n\n");
            scanf("%d", &leChoix);

            switch (leChoix)
            {
            case 1:
            {
                const char nom[50];
                const char prenom[50];
                const char age[3];
                const char mail[100];
                const char numberPhone[15];
                const char passion[150];
                const char codePostal[500];
                const char aviUser;
                int voirOuPas;
                system("cls");
                //clear
                printf("Entrez votre nom (ex:dubois, joseph_louis) >> ");
                scanf("%s", &nom);
                printf("\n\n");
                printf("Entrez votre prenom (ex:sebastien, jean_eudes) >> ");
                scanf("%s", &prenom);
                printf("\n\n");
                printf("Entrez votre age (ex:20) >> ");
                scanf("%s", &age);
                printf("\n\n");
                printf("Entrez votre adresse Email (ex:joseph_louis_lagrange@mail.fr) >> ");
                scanf("%s", &mail);
                printf("\n\n");
                printf("Entrez votre numero de telephone (ex:06-11-22-25-12) >> ");
                scanf("%s", &numberPhone);
                printf("\n\n");
                printf("Entrez votre code postal (ex:94223) >> ");
                scanf("%s", &codePostal);
                printf("\n\n");
                printf("Definissez en un ou deux mots votre passion (ex:informatique) >> ");
                scanf("%s", &passion);
                printf("\n\n");
                printf("Enfin, aimez vous l'utilisation de cet Algorithme ? \n\n");
                printf(" ([1] = OUI /  [2] = NON)\n\n");
                printf(" >> ");
                scanf("%d", &aviUser);
                printf("\n\n");
                printf("Ca y est ! merci d'avoir contribue a l'amelioration de l'Algorithme %s %s!\n", prenom, nom);
                system("pause");
                printf("\n");
                system("cls");
                printf("Souhaitez vous consulter vos informations ?\n\n");
                printf(" [1] = OUI\n");
                printf(" [2] = NON\n");
                printf(" >> ");
                scanf("%d", &voirOuPas);
                if (voirOuPas == 1)
                {
                    system("cls");
                    printf("\n");
                    printf(" NOM : %s\n\n", &nom);
                    printf(" PREMNOM : %s\n\n", &prenom);
                    printf(" AGE : %s\n\n", &age);
                    printf(" ADRESSE EMAIL : %s\n\n", &mail);
                    printf(" TELEPHONE : %s\n\n", &numberPhone);
                    printf(" CODE POSTAL : %s\n\n", &codePostal);
                    printf(" PASSION : %s\n\n", &passion);
                    printf(" AVIS ALGORITHME : ");
                    if (aviUser == 1)
                    {
                        printf(" OUI, VOUS AVEZ AIME (MERCI !)\n\n");
                    }
                    else if (aviUser == 2)
                    {
                        printf(" NON, VOUS N'AVEZ PAS AIME. (et c'est bien dommage !) \n\n");
                    }
                    system("pause > nul");
                }
                else if (voirOuPas == 2)
                {
                    printf(" \n");
                    printf(" D'accord %s, vous allez etre redirige vers le menu principal.\n\n", &nomUtilisateur);
                    system("pause");
                }
                break;
            }
            case 2:
            {
                system("cls");
                printf("Tres bien, vous allez etre redigire vers le menu principal %s\n\n", &nomUtilisateur);
                system("pause");
                break;
            }
            }
        }

        if (choix == 00)
        {
            printf("Process returned 0(0x0)   execution time : ?????\n");
            printf("Press any key to continue.");
            system("pause > nul");
        }
        if (choix > 99999)
        {
            system("cls");
            system("color 9f");

            printf("\n\n");
            printf("######################################################################################\n");
            printf("-------------- Build: Release in calculator (compiler: GNU GCC Compiler)---------------\n");
            printf("mingw32-gcc.exe -Wall -O2  -c C:\ users\SÈbastien\Desktop\calculator\main.c -o obj\Release\main.o\n");
            printf("C:\ users\SÈbastien\Desktop\calculator\main.c: In function 'main':\n");
            printf("C:\ users\SÈbastien\Desktop\calculator\main.c:249:19: warning: unused variable 'DeltaA2' [-Wunused-variable]\n");
            printf("C:\ users\SÈbastien\Desktop\calculator\main.c:248:19: warning: unused variable 'DeltaB2' [-Wunused-variable]\n");
            printf("C:\ users\SÈbastien\Desktop\calculator\main.c:274:11: warning: unused variable 'moinsB' [-Wunused-variable]\n");
            printf("C:\ users\SÈbastien\Desktop\calculator\main.c:273:11: warning: unused variable 'deuxA' [-Wunused-variable]\n");
            printf("C:\ users\SÈbastien\Desktop\calculator\main.c:213:15: warning: unused variable 'resC' [-Wunused-variable]\n");
            printf("C:\ users\SÈbastien\Desktop\calculator\main.c:212:15: warning: unused variable 'resB' [-Wunused-variable]\n");
            printf("C:\ users\SÈbastien\Desktop\calculator\main.c:211:15: warning: unused variable 'resA' [-Wunused-variable]\n");
            printf("C:\ users\SÈbastien\Desktop\calculator\main.c:400:19: warning: unused variable 'vfmoinsvi' [-Wunused-variable]\n");
            printf("C:\ users\SÈbastien\Desktop\calculator\main.c:454:23: warning: unused variable 'percenter_moins' [-Wunused-variable]\n");
            printf("C:\ users\SÈbastien\Desktop\calculator\main.c:453:23: warning: unused variable 'percenter_plus' [-Wunused-variable]\n");
            printf("C:\ users\SÈbastien\Desktop\calculator\main.c:482:23: warning: unused variable 'percenter_moins' [-Wunused-variable]\n");
            printf("C:\ users\SÈbastien\Desktop\calculator\main.c:481:23: warning: unused variable 'percenter_plus' [-Wunused-variable]\n");
            printf("C:\ users\SÈbastien\Desktop\calculator\main.c:751:23: warning: unused variable 'a' [-Wunused-variable]\n");
            printf("C:\ users\SÈbastien\Desktop\calculator\main.c:1308:12: warning: format '%f' expects a matching 'double' argument [-Wformat]\n");
            printf("C:\ users\SÈbastien\Desktop\calculator\main.c:1308:12: warning: format '%f' expects a matching 'double' argument [-Wformat]\n");
            printf("C:\ users\SÈbastien\Desktop\calculator\main.c:1297:18: warning: variable 'resultat' set but not used [-Wunused-but-set-variable]\n");
            printf("C:\ users\SÈbastien\Desktop\calculator\main.c:1330:5: warning: format '%f' expects argument of type 'double', but argument 2 has type 'int' [-Wformat]\n");
            printf("C:\ users\SÈbastien\Desktop\calculator\main.c:1332:5: warning: format '%f' expects a matching 'double' argument [-Wformat]\n");
            printf("C:\ users\SÈbastien\Desktop\calculator\main.c:1333:12: warning: unknown escape sequence: '\040' [enabled by default]\n");
            printf("C:\ users\SÈbastien\Desktop\calculator\main.c:1334:5: warning: format '%f' expects a matching 'double' argument [-Wformat]\n");
            printf("C:\ users\SÈbastien\Desktop\calculator\main.c:1344:1: warning: control reaches end of non-void function [-Wreturn-type]\n");
            printf("mingw32-g++.exe  -o bin\Release\calculator.exe obj\Release\main.o  -s\n");
            printf("Output file is bin\Release\calculator.exe with size 27.50 KB\n");
            printf("Process terminated with status 0 (0 minute(s), 2 second(s))\n");
            printf("1 error(s), 21 warning(s) (0 minute(s), 2 second(s))\n");

            printf("######################################################################################\n");


            printf("Process returned 0(0x0)   execution time : ?????\n");
            printf("Press any key to continue.");
            system("pause > nul");
        }
    }
    while (choix < 999999);
}


