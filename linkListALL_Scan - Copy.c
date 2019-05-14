#define AT_BEG 10
#define AT_END 40
#define AFTER  30
#define BEFORE 20

#include<stdio.h>
#include<stdlib.h>
typedef struct a
{
    int id;
    char *name;
    struct a *next, *prev;
}node;

node* searchLocById(node* loc, int id ){
      while(loc->id!=id)loc=loc->next;
      return loc;

}
void  printList(node* pn, node* pp)
{
    if(pn!=0)
        while(pn!=0)
        {
            printf("ID:%d Name:%s %d>\n",pn->id, pn->name, pn );
            pn= pn->next;
        }
    else
        while(pp!=0)
        {
            printf(" < ID:%d Name:%s\n", pp->id, pp->name );
            pp= pp->prev;
        }
}

node* insertListItem(node *loc , char *name, int ID,  int POS )
{

    node *newItem = (node *) malloc( sizeof(node));
    newItem->name = name;
    newItem->id=ID;

    switch(POS)
    {
    case AT_BEG:

        if(loc==0)
        {
            loc=newItem;
            loc->next=loc->prev=0;
        }
        else if(loc !=0 || loc->prev ==0)
        {
            loc->prev = newItem;
            newItem->prev=0;
            newItem->next=loc;

        }

        break;


    case AT_END:
        while(loc->next!=0)loc=loc->next;

        newItem->prev= loc;
        newItem->next =0;
        loc->next = newItem;


        break;
    case AFTER:


        newItem->prev= loc;
        newItem->next =loc->next;
        loc->next = newItem;


        break;

    default: // case BEFORE:

        newItem->prev= loc->prev;
        newItem->next =loc;
        loc->prev = newItem;


        break;

    }

    return newItem;
}

void deleteItem(node* i){

        if(i-> prev == 0){
           i->id= i->next->id;
           i->name=i->next->name;

          i->next=i->next->next;
          i->next->prev=i->prev;


        }
        if(i->prev !=0 && i->next!=0){
            i->prev->next = i->next;
            i->next->prev=i->prev;
        }
        else{
            if(i->next==0){
                i->prev->next=0;
            }
        }
}
int ID(){
    int Iid;
    scanf("%d", &Iid);
    return Iid;
}
char NAME(){
    char name1[100];
    scanf("%s", &name1);
    return name1;
}

main()
{

    node *listSTART=0, *ptr;
    printf("Enter your name : \n");

    //char *na1 = NAME();
    listSTART = insertListItem(listSTART ,NAME(), 1,  AT_BEG );
    ptr = listSTART;

    //char *na2 = NAME();
    ptr = insertListItem(ptr, NAME(), 2 , AT_END );

    //char *na3 = NAME();
    ptr = insertListItem(ptr, NAME(), 3, AT_END );

    printList(listSTART,0);
    printf("\n\n");

    //ptr= insertListItem( searchLocById(listSTART, 44), "Nowshad", 79 , AFTER );
    //listSTART = insertListItem( searchLocById(listSTART, 42), "Nowshad", 79 , AT_BEG );
    //insertListItem( searchLocById(listSTART, 44), "Nowshad", 79 , AFTER );

   // deleteItem(searchLocById(listSTART, 42));
    printList(listSTART,0);

    printf("\n\n");
    //printList(0, ptr);
}




