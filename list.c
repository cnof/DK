/*************************************************************************
	> File Name: list.c
	> Author:syc 
	> Mail: 
	> Created Time: 2017年03月02日 星期四 00时43分48秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"list.h"
struct Node {
    ElementType Element;
    Position Next;
};
List Init( List L ) {
    L = malloc(sizeof(struct Node));
    if ( L == NULL ) return NULL;
    L->Next = NULL;
    return L;
}
int IsEmpty( Position P, List L ) {
    return P->Next == NULL;
}
int IsLast( Position P, List L ) {
    return P->Next == NULL;
}
Position Find( ElementType X, List L ) {
    Position P;
    P = L->Next;
    while (P->Element != X && P->Next != NULL) {
        P = P->Next;
    }
    return P;
}
Position FindPrevious( ElementType X, List L ) {
    Position P;
    P = L;
    while (P->Next->Element != X && P->Next != NULL) {
        P = P->Next;
    }
    return P;
}
void Delete( ElementType X, List L ) {
    Position P, TmpCell;
    P = FindPrevious(X, L);
    if (!IsLast(P, L)) {
        TmpCell = P->Next;
        P->Next = TmpCell->Next;
        free(TmpCell);
    }
}
