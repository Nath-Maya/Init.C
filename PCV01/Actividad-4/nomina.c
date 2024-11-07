#include <stdio.h>

#define SALARIO_MINIMO 1300000 
#define NUM_EMPLEADOS 5        
#define DIAS_SEMANA 7         

int main() {

    char* nombres[NUM_EMPLEADOS] = {"Carlos", "Juan", "Felipe", "Yadira", "Carolina"};
    
    // HORAS EXTRAS POR CADA EMPLEADO
    int horas_extras[NUM_EMPLEADOS][DIAS_SEMANA] = {
        {0, 0, 0, 0, 5, 2, 1}, 
        {1, 2, 0, 0, 4, 3, 0}, 
        {0, 1, 1, 0, 0, 0, 8}, 
        {3, 3, 2, 1, 0, 0, 0},
        {2, 0, 1, 0, 0, 0, 0}  
    };
   
    // ARREGLO PARA ALMACENAR PAGOS SEMANALES
    float pagos[NUM_EMPLEADOS]; 

    // PAGOS SEMANALES
    for (int i = 0; i < NUM_EMPLEADOS; i++) {
        pagos[i] = SALARIO_MINIMO; 

        // SUMAR HORAS EXTRAS AL PAGO
        for (int j = 0; j < DIAS_SEMANA; j++) {
            pagos[i] += horas_extras[i][j] * 50;
        }
    }

    // PAGO DE CADA EMPLEADO
    printf("Pagos semanales:\n");
    for (int i = 0; i < NUM_EMPLEADOS; i++) {
        printf("%s: $%.2f\n", nombres[i], pagos[i]);
    }

    // EL EMPLEADO QUE MÁS GANA
    float max_pago = pagos[0];
    int index_max = 0;

    for (int i = 1; i < NUM_EMPLEADOS; i++) {
        if (pagos[i] > max_pago) {
            max_pago = pagos[i];
            index_max = i;
        }
    }

    printf("El empleado que MAS  gana a la semana es: %s PAGO de $%.2f\n", nombres[index_max], max_pago); 
    // SUMAR HORAS EXTRAS 
    int suma_horas_extras = 0;
    for (int i = 0; i < NUM_EMPLEADOS; i++) {
        suma_horas_extras += horas_extras[i][4]; 
        suma_horas_extras += horas_extras[i][6]; 
    }

    printf("Total Horas extras trabajadas el viernes y domingo: %d\n", suma_horas_extras);

    // DÍAS CON MAYOR Y MENOR HORAS EXTRAS TRABAJADAS
    int max_horas = 0, min_horas = 0;
    int dia_max = 0, dia_min = 0;

    for (int j = 0; j < DIAS_SEMANA; j++) {
        int total_horas = 0;
        for (int i = 0; i < NUM_EMPLEADOS; i++) {
            total_horas += horas_extras[i][j];
        }

        if (j == 0 || total_horas > max_horas) {
            max_horas = total_horas;
            dia_max = j;
        }
        if (j == 0 || total_horas < min_horas) {
            min_horas = total_horas;
            dia_min = j;
        }
    }

    const char* dias[] = {"Lunes", "Martes", "Miércoles", "Jueves", "Viernes", "Sábado", "Domingo"};
    printf("Dia con más horas extras: %s\n", dias[dia_max]);
    printf("Di con menos horas extras: %s\n", dias[dia_min]);

    // PROMEDIO GENERAL DE HORAS EXTRAS DURANTE LA SEMANA
    int total_horas_extras = 0;
    for (int i = 0; i < NUM_EMPLEADOS; i++) {
        for (int j = 0; j < DIAS_SEMANA; j++) {
            total_horas_extras += horas_extras[i][j];
        }
    }
    float promedio_horas = (float)total_horas_extras / (NUM_EMPLEADOS * DIAS_SEMANA);
    printf("Promedio general de horas extras durante la semana: %.2f\n", promedio_horas);

    return 0;
}
