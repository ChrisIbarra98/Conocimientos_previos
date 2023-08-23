 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 #include<conio.h>

 struct datos{
                                char artista[30],album[30];
                                int codigo,no_canciones,existencias;
                                float precio;
}CD[50];
int c=0,i,caux,aux,verdad,pos;

void agregar()
{
    fflush(stdin);
    printf("\n\tArtista:  ");
    gets(CD[c].artista);
    printf("\n\tAlbum:\t");
    gets(CD[c].album);
    printf("\n\tNumero de Canciones:\t");
    scanf("%d",&CD[c].no_canciones);
    fflush(stdin);
    printf("\n\tPrecio: %c",36);
    scanf("%f",&CD[c].precio);
    printf("\n\tExistencias: ");
    scanf("%d",&CD[c].existencias);
    printf("\n\n\tRegistro exitoso.");
    getch();
}

void mostrar()
{
    system("cls");
    printf("\t* Mostrar CDs  *");
    if(c>0){
    for(i=0;i<c;i++)
    {
        fflush(stdin);
        printf("\n\n\tCodigo No.%d",CD[i].codigo);
        printf("\n\t  Artista:\t\t\t%s",CD[i].artista);
        printf("\n\t  Album:\t\t\t%s",CD[i].album);
        printf("\n\t  N%cmero de canciones:\t%d",163,CD[i].no_canciones);
        printf("\n\t  Precio:\t\t%.2f",CD[i].precio);
        printf("\n\t  Existencias:\t\t%d",CD[i].existencias);
    }
    }else
    {
        printf("\n\n\tNo existen CDs registrados.");
    }
    getch();
}

void buscar()
{
    printf("\n\n\tIngresa el c%cdigo:\t",162);
    fflush(stdin);
    scanf("%d",aux);
    for(i=0;i<c;i++)
    {
        if(aux==CD[i].codigo)
            {
               verdad=1;
               pos=i;
            }
     }
}

int main()
{
    int opcion;
    do
    {
    fflush(stdin);
    system("cls");
    printf("Men%c\n",163);
    printf("Seleccione la opci%cn de lo que desea hacer.\n",162);
    printf("1) Agregar CD.\n");
    printf("2) Mostrar todos los CD.\n");
    printf("3) Buscar por c%cdigo.\n",162);
    printf("4) Modificar.\n");
    printf("5) Realizar una venta.\n");
    printf("6) Salir.\n");
    printf("\n\nOpci%cn:\t",162);
    scanf("%i",&opcion);

    switch(opcion)
    {
    case 1:
        {
            system("cls");
            printf("\t* Agregar CD *");
             if(c<49)
            {
                agregar();
                CD[c].codigo=c+1;
                c++;
            } else
            {
                printf("\n\n\tYa no se pueden agregar m%cs CDs.",160);
                getch();
            }
                break;
        }
    case 2:
        {
            mostrar();
            break;
        }
    case 3:
        {
             system("cls");
             printf("\t* Buscar CD *");
             if(c>0)
             {
             buscar();
             if(verdad==1)
            {
            printf("\n\n\n\tS%c se encontr%c el CD",161,162);
            printf("\n\n\t  Artista:\t%s",CD[pos].artista);
            printf("\n\t  Album:\t%s",CD[pos].album);
            printf("\n\t  N%cmero de canciones:\t%d",163,CD[pos].no_canciones);
            printf("\n\t  Precio:\t\t%.2f",CD[pos].precio);
            printf("\n\t  Existencias:\t\t%d",CD[pos].existencias);
        }
        else
        {
            printf("\n\tNo se encontr%c el CD.",162);
        }
        verdad=0;
        pos=0;
        }else
        {
            printf("\n\tNo existen CDs registrados.");
        }
        getch();
            break;
        }
    case 4:
        {
             system("cls");
             if(c>0)
             {
                 buscar();
                 if(verdad==1)
                 {
                    printf("\n\n\n\tS%c se encontr%c el CD",161,162);
                    printf("\n\n\t  Artista:\t%s",CD[pos].artista);
                    printf("\n\t  Album:\t%s",CD[pos].album);
                    printf("\n\t  N%cmero de canciones:\t%d",163,CD[pos].no_canciones);
                    printf("\n\t  Precio:\t\t%.2f",CD[pos].precio);
                    printf("\n\t  Existencias:\t\t%d",CD[pos].existencias);
                    getch();
                    caux=c;
                    c=pos;
                    agregar();
                    c=caux;
                 }
                else
                {
                    printf("\n\tNo se encontr%c el CD",162);
                }
                verdad=0;
                pos=0;
             }else
             {
                 printf("\n\tNo existen CDs registrados.");
             }
            getch();
                break;
        }
     case 5:
        {
             system("cls");
             printf("\t* Vender CD *");
             if(c>0)
             {
                if(verdad==1)
                {
                    printf("\n\n\tCodigo No.%d",CD[pos].codigo);
                    printf("\n\t  Artista:\t%s",CD[pos].artista);
                    printf("\n\t  Album:\t%s",CD[pos].album);
                    printf("\n\t  N%cmero de canciones:\t%d",163,CD[pos].no_canciones);
                    printf("\n\t  Precio:\t\t%.2f",CD[pos].precio);
                    printf("\n\t  Existencias:\t\t%d",CD[pos].existencias);
                    if(CD[pos].existencias>0)
                    {
                        printf("\n\n\tVenta realizada.");
                        CD[pos].existencias--;
                    }else
                    {
                       printf("\n\n\tCD agotado.");
                    }
                } else
                {
                    printf("\n\tNo se escontr%c el CD.",162);
                }

             } else
             {
                 printf("\n\tNo existen CDs registrados.");
             }
            getch();
             break;
        }
    case 6:
        {
            printf("\n\nFin del programa");
            break;
        }
    default:
        {
            printf("\n\tOpci%cn no v%clida",162,160);
            getch();
            break;
        }

}

} while(opcion!=6);
}

