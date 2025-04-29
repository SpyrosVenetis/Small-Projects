#include <stdio.h>

int main()
{
    int x,y,j,k,p;
    float p_dier,x2,y2,j2,k2;
    x2=10.0;
    y2=15.0;
    x=10;
    y=15;
        p=x*y;
        printf("Ο πολαπλασιασμος του x,y ειναι %d \n",p);                       /*Κανει πραξεις πολαπασιασμου, προσθεσης, αφερεσης, διαιρεσης και βρησκει την δυναμη με τον x και τον y */
        p=x+y;
        printf("Η προσθεση του x,y ειναι %d \n",p);                             
        p=x-y;
        printf("Η αφερεση του x,y ειναι %d \n",p);
        p_dier=x2/y2;
        printf("Η διαιρεση του x,y ειναι %f \n",p_dier);
        p=pow(x,y);
        printf("Η δυναμη του x,y ειναι %d \n",p);
    j2=25.0;
    k2=30.0;
    j=25;
    k=30;
        p=j*k;
        printf("Ο πολαπλασιασμος του j,k ειναι %d \n",p);                       // κανει το ιδιο πραγμα αλλα με τον j και τον k
        p=j+k;
        printf("Η προσθεση του j,k ειναι %d \n",p);
        p=j-k;
        printf("Η αφερεση του j,k ειναι %d \n",p);
        p_dier=j2/k2;
        printf("Η διαιρεση του j,k ειναι %f \n",p_dier);
        p=pow(j,k);
        printf("Η δυναμη του j,k ειναι %d \n",p);
    return 0;
}