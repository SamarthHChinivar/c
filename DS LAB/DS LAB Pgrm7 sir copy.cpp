#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char        usn[11];
    char        name[11];
    char        branch[11];
    int         sem;
    char        phone_no[11];
}STUDENT;

struct node
{
    STUDENT     info;
    struct node *link;
};

typedef struct node * NODE;

NODE insert_front(STUDENT item, NODE first)
{
    NODE temp;
    
    temp = (NODE) malloc(sizeof(struct node));
    
    temp->info = item;
    temp->link = first;
    
    return temp;
}

NODE insert_rear(STUDENT item, NODE first)
{
    NODE temp, cur;
    
    temp = (NODE) malloc(sizeof(struct node));
    
    temp->info = item;
    temp->link = NULL;
    
    if (first == NULL) 
    	return temp;
    
    cur = first;
    while (cur->link != NULL)
    	cur = cur->link;
    
    cur->link = temp;
    
    return first;
}

NODE delete_front(NODE first)
{
    NODE second;
    
    if (first == NULL)
    {
        printf(" Stucent list empty: Front deletion not possible\n");
        return NULL;
    }
    
    if (first->link == NULL)
    {
        printf("Student %s information is deleted \n", first->info.name);
        free(first);
        
        return NULL;
    }
    
    second = first->link;
    
    printf("Student %s information is deleted \n", first->info.name);
    
    free (first);
    
    return second;
}

NODE delete_rear(NODE first)
{
    NODE prev, cur;
    
    if (first == NULL)
    {
        printf(" Stucent list empty: Front deletion not possible\n");
        return NULL;
    }
    
    if (first->link == NULL)
    {
        printf("Student %s information is deleted \n", first->info.name);
        free(first);
        
        return NULL;
    }
    
    /* Find address of last node and last but one node */
    cur = first;
    
    while (cur->link != NULL)
    {
        prev = cur;
        cur = cur->link;
    }
    
    prev->link = NULL;
    
    printf("Student %s information is deleted \n", cur->info.name);
    free(cur);
    
    return first;
}

void count_node(NODE first)
{
    NODE cur;
    int  count;
    
    if (first == NULL)
    {
        printf("Student list is empty\n");
        return;
    }
    
    count = 0;
    cur = first;
    while (cur != NULL)
    {
        cur = cur->link;   
        count ++;            /* Count the number of students */
    }
    
    printf("\n");
    
    printf("Number of nodes = %d \n", count);
}

void display(NODE first)
{
    NODE cur;
    
    if (first == NULL)
    {
        printf("Student list is empty\n");
        return;
    }
    
    cur = first;
    
    while (cur != NULL)
    {
       printf(" Name: %s\n USN: %s\n Branch: %s\n Phone no: %s\n Sem:%d\n" 
                                 ,cur->info.name, cur->info.usn,
                                  cur->info.branch, cur->info.phone_no, 
                                  cur->info.sem);
       printf("\n");
       cur = cur->link;
    }
}

void read_student_info(STUDENT *item)
{
    printf("USN         :");    scanf(" %s", item->usn);
    printf("name        :");    scanf(" %s", item->name);
    printf("Branch      :");    scanf(" %s", item->branch);
    printf("Semester    :");    scanf("%d", &(item->sem));
    printf("Phone No    :");    scanf(" %s", item->phone_no);
}

int main()
{
    STUDENT item;
    int     choice;
    NODE    first;
    
    first = NULL;
    
    for(;;)
    {
        printf("1: Insert Front  2: Insert_rear\n");
        printf("3: Delete Front  4: Delete Rear\n");
        printf("5: Count         6: Display\n");
        printf("7: Exit\n");
        printf("Enter the choice :\n");
        
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                    read_student_info(&item);
                    
                    first = insert_front(item, first);
                    
                    break;
                    
            case 2:
                    read_student_info(&item);
                    
                    first = insert_rear(item, first);
                    
                    break;
            
            case 3:
                    first = delete_front(first);
                    
                    break;
            
            case 4:
                    first = delete_rear(first);
                    
                    break;
                    
            case 5:
                    count_node(first);
                    
                    break; 
            
            case 6:
                    display(first);
                    
                    break;
                    
            default:
                    exit(0);
        }
    }
    return 0;
}
