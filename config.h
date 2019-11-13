#pragma once

#include <atomic>
#include <chrono>
#include <cstdint>

typedef int32_t page_id_t; // page id type
typedef int32_t txn_id_t;  // transaction id type
typedef int32_t lsn_t;     // log sequence number type