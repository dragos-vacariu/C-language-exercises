#include <stdlib.h>
#include <stdio.h>

struct node {
  int x;
  int y;
  int z;
  struct node *next;
};

int main()
{
    /* This will be the unchanging first node */
    struct node *root;
	struct node *second;
	struct node *third;      

    /* Now root points to a node struct */
    root = (struct node *) malloc ( sizeof(struct node) ); 
	second = (struct node *) malloc ( sizeof(struct node));
	third = (struct node *) malloc (sizeof(struct node));
    /* The node root points to has its next pointer equal to a null pointer 
       set */
    root->next = second;  
    second->next = third;
    third->next = 0;
    /* By using the -> operator, you can modify what the node,
       a pointer, (root in this case) points to. */
    root->x = 5;
	second->y = 7;
	third->z = 9;
	
	printf("%d %d %d",root->x, second->y, root->next);     
}
