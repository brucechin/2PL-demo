#pragma once

#include<vector>
#include<queue>
#include<string>
#include "lock.h"
#include "transaction.h"



class Epoch{
    int epoch_number;
    int batch_size;
    bool finished;
    std::vector<Operation* > ops; // concurrent operations
    
};



//To simplify demo, there is no read/write on objects, but only acquiring read/write locks
class Executor{
    int current_epoch;
    int batch_size;
    std::queue<Epoch*> epoch_queue; // we need to use a thread-safe queue here

    TransactionManager* tranx_manager;

    Executor(){
        current_epoch = 0;
        lock_manager = new LockManager();
    }

    bool insertNewEpoch(Epoch e){

        //how to do it in thread safe way?
    }

    bool executeOperation(Operation* op){

    }

    bool executeEpoch(Epoch* e){

        //parallel execution of multiple operations;

        //logging for failure recovery;

        current_epoch++;

    }

    void execute(){

        while(!epochs.empty()){
            executeEpoch();
        }
    }

};