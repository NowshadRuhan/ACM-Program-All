#define AT_BEG 10
#define AT_END 40
#define AFTER  30
#define BEFORE 20

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

node* insertListItem(node *loc , char *name, int ID, int POS )
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


main()
{

    node *listSTART=0, *ptr;
    listSTART = insertListItem(listSTART, "Shakib", 42 , AT_BEG );
    ptr=listSTART;
    ptr= insertListItem(ptr, "Salman", 44 , AFTER );
    ptr= insertListItem(ptr, "Shaker", 56 , AFTER );


    printList(listSTART,0);
    printf("\n\n");

    ptr= insertListItem( searchLocById(listSTART, 56), "Nowshad", 79 , AT_END );
    //listSTART = insertListItem( searchLocById(listSTART, 42), "Nowshad", 79 , AT_BEG );
    //insertListItem( searchLocById(listSTART, 44), "Nowshad", 79 , AFTER );

   // deleteItem(searchLocById(listSTART, 44));
    printList(listSTART,0);

    printf("\n\n");
    //printList(0, ptr);
}


