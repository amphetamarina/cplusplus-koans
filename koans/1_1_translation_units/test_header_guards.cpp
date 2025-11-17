#include <gtest/gtest.h>
#include "header_guards.h"

// This test will FAIL to compile until you add header guards to broken_header.h
// Your goal: add header guards to prevent multiple definition errors

TEST(HeaderGuards, PreventMultipleInclusion) {
    // This should compile without errors once header guards are in place
    test_header_guard_mechanism();
    SUCCEED() << "If this compiles, header guards are working!";
}

TEST(HeaderGuards, PragmaOnce) {
    // pragma_once_header.h demonstrates the modern #pragma once approach
    // It should work correctly when included multiple times
    #include "pragma_once_header.h"

    DataPacket packet;
    packet.id = 1;
    EXPECT_EQ(get_packet_size(), sizeof(DataPacket));
}

// Learning objectives:
// 1. Header guards prevent multiple inclusion of the same header
// 2. Without guards, you get "multiple definition" errors
// 3. #pragma once is a modern alternative to traditional guards
// 4. Header guards only protect against multiple inclusion in same translation unit
