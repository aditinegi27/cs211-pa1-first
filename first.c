#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Node {
   int data;
   struct Node* next;
};

struct Node* createNode(int value){
   struct Node* newNode = malloc(sizeof(struct Node));
   newNode->data = value;
   newNode->next = NULL;
   return newNode;
}

void insertNode(struct Node** head, int value){
   struct Node* newNode = createNode(value);  
      //create new Node with given value
   if (*head == NULL){  //if list is empty, newNode becomes head
      *head = newNode;
      return;
   }
   struct Node* temp = *head;
   while (temp->next != NULL){  //finds last node of list
      temp = temp->next;
   }
   temp->next = newNode;   //points last node to newNode
}

int main (int argc, char** argv){
   int n = atoi(argv[1]);
      //printf("n: %d\n", n);
   struct Node* head = NULL;
   //int f = scanf("%d", &n);  //n is the given number being checked from user
      //printf("f: %d\n", f);
   //if (f != 1) printf("Input not in correct format.");
   //printf("n2: %d\n", n);
   for(int i = n/2; i >= 1; i--){
      if (n%i == 0){
         //struct Node* newNode = createNode(i);
         insertNode(&head, i);
         //printf("i: %d\n", i);
      }
   }

   int sum = 0;
   struct Node* node = head;
   while (node != NULL){
      sum += node->data;
      node = node->next;
   }
   
   if (sum!=n){
      printf("%d", -1);
      //return c; //not a perfect number--returns -1
   }
   else{
      for(int p = n; p > 0; p--){
         //2p−1 × (2p − 1) = 6
         long double p1 = pow(2, p-1), p2 = (pow(2, p))-1;
         //printf("%d %d", p1, p2);
         if (p1*p2 == n){ //checking what p is
            //return p;
            printf("%d\n", (int)p2);
            break;
         }
      }
   }
   //return c; //?? for checking --returns -1
   //fre list
   while (head) {
      struct Node* temp0 = head;
      head = head->next;
      free(temp0);
   }

}
