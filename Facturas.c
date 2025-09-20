

#include <stdio.h> 

int main() {
    int opcion;
    float total = 0;

    printf("****** SELECCIONE SU MENU *******\n");
    printf("1. Productos postobon        -3000 COP\n");
    printf("2. Cocacola orginal          -4000 COP\n");
    printf("3. Mr. tee limon             -3800 COP\n");
    printf("4. Mr. Durazno               -3800 COP\n");
    printf("5. Agua                      -4000 COP\n");
    printf("6. Agua con gas              -4200 COP\n");
    printf("7. Pizza Mediana             -22000 COP\n");
    printf("8. Pizza Grande              -38000 COP\n");
    printf("9. Piza Extra Grande         -52000 COP\n");
    printf("10. Borde Queso              -5000 COP\n");
    printf("11. Addicional Jamon serrano -9000 COP\n");
    printf("12. Borde bocadillo          -5000 COP\n");
    printf("13. Domicilio                -6000 COP\n");
    printf("0. Finalizar pedido\n");

    do {
        printf("\n Seleccione su pedido (0 para finalizar): ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                total += 3000;
                printf("Agregaste un producto postobon\n");
                break;


            case 2:
                total += 4000;
                printf("Agregaste Cocacola original\n");
                break;


            case 3:
                total += 3800;
                printf("Agregaste Mr. tee de limon\n");
                break;

 
            case 4:
                total += 3800;
                printf("Agregaste Mr. tee de durazno\n");
                break;


            case 5:
                total += 4000;
                printf("Agregaste agua\n");
                break;


            case 6:
                total += 4200;
                printf("Agregaste agua con gas\n");
                break;

            case 7:
                total += 22000;
                printf("Agregaste pizza mediana\n");
                break;


            case 8:
                total += 38000;
                printf("Agregaste pizza grande\n");
                break;


            case 9:
                total += 52000;
                printf("Agregaste pizza extra gande\n");
                break;

            case 10:
                total += 5000;
                printf("Agregaste borde queso\n");
                break;

            case 11:
                total += 12000;
                printf("Agregaste adicional jamon serrano\n");
                break;


            case 12:
                total += 5000;
                printf("Agregaste borde de bocadillo\n");
                break;


            case 13:
                total += 6000;
                printf("Agregaste domicilio\n");
                break;

            case 0:
                printf("Finalización de pedido\n");
                break;

            default:
                printf("Opcion no váalida. Digite de nuevo.\n");
        
        }

    } while (opcion != 0);

    printf("\n****** Factura total ****** \n");
    printf("Total a pagar: $%.2f\n", total);
    printf("¡Gracias por tu compra!\n");
    
    return 0;

}