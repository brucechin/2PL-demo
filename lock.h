#include"transaction.h"
#include<unordered_map>

enum class LockType
{
	LOCK_SHARED = 0, LOCK_EXCLUSIVE
};


typedef struct TxnLockStatus
{
	LockType type_;
	Transaction* txn_;

	TxnLockStatus(LockType type, Transaction* txn)
		: type_(type), txn_(txn)
	{
	}

	LockType GetType()
	{
		return type_;
	}

	Transaction* GetTxn()
	{
		return txn_;
	}

} TxnLockStatus;

class LockManager{
    std::unordered_map<int, std::vector<TxnLockStatus>> lock_table;
    bool lockShared(){

    }

    bool lockExclusive(){

    }

    bool unlock(){
		
    }

};