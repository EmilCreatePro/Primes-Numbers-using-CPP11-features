#include <stdio.h>
#include <stdlib.h>

int main()
{
    typedef struct elem
        {
            int val;
            struct elem *next;
        }nod;

    nod *primul, *ultimul;

    nod *curent = (nod*) malloc(sizeof(nod));

    printf("Dati prima valoare in lista: ");
    scanf("%d",&curent->val);

    curent->next = NULL;
    primul = curent;
    ultimul = curent;

    while(curent->val!=0)
        {
            curent = (nod*) malloc(sizeof(nod));

            printf("\nDati urmatoarea valoare din lista: ");
            scanf("%d",&curent->val);
            //printf("\nValoarea data a fost %d",curent->val);
            curent->next = NULL;
            ultimul->next = curent;
            ultimul = curent;
        }

    curent = primul;

    printf("\n\nLista este: ");

    while(curent!=NULL)
        {
            printf("%d ",curent->val);
            curent = curent->next;
        }

    printf("\n\nLista sortata este: ");

    int sortat = 1;

    curent = primul;

    int aux;

    while(sortat)
        {
            sortat = 0;
            for(curent = primul; curent->next!=NULL; curent = curent->next)
                {
                    if(curent->val > curent->next->val)
                        {
                            aux = curent->val;
                            curent->val = curent->next->val;
                            curent->next->val = aux;
                            sortat = 1;
                        }
                }

        }

    curent = primul;

    while(curent!=NULL)
        {
            printf("%d ",curent->val);
            curent = curent->next;
        }

    return 0;
}
