#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * utworz()
{
    return NULL;
};

struct element* dnk(struct element*Lista, int a)
{
    struct element * wsk ;
    if(Lista==NULL)
    {
        wsk=malloc(sizeof(struct element));
        Lista=wsk;
    }
    else
    {
        wsk=Lista;
        while(wsk->next!=NULL)
        {
            wsk=wsk->next;
        }
        wsk->next=malloc(sizeof(struct element));
        wsk=wsk->next;
    }
    wsk->x=a;
    wsk->next=NULL;
    return Lista;
}

void wyswietlListeBezGlowy(struct element*Lista)
{
    struct element*temp=Lista;
    if(temp==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(temp!=NULL)
    {
        printf("%d\n",temp->x);
        temp=temp->next;
    }
    printf("----\n");
}

int maksimum(struct element* lista)
{
    struct element*wsk=lista;
    int temp=wsk->x;
    while(wsk->next!=NULL)
    {
        wsk=wsk->next;
        if(temp < wsk->x)
        {
            temp = wsk->x;
        }
    }
    return temp;
}

int maksimum2(struct element* lista)
{
    if(lista->next==NULL)
        return lista->x;
    if(lista->x < maksimum2(lista->next))
        return maksimum2(lista->next);
    return lista->x;
}

int foo(struct element*lista1,struct element*lista2)
{
    if(lista1==NULL || lista2==NULL)
        return 0;
    if(maksimum(lista1)==maksimum(lista2))
        return 1;
    return 0;
}

int main()
{
    struct element * l1=utworz();
    l1=dnk(l1,3);
    l1=dnk(l1,114);
    l1=dnk(l1,-23);
    l1=dnk(l1,14);
    wyswietlListeBezGlowy(l1);
    printf("%d\n",maksimum(l1));
    printf("----\n");
    struct element * l2 = malloc(sizeof(struct element));
    l2->x=4;
    l2->next=malloc(sizeof(struct element));
    l2->next->x=-17;
    l2->next->next=malloc(sizeof(struct element));
    l2->next->next->x=23;
    l2->next->next->next=NULL;
    wyswietlListeBezGlowy(l2);
    printf("%d\n",maksimum(l2));
    printf("----\n");
    printf("%d\n",foo(l1,l2));
    printf("----\n");
    struct element * l3=utworz();
    l3=dnk(l3,3);
    printf("%d\n",maksimum2(l3));
    l3=dnk(l3,114);
    printf("%d\n",maksimum2(l3));
    l3=dnk(l3,-23);
    l3=dnk(l3,234);
    printf("%d\n",maksimum2(l3));
    return 0;
}
