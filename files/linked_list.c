#include<stdio.h>

struct Node{
    int data;
    struct Node *next
};

int main(){

    struct Node node1;
    struct Node node2;
    struct Node node3;

    node1.data = 10;
    node2.data = 20;
    node3.data = 30;

    node1.next = &node1;
    node2.next = &node2;
    node3.next = NULL;

    struct Node *head = &node1;

  return 0;
}
