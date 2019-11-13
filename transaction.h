#include <set>
#include "logging.h"
#include <atomic>

struct Operation{
    int op_type; //read write
    std::vector<int> target_objects;
};

class Transaction{
    int tranx_id;
    std::set<int> read_locks_held;
    std::set<int> write_locks_held;
    std::vector<Operation* > ops;
    int status; // growing, shrinking, waiting, committed, aborted
};

class TransactionManager{
    LogManager* log_manager;
    LockManager* lock_manager; 
    std::atomic<int> next_txn_id_;

    Transaction *Begin();
    void Commit(Transaction *txn);
    void Abort(Transaction *txn);
}