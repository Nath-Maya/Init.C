#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//? SIMULACION SISTEMA DE INVENTARIO EN UN ALMACEN


// ESTRUCTURA DEFINICA COMO PRODUCTO
typedef struct {
    int id;
    char nombre[30];
    int cantidad;
    float precio;
} Producto;

// FUNCION AGREGAR PRODUCTO
void agregarProducto(Producto** inventario, int* tamanio, int id, const char* nombre, int cantidad, float precio) {
    
    *inventario = realloc(*inventario, (*tamanio + 1) * sizeof(Producto));

    // ADD PRODUCT
    (*inventario)[*tamanio].id = id;
    strncpy((*inventario)[*tamanio].nombre, nombre, 30);
    (*inventario)[*tamanio].cantidad = cantidad;
    (*inventario)[*tamanio].precio = precio;

    (*tamanio)++;
    printf("Producto agregado al inventario.\n");
}

// UPDATE PRODUCT
void actualizarProducto(Producto* inventario, int tamanio, int id, int cantidad, float precio) {
    for (int i = 0; i < tamanio; i++) {
        if (inventario[i].id == id) {
            inventario[i].cantidad = cantidad;
            inventario[i].precio = precio;
            printf("Producto actualizado.\n");
            return;
        }
    }
    printf("Producto no encontrado.\n");
}

// DELETE PRODUCT
void eliminarProducto(Producto** inventario, int* tamanio, int id) {
    int encontrado = 0;
    for (int i = 0; i < *tamanio; i++) {
        if ((*inventario)[i].id == id) {
            encontrado = 1;
            
            for (int j = i; j < *tamanio - 1; j++) {
                (*inventario)[j] = (*inventario)[j + 1];
            }
            *tamanio -= 1;
            *inventario = realloc(*inventario, (*tamanio) * sizeof(Producto));
            if (*inventario == NULL && *tamanio > 0) {
                printf("Error al reasignar memoria.\n");
            }
            printf("Producto eliminado.\n");
            break;
        }
    }
    if (!encontrado) {
        printf("Producto no encontrado.\n");
    }
}

// MOSTRAR ARREGLO
void mostrarInventario(Producto* inventario, int tamanio) {
    if (tamanio == 0) {
        printf("El inventario está vacío.\n");
        return;
    }
    for (int i = 0; i < tamanio; i++) {
        printf("ID: %d, Nombre: %s, Cantidad: %d, Precio: %.2f\n",
               inventario[i].id, inventario[i].nombre, inventario[i].cantidad, inventario[i].precio);
    }
}

// MENU
void menu() {
    printf("1 Agregar Producto\n");
    printf("2 Actualizar Producto\n");
    printf("3 Eliminar Producto\n");
    printf("4 Mostrar Inventario\n");
    printf("5 Salir\n");
}

int main() {
    Producto* inventario = NULL;
    int tamanio = 0;
    int opcion;

    while (1) {
        menu();
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            int id, cantidad;
            char nombre[30];
            float precio;
            printf("Ingrese ID del producto: ");
            scanf("%d", &id);
            printf("Ingrese nombre del producto: ");
            getchar(); // Limpiar el buffer de entrada
            fgets(nombre, 30, stdin);
            nombre[strcspn(nombre, "\n")] = 0; // Eliminar el salto de línea
            printf("Ingrese cantidad: ");
            scanf("%d", &cantidad);
            printf("Ingrese precio: ");
            scanf("%f", &precio);
            agregarProducto(&inventario, &tamanio, id, nombre, cantidad, precio);
        }
        else if (opcion == 2) {
            int id, cantidad;
            float precio;
            printf("Ingrese ID del producto a actualizar: ");
            scanf("%d", &id);
            printf("Ingrese nueva cantidad: ");
            scanf("%d", &cantidad);
            printf("Ingrese nuevo precio: ");
            scanf("%f", &precio);
            actualizarProducto(inventario, tamanio, id, cantidad, precio);
        }
        else if (opcion == 3) {
            int id;
            printf("Ingrese ID del producto a eliminar: ");
            scanf("%d", &id);
            eliminarProducto(&inventario, &tamanio, id);
        }
        else if (opcion == 4) {
            mostrarInventario(inventario, tamanio);
        }
        else if (opcion == 5) {
            printf("Saliendo...\n");
            break;
        }
        else {
            printf("Opción inválida, intente nuevamente.\n");
        }
    }

    // Liberar la memoria al finalizar el programa
    free(inventario);
    return 0;
}

Explicame por favor paso a paso