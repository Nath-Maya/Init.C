#include <stdio.h>

// Haga un programa para vender 10 productos en una tienda. Por ejemplo, en
// una tienda de 3 producto hay leche ($1000), Huevos ($350), Pan ($500).
// Simule un pedido, por ejemplo 3 de leche, 3 huevos y 2 panes. Con esas
// cantidades, calcule la factura del cliente mostrando el detalle
// 3*Leche*1000= 3000 + 3*Huevos*350 = 1050 + 2*Pan*500 = 1000 = 5050
// Reciba varios clientes y al final haga el
// cierre de caja.
// Entregar las devueltas al usuario, pida al
// usuario la denominación del billete (o monedas) y entregue al usuario la
// devuelta usando denominaciones reales. Suponga que al iniciar tiene 10
// billetes o monedas de cada denominación.
// Determinar cuanto queda en caja y con
// que denominación.

int main() {
    char *productos[] = {"Leche", "Huevos", "Pan"};
    int precios[] = {1000, 350, 500};
    int cantidades[3] = {0};
    int totalCaja = 0;
    int seguir = 1;
    int billetes[6] = {10000, 5000, 2000, 1000, 500, 100};
    int cantidadBilletes[6] = {10, 10, 10, 10, 10, 10};

    while (seguir) {
        for (int i = 0; i < 3; i++) {
            printf("Cuantas %s? ", productos[i]);
            scanf("%d", &cantidades[i]);
        }

        int totalFactura = 0;
        printf("Factura:\n");
        for (int i = 0; i < 3; i++) {
            totalFactura += cantidades[i] * precios[i];
            printf("%d * %s * %d = %d\n", cantidades[i], productos[i], precios[i], cantidades[i] * precios[i]);
        }
        printf("Total: %d\n", totalFactura);

        printf("Pago: ");
        int pago;
        scanf("%d", &pago);
        int devuelta = pago - totalFactura;

        if (devuelta >= 0) {
            printf("Devuelta: %d\n", devuelta);
            for (int i = 0; i < 6; i++) {
                while (devuelta >= billetes[i] && cantidadBilletes[i] > 0) {
                    devuelta -= billetes[i];
                    cantidadBilletes[i]--;
                    printf("Entregando billete de %d\n", billetes[i]);
                }
            }
            totalCaja += totalFactura;
        } else {
            printf("No es suficiente dinero.\n");
        }

        printf("¿Desea otro pedido? (1: Si, 0: No): ");
        scanf("%d", &seguir);
    }

    printf("Cierre de caja: Total en caja: %d\n", totalCaja);
    for (int i = 0; i < 6; i++) {
        printf("Billetes de %d: %d\n", billetes[i], 10 - cantidadBilletes[i]);
    }

    return 0;
}
