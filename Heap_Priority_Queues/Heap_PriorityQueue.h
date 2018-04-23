//
//  Heap_PriorityQueue.hpp
//  Heap_Priority_Queues
//
//  Created by WillJia on 08/04/2018.
//  Copyright © 2018 Zesheng Jia A00416452. All rights reserved.
//

#ifndef Heap_PriorityQueue_hpp
#define Heap_PriorityQueue_hpp

#include <stdio.h>
#include "ArrayMaxHeap.h"
#include "PriorityQueueInterface.h"

template <class ItemType>
class Heap_PriorityQueue : public PriorityQueueInterface<ItemType>, private ArrayMaxHeap<ItemType>
{
public:
    Heap_PriorityQueue();
    bool isEmpty() const;
    bool enqueue(const ItemType& newEntry);
    bool dequeue();
    ItemType peek() const throw (PrecondViolatedExcep);
    int getPatientsNumber() const;
    
};// end Heap_PriorityQueue

#include "Heap_PriorityQueue.cpp"

#endif /* Heap_PriorityQueue_h */
