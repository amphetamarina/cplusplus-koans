#include "header_guards.h"

// Include the broken header twice to demonstrate the problem
#include "broken_header.h"
#include "broken_header.h"  // Without header guards, this causes issues

// Include pragma once header multiple times
#include "pragma_once_header.h"
#include "pragma_once_header.h"

void test_header_guard_mechanism() {
    // If header guards work, this compiles fine
    ConfigData config;
    DataPacket packet;
}

int get_include_count() {
    return get_counter_value();
}
