#include <stdio.h>

// Un supermercado ha puesto en oferta la venta al por mayor de cierto
// producto, ofreciendo un descuento del 15% por la compra de más de 3
// docenas y 10% en caso contrario.
// 5. Al punto anterior, por la compra de más de 3 docenas se obsequia una
// unidad del producto por cada docena adicional. Determine el monto de la
// compra, el monto del descuento, el monto a pagar y el número de unidades
// de obsequio por la compra de cierta cantidad de docenas del producto

int main() {
    int dozens, total_units, free_units = 0;
    float price_per_dozen, total_price, discount = 0, final_price;

    printf("Ingrese el precio por docena: ");
    scanf("%f", &price_per_dozen);

    printf("Ingrese la cantidad de docenas compradas: ");
    scanf("%d", &dozens);

    total_units = dozens * 12;
    total_price = dozens * price_per_dozen;

    if (dozens > 3) {
        discount = total_price * 0.15;
        free_units = (dozens - 3);
    } else {
        discount = total_price * 0.10;
    }

    final_price = total_price - discount;

    printf("El monto de la compra es: %.2f\n", total_price);
    printf("El monto del descuento es: %.2f\n", discount);
    printf("El monto a pagar es: %.2f\n", final_price);
    printf("La cantidad de unidades de obsequio es: %d\n", free_units);

    return 0;
}
