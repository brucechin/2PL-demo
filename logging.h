#pragma once
#include "config.h"
#include "database.h"
#include <unordered_map>
#include <thread>
// enum class WType { INSERT = 0, DELETE, UPDATE };


// // for undoing partially executed transaction
// class WriteRecord {
// public:
//     //this variable needs exploration later
//     //RID rid_; 
    
//     WType wtype_;
//     // tuple is only for update operation
//     Tuple tuple_;
//     // which table
//     Table* table_;
// };


enum class LogRecordType {
    INVALID = 0,
    INSERT,
    MARKDELETE,
    APPLYDELETE,
    ROLLBACKDELETE,
    UPDATE,
    BEGIN,
    COMMIT,
    ABORT,
    // when create a new page in heap table
    NEWPAGE,
};

//for redoing past transactions
class LogRecord {
    int lsn;//log serial number
    int txn_id;
    LogRecordType type;


    //tuple information
};

class LogReovery{
    void Redo();
    void Undo();
    bool DeserializeLogRecord(const char *data, LogRecord &log_record);

private:
    //TODO
};

class LogManager{



private:
    lsn_t next_lsn_;
    std::thread thread;

};