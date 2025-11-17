// FIX ME: This header is missing header guards!
// Add proper header guards to prevent multiple definition errors

// This will cause problems if included multiple times
static int include_counter = 0;

inline void increment_include_counter() {
    include_counter++;
}

inline int get_counter_value() {
    return include_counter;
}

class ConfigData {
public:
    int value;
    ConfigData() : value(42) {}
};
