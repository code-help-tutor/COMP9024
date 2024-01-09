WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
// Linked list interface ... COMP9024 23T2
#include <stdbool.h>

typedef struct Node *List;

List insertLL(List, int);
List deleteLL(List, int);
bool inLL(List, int);
void freeLL(List);
void showLL(List);
