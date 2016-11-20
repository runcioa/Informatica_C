/* Visulaizzazione numeri ISBN */

#include<stdio.h>

int main(void)
{
    int gs1Prefix, groupIdentifier, publisherCode, itemNumber, checkDigit;



    printf("Inserire codice ISBN con trattini XXX-X-XXX-XXXXX-X: ");
    scanf("%d-%d-%d-%d-%d", &gs1Prefix, &groupIdentifier, &publisherCode, &itemNumber, &checkDigit);
    
    printf("GS1 prefix: %d", gs1prefix);



}
