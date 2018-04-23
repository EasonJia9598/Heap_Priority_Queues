//
//  PriorityQueueInterface.h
//  Heap_Priority_Queues
//
//  Created by WillJia on 08/04/2018.
//  Copyright © 2018 Zesheng Jia A00416452. All rights reserved.
//

#ifndef PriorityQueueInterface_h
#define PriorityQueueInterface_h
template<class ItemType>
class PriorityQueueInterface{
public:
    /** @return True if the priority queue is empty, or false if not. */
    virtual bool isEmpty() const = 0;
    /** Adds a new entry to this priority queue.*/
    virtual bool enqueue(const ItemType& newEntry) = 0;
    /** Removes the entry having the highest priority.*/
    virtual bool dequeue() = 0;
    /** Returns the highest-priority entry in this priority queue..*/
    virtual ItemType peek() const = 0;
    
}; // end PriorityQueueInterface

#endif /* PriorityQueueInterface_h */
