//
//  Heap_PriorityQueue.cpp
//  Heap_Priority_Queues
//
//  Created by WillJia on 08/04/2018.
//  Copyright © 2018 Zesheng Jia A00416452. All rights reserved.
//

#include "Heap_PriorityQueue.h"

template<class ItemType>
Heap_PriorityQueue<ItemType>::Heap_PriorityQueue() {
    ArrayMaxHeap<ItemType>();
} // end constructor

template<class ItemType>
bool Heap_PriorityQueue<ItemType>::isEmpty() const {
    return ArrayMaxHeap<ItemType>::isEmpty();
} // end isEmpty

template<class ItemType>
bool Heap_PriorityQueue<ItemType>::enqueue(const ItemType& newEntry) {
    return ArrayMaxHeap<ItemType>::add(newEntry);
} // end add

template<class ItemType>
bool Heap_PriorityQueue<ItemType>::dequeue() {
    return ArrayMaxHeap<ItemType>::remove();
} // end remove

template<class ItemType>
int Heap_PriorityQueue<ItemType>::getPatientsNumber() const{
    return ArrayMaxHeap<ItemType>::getNumberOfNodes();
} // end remove

template<class ItemType>
ItemType Heap_PriorityQueue<ItemType>::peek() const throw(PrecondViolatedExcep) {
    try {
        return ArrayMaxHeap<ItemType>::peekTop();
    } catch (PrecondViolatedExcep e) {
        throw PrecondViolatedExcep("Attempted peek into an empty priority queue.");
    }// end try/catch
} // end peek
