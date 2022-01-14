#include <stdio.h>
#include <stdlib.h>

#define MAX_TREE_HT 100

struct MinHeapNode {
    char data;
    unsigned freq;
    struct MinHeapNode *left;
    struct MinHeapNode *right;
};

struct MinHeap {
    unsigned size;
    unsigned capacity;
    struct MinHeapNode** array;
};

struct MinHeapNode *newNode(char data, unsigned freq) {
    struct MinHeapNode *temp = (struct MinHeapNode*)malloc(sizeof(struct MinHeapNode));

    temp->left = NULL;
    temp->right = NULL;
    temp->data = data;
    temp->freq = freq;

    return temp;
}

struct MinHeap *createMinHeap(unsigned capacity) {
    struct MinHeap *minHeap = (struct MinHeap *)malloc(sizeof(struct MinHeap));

    minHeap->size=0;
    minHeap->capacity = capacity;
    minHeap->array = (struct MinHeapNode **)malloc(minHeap->capacity * sizeof(struct MinHeapNode*));

    return minHeap;
}

void swapMinHeapNode(struct MinHeapNode **a, struct MinHeapNode **b) {
    struct MinHeapNode *t = *a;
    *a = *b;
    *b = t;
}

void minHeapify(struct Minheap *minHeap, int idx) {
    int smallest = idx;
    int left = 2 * idx + 1;
    int right = 2 * idx + 1;

}