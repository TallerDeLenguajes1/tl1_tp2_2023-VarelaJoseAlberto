#include <stdio.h>
#include <stdlib.h>
// Definicion de la estructura PC
struct compu {
    int velocidad;   // entre 1 y 3 GHz
    int anio;        // entre 2015 y 2023
    int cantidad;    // entre 1 y 8
    char *tipo_cpu;  // valores del arreglo tipos
};

// Declaro las funciones
struct compu cargar();
void mostrarLista(struct compu pcs);
void computadoraVieja(struct compu pcs[5]);
void computadoraVeloz(struct compu pcs[5]);

int main() {
    // Definicion del arreglo de estructuras para 5 PC
    struct compu pcs[5];

    // Carga de datos de las 5 PC
    for (int i = 0; i < 5; i++) {
        pcs[i] = cargar();
    }
    // Muestro las PC generadas random
    printf("Datos de las 5 PC:\n");
    for (int i = 0; i < 5; i++) {
        printf("\t\t\t ^^^^^^^^^^^^^^^^^^^ COMPUTADORA NUMERO %d ^^^^^^^^^^^^^^^^^^^ \n", i + 1);
        mostrarLista(pcs[i]);
    }

    // Muestro la PC mas vieja y mas velocidad
    printf("\t\t\t ^^^^^^^^^^^^^^^^^^^ COMPUTADORA MAS VIEJA ^^^^^^^^^^^^^^^^^^^ \n");
    computadoraVieja(pcs);
    printf("\t\t\t ^^^^^^^^^^^^^^ COMPUTADORA CON MAS VELOCIDAD ^^^^^^^^^^^^^^^ \n");
    computadoraVeloz(pcs);

    return 0;
}

struct compu cargar() {
    struct compu aux;
    char *tipos[6] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    int rand();
    // Genero los datos random
    aux.velocidad = rand() % 4;
    aux.anio = rand() % 8 + 2015;
    aux.tipo_cpu = tipos[rand() % 6];
    aux.cantidad = rand() % 8 + 1;
    return aux;
}

void mostrarLista(struct compu pcs) {
    // Imprimo los datos de las 5 PC
    printf("\t\t\t\t Tipo de procesador es: %s\n", pcs.tipo_cpu);
    printf("\t\t\t\t Cantidad de nucleos(entre 1 y 8): %d\n", pcs.cantidad);
    printf("\t\t\t\t Velocidad de procesamiento en GHz(entre 1 y 3): %d\n", pcs.velocidad);
    printf("\t\t\t\t Anio de fabricacion(entre 2015 y 2023): %d\n", pcs.anio);
    printf("\n\n");
}

void computadoraVieja(struct compu pcs[5]) {
    struct compu aux = pcs[0];
    for (int i = 0; i < 5; i++) {
        if (aux.anio > pcs[i].anio) {
            aux = pcs[i];
        }
    }

    printf("\t\t\t\t Anio de fabricacion: %d\n", aux.anio);
    printf("\t\t\t\t Tipo de procesador es: %s\n", aux.tipo_cpu);
    printf("\t\t\t\t Cantidad de nucleos(entre 1 y 8): %d\n", aux.cantidad);
    printf("\t\t\t\t Velocidad de procesamiento en GHz: %d\n", aux.velocidad);
    printf("\n\n");
}

void computadoraVeloz(struct compu pcs[5]) {
    struct compu aux = pcs[0];
    for (int i = 0; i < 5; i++) {
        if (aux.velocidad < pcs[i].velocidad) {
            aux = pcs[i];
        }
    }
    printf("\t\t\t\t Velocidad de procesamiento en GHz: %d\n", aux.velocidad);
    printf("\t\t\t\t Tipo de procesador es: %s\n", aux.tipo_cpu);
    printf("\t\t\t\t Cantidad de nucleos: %d\n", aux.cantidad);
    printf("\t\t\t\t Anio de fabricacion: %d\n", aux.anio);
    printf("\n\n");
}