// FIX ME: Replace the traditional header guards with #pragma once
// (Modern compilers support both, but #pragma once is simpler)

#ifndef PRAGMA_ONCE_HEADER_H
#define PRAGMA_ONCE_HEADER_H

struct DataPacket {
    int id;
    char data[256];
};

inline int get_packet_size() {
    return sizeof(DataPacket);
}

#endif // PRAGMA_ONCE_HEADER_H
