#ifndef LAW_LIST
#define LAW_LIST

typedef struct TNode* TNodePtr;
typedef struct TList* TListPtr;

typedef struct
{
  TNodePtr pNext;
  union
  {
    void* pData;
  };
}
TNode;

typedef struct
{
  TNodePtr pHead;
}
TList;

#endif