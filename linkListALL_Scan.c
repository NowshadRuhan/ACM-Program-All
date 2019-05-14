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

node* insertListItem(node *loc ,  int POS )
{

    node *newItem = (node *) malloc( sizeof(node));
    int idt; char *nm;
    scanf("%s %d",nm, &idt);
    newItem->name = strdup(nm);
    newItem->id=idt;
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
        while(loc->next!=0){loc=loc->next;}

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

int main()
{

    node *listSTART=0, *ptr;
    printf("Enter Your Name & ID : \n");
    listSTART = insertListItem(listSTART ,  AT_BEG );
    ptr = listSTART;
    ptr = insertListItem(listSTART ,  AFTER );
    ptr = insertListItem(listSTART ,  AFTER );


    printList(listSTART,0);
    printf("\n\n");

    //ptr= insertListItem( searchLocById(listSTART, 44), "Nowshad", 79 , AFTER );
    //listSTART = insertListItem( searchLocById(listSTART, 42), "Nowshad", 79 , AT_BEG );
    //insertListItem( searchLocById(listSTART, 44), "Nowshad", 79 , AFTER );
    printf("Which id you want to delete : \n");
    deleteItem(searchLocById(listSTART, ID()));
    printList(listSTART,0);

    printf("\n\n");
    //printList(0, ptr);
}




