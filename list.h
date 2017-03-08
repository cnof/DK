/*************************************************************************
	> File Name: list.h
	> Author: 
	> Mail: 
	> Created Time: 2017年03月02日 星期四 00时35分28秒
 ************************************************************************/

#ifndef _LIST_H

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
typedef int ElementType;

List Init( List L );
List MakeEmpty( List L );
int IsEmpty( Position P, List L );
int IsLast( Position P, List L );
Position Find( ElementType X, List L );
void Delete( ElementType X, List L );
Position FindPrevious( ElementType X, List L );
void Insert( ElementType X, List L );

#endif
