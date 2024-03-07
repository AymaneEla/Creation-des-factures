#include <stdio.h>
#include <stdlib.h>
//montant de la Tva
float calculerTVA(float totalHt, float tauxTva){
    return totalHt * tauxTva /100.0;
}

// Total TTC
float claculerTotaleTtc(float totalHt, float montantTva){
    return totalHt + montantTva;
}

int main()
{
    char nomClient[50];
    char article[3][50];
    float prixArticle[3];
    float totalHt = 0.0;
    float tauxTva = 20.0;
    float montantTva;
    float totalTtc;
    char modePaiement[20];
    // nom du Client
    printf("Nom du client : ");
    scanf("%s", nomClient);
     //articles
     for (int i = 0; i < 3; ++i){
        printf("Nom de larticle %d : ", i+1);
        scanf("%s",article[i]);
        printf("Prix de larticle %d : ", i+1);
        scanf("%f", &prixArticle[i]);
        totalHt += prixArticle[i];
     }
    // calcul montants

     montantTva = calculerTVA(totalHt, tauxTva);
     totalTtc = claculerTotaleTtc(totalHt, montantTva);

     // Le mode de paiment
     printf("Mode de paiement : ");
     scanf("%s", modePaiement);

     // Affichage de la facture
     printf("\n----------Facture--------\n");
     printf("Nom du client : %s\n", nomClient);
     printf("Articles : \n");

     for (int i=0; i < 3; ++i){
        printf("- %s : %.2f\n", article[i], prixArticle[i]);
     }

     printf("Totale Ht : %.2f\n", totalHt);
     printf("Taux de TVA : %.2f%%\n", tauxTva);
     printf("Montant TVA : %.2f\n", montantTva);
     printf("Totale TTC : %.2f\n", totalTtc);
     printf("Mode de Paiment : %s\n", modePaiement);

    return 0;
}
