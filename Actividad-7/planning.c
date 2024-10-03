#include <stdio.h>


int calculateCuts(int paperSize, int cutSize);
float calculateWaste(int widePaper, int longPaper, int wideCut, int longCut);

int main() {
    int widePaper, wideCut, longPaper, longCut;
    int totalCuts;
    float waste;

    printf("CALCULADOR DE CORTE\n");
    printf("Indique el tamaño de pliego que desea usar: \n");

    printf("Ancho Papel: ");
    scanf("%d", &widePaper);

    printf("Largo Papel: ");
    scanf("%d", &longPaper);

    printf("Indique el tamaño al cual quiere cortar el pliego: \n");

    printf("Cortar Ancho de Papel a: ");
    scanf("%d", &wideCut);

    printf("Cortar Largo de Papel a: ");
    scanf("%d", &longCut);

    
    totalCuts = calculateCuts(widePaper, wideCut) * calculateCuts(longPaper, longCut);

    
    waste = calculateWaste(widePaper, longPaper, wideCut, longCut);

    
    printf("\nResultados:\n");
    printf("Número de cortes posibles: %d\n", totalCuts);
    printf("Porcentaje de desperdicio: %.2f%%\n", waste);

    return 0;
}


int calculateCuts(int paperSize, int cutSize) {
    return paperSize / cutSize;
}


float calculateWaste(int widePaper, int longPaper, int wideCut, int longCut) {
    float totalArea = widePaper * longPaper;
    float usedArea = (calculateCuts(widePaper, wideCut) * wideCut) * 
                     (calculateCuts(longPaper, longCut) * longCut);
    float wastedArea = totalArea - usedArea;
    
    
    return (wastedArea / totalArea) * 100;
}
