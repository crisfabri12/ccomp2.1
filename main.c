
#include <stdio.h>
#include <stdlib.h>

struct nodo{
    int val;
    struct nodo *next;
};

int longitud(struct nodo *lista)
{
    int i;
    for(i=1;lista->next!= NULL;i++)
        lista = lista->next;
    return i;
}
void imprimir(struct nodo *lista)
{
    printf("[");
    while (lista != NULL){
            printf("%d,",lista->val);
            lista = lista->next;
    }
    printf("]");
}

void borrar(struct nodo *lista,int key){

    struct nodo *prev;
    struct nodo *actual;
    struct nodo *temporal;
    prev = lista;
    actual = lista->next;
    if (lista->val == key){
        temporal = lista;
        lista = lista->next;
        free(temporal);
    }
    else{
        while (actual != NULL){
            if (actual->val == key){
                prev ->next = actual ->next;
                free(actual);
                break;
            }
            prev = actual;
            actual = actual ->next;
        }
    }
    imprimir(lista);
}

void crear(struct nodo *lista,int largo)
{
    int i;
    struct nodo *prev;
    struct nodo *actual;
    prev = lista;

    for (i=2;i<=largo;++i){
        actual = malloc(sizeof(struct nodo));
        actual->val = i;
        prev->next = actual;
        prev = actual;
    }
    prev ->next = NULL;

}

void insertar_i(struct nodo *lista,int n)
{
    struct nodo *temp,*prev;
    prev = lista;
    temp = malloc(sizeof(struct nodo));
    lista = temp;
    lista->val=n;
    lista->next=prev;
    printf("\n");
    imprimir(lista);

}

void insertar_m(struct nodo *lista,int n)
{
    struct nodo *temp,*prev,*actual;
    int i,middle,j;
    temp = lista;
    actual = lista;
    for(i=0;temp->next != NULL;++i){
        temp = temp->next;
    }
    middle = i/2;
    for(j = 0;j<middle;++j){
        actual = actual->next;
    }
    prev = malloc(sizeof(struct nodo));
    prev->val = n;
    prev->next = actual ->next;
    actual->next = prev;
    imprimir(lista);
}


void insertar(struct nodo *lista,int p,int n)
{
    struct nodo *temp,*actual;
    int i,longi;
    temp =lista;
    longi = longitud(lista);
    if (p <= longi){
        if (p == 1){
            actual = malloc(sizeof(struct nodo));
            actual->val=n;
            actual->next=lista;
            lista = actual;
        }else
            for (i=1;i<p;i++)
                temp = temp->next;
            actual = malloc(sizeof(struct nodo));
            actual->val = n;
            actual->next = temp->next;
            temp->next = actual;
        imprimir(lista);
    }else
        printf("Posicion fuera de rango");



}


void concatenar(struct nodo *lista1,struct nodo *lista2)
{
    for(;lista1->next != NULL;)
        lista1 = lista1->next;
    lista1->next = lista2;

}
int main()
{
    struct nodo *inicio,*inicio2;
    inicio2 = malloc(sizeof(struct nodo));
    inicio = malloc(sizeof(struct nodo));
    inicio->val = 1;
    inicio2->val=1;
    crear(inicio,9);
    imprimir(inicio);
    printf("\n");
    borrar(inicio,5);
    insertar_i(inicio,6);
    printf("\n");
    insertar_m(inicio,8);
    printf("\n");
    insertar(inicio,8,12);
    printf("\n");
    crear(inicio2,9);
    concatenar(inicio,inicio2);
    imprimir(inicio);

}
