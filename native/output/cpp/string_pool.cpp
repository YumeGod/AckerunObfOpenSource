#include "string_pool.hpp"

namespace native_jvm::string_pool {
    static char pool[1867LL] = { 114, 117, 110, 0, 40, 41, 86, 0, 67, 111, 110, 116, 114, 111, 108, 108, 101, 117, 114, 84, 104, 114, 101, 97, 100, 115, 0, 100, 105, 114, 101, 99, 116, 105, 111, 110, 83, 110, 97, 107, 101, 0, 73, 0, 109, 111, 118, 101, 73, 110, 116, 101, 114, 110, 101, 0, 40, 73, 41, 86, 0, 106, 97, 118, 97, 47, 108, 97, 110, 103, 47, 78, 117, 108, 108, 80, 111, 105, 110, 116, 101, 114, 69, 120, 99, 101, 112, 116, 105, 111, 110, 0, 73, 78, 86, 79, 75, 69, 83, 80, 69, 67, 73, 65, 76, 32, 86, 111, 105, 100, 32, 110, 112, 101, 0, 99, 104, 101, 99, 107, 67, 111, 108, 108, 105, 115, 105, 111, 110, 0, 109, 111, 118, 101, 69, 120, 116, 101, 114, 110, 101, 0, 100, 101, 108, 101, 116, 101, 84, 97, 105, 108, 0, 112, 97, 117, 115, 101, 114, 0, 106, 97, 118, 97, 46, 108, 97, 110, 103, 46, 73, 110, 116, 101, 114, 114, 117, 112, 116, 101, 100, 69, 120, 99, 101, 112, 116, 105, 111, 110, 0, 115, 112, 101, 101, 100, 0, 74, 0, 71, 69, 84, 70, 73, 69, 76, 68, 32, 76, 111, 110, 103, 32, 110, 112, 101, 0, 115, 108, 101, 101, 112, 0, 40, 74, 41, 86, 0, 112, 114, 105, 110, 116, 83, 116, 97, 99, 107, 84, 114, 97, 99, 101, 0, 73, 78, 86, 79, 75, 69, 86, 73, 82, 84, 85, 65, 76, 32, 86, 111, 105, 100, 32, 110, 112, 101, 0, 112, 111, 115, 105, 116, 105, 111, 110, 115, 0, 76, 106, 97, 118, 97, 47, 117, 116, 105, 108, 47, 65, 114, 114, 97, 121, 76, 105, 115, 116, 59, 0, 71, 69, 84, 70, 73, 69, 76, 68, 32, 79, 98, 106, 101, 99, 116, 32, 110, 112, 101, 0, 106, 97, 118, 97, 46, 117, 116, 105, 108, 46, 65, 114, 114, 97, 121, 76, 105, 115, 116, 0, 115, 105, 122, 101, 0, 40, 41, 73, 0, 73, 78, 86, 79, 75, 69, 86, 73, 82, 84, 85, 65, 76, 32, 73, 110, 116, 32, 110, 112, 101, 0, 103, 101, 116, 0, 40, 73, 41, 76, 106, 97, 118, 97, 47, 108, 97, 110, 103, 47, 79, 98, 106, 101, 99, 116, 59, 0, 73, 78, 86, 79, 75, 69, 86, 73, 82, 84, 85, 65, 76, 32, 79, 98, 106, 101, 99, 116, 32, 110, 112, 101, 0, 84, 117, 112, 108, 101, 0, 106, 97, 118, 97, 47, 108, 97, 110, 103, 47, 67, 108, 97, 115, 115, 67, 97, 115, 116, 69, 120, 99, 101, 112, 116, 105, 111, 110, 0, 99, 97, 110, 110, 111, 116, 32, 99, 97, 115, 116, 32, 116, 111, 32, 0, 103, 101, 116, 88, 0, 103, 101, 116, 89, 0, 115, 116, 111, 112, 84, 104, 101, 71, 97, 109, 101, 0, 102, 111, 111, 100, 80, 111, 115, 105, 116, 105, 111, 110, 0, 76, 84, 117, 112, 108, 101, 59, 0, 121, 0, 71, 69, 84, 70, 73, 69, 76, 68, 32, 73, 110, 116, 32, 110, 112, 101, 0, 120, 0, 106, 97, 118, 97, 46, 108, 97, 110, 103, 46, 83, 121, 115, 116, 101, 109, 0, 111, 117, 116, 0, 76, 106, 97, 118, 97, 47, 105, 111, 47, 80, 114, 105, 110, 116, 83, 116, 114, 101, 97, 109, 59, 0, 106, 97, 118, 97, 46, 105, 111, 46, 80, 114, 105, 110, 116, 83, 116, 114, 101, 97, 109, 0, 112, 114, 105, 110, 116, 108, 110, 0, 40, 76, 106, 97, 118, 97, 47, 108, 97, 110, 103, 47, 83, 116, 114, 105, 110, 103, 59, 41, 86, 0, 115, 105, 122, 101, 83, 110, 97, 107, 101, 0, 80, 85, 84, 70, 73, 69, 76, 68, 32, 73, 110, 116, 32, 110, 112, 101, 0, 103, 101, 116, 86, 97, 108, 65, 108, 101, 97, 78, 111, 116, 73, 110, 83, 110, 97, 107, 101, 0, 40, 41, 76, 84, 117, 112, 108, 101, 59, 0, 73, 78, 86, 79, 75, 69, 83, 80, 69, 67, 73, 65, 76, 32, 79, 98, 106, 101, 99, 116, 32, 110, 112, 101, 0, 80, 85, 84, 70, 73, 69, 76, 68, 32, 79, 98, 106, 101, 99, 116, 32, 110, 112, 101, 0, 115, 112, 97, 119, 110, 70, 111, 111, 100, 0, 40, 76, 84, 117, 112, 108, 101, 59, 41, 86, 0, 83, 113, 117, 97, 114, 101, 115, 0, 106, 97, 118, 97, 47, 117, 116, 105, 108, 47, 65, 114, 114, 97, 121, 76, 105, 115, 116, 0, 84, 104, 114, 101, 97, 100, 83, 113, 117, 97, 114, 101, 0, 115, 113, 117, 97, 114, 101, 0, 76, 68, 97, 116, 97, 79, 102, 83, 113, 117, 97, 114, 101, 59, 0, 68, 97, 116, 97, 79, 102, 83, 113, 117, 97, 114, 101, 0, 108, 105, 103, 104, 116, 77, 101, 85, 112, 0, 106, 97, 118, 97, 46, 108, 97, 110, 103, 46, 77, 97, 116, 104, 0, 114, 97, 110, 100, 111, 109, 0, 40, 41, 68, 0, 60, 105, 110, 105, 116, 62, 0, 40, 73, 73, 41, 86, 0, 104, 101, 97, 100, 83, 110, 97, 107, 101, 80, 111, 115, 0, 106, 97, 118, 97, 47, 108, 97, 110, 103, 47, 65, 114, 105, 116, 104, 109, 101, 116, 105, 99, 69, 120, 99, 101, 112, 116, 105, 111, 110, 0, 73, 82, 69, 77, 32, 37, 32, 98, 121, 32, 48, 0, 67, 104, 97, 110, 103, 101, 68, 97, 116, 97, 0, 97, 100, 100, 0, 40, 76, 106, 97, 118, 97, 47, 108, 97, 110, 103, 47, 79, 98, 106, 101, 99, 116, 59, 41, 90, 0, 73, 78, 86, 79, 75, 69, 86, 73, 82, 84, 85, 65, 76, 32, 66, 111, 111, 108, 101, 97, 110, 32, 110, 112, 101, 0, 97, 98, 115, 0, 40, 73, 41, 73, 0, 105, 116, 101, 114, 97, 116, 111, 114, 0, 40, 41, 76, 106, 97, 118, 97, 47, 117, 116, 105, 108, 47, 73, 116, 101, 114, 97, 116, 111, 114, 59, 0, 106, 97, 118, 97, 46, 117, 116, 105, 108, 46, 73, 116, 101, 114, 97, 116, 111, 114, 0, 110, 101, 120, 116, 0, 40, 41, 76, 106, 97, 118, 97, 47, 108, 97, 110, 103, 47, 79, 98, 106, 101, 99, 116, 59, 0, 73, 78, 86, 79, 75, 69, 73, 78, 84, 69, 82, 70, 65, 67, 69, 32, 79, 98, 106, 101, 99, 116, 32, 110, 112, 101, 0, 112, 97, 117, 115, 101, 84, 104, 114, 101, 97, 100, 0, 104, 97, 115, 78, 101, 120, 116, 0, 40, 41, 90, 0, 73, 78, 86, 79, 75, 69, 73, 78, 84, 69, 82, 70, 65, 67, 69, 32, 66, 111, 111, 108, 101, 97, 110, 32, 110, 112, 101, 0, 114, 101, 109, 111, 118, 101, 0, 89, 117, 109, 101, 67, 108, 111, 117, 100, 79, 98, 102, 73, 110, 105, 116, 49, 48, 0, 67, 79, 76, 73, 83, 73, 79, 78, 33, 32, 10, 0, 89, 117, 109, 109, 121, 33, 0, 76, 83, 113, 117, 97, 114, 101, 80, 97, 110, 101, 108, 59, 0, 67, 0, 106, 97, 118, 97, 46, 97, 119, 116, 46, 67, 111, 108, 111, 114, 0, 106, 97, 118, 97, 47, 97, 119, 116, 47, 67, 111, 108, 111, 114, 0, 83, 113, 117, 97, 114, 101, 80, 97, 110, 101, 108, 0, 67, 104, 97, 110, 103, 101, 67, 111, 108, 111, 114, 0, 40, 76, 106, 97, 118, 97, 47, 97, 119, 116, 47, 67, 111, 108, 111, 114, 59, 41, 86, 0, 89, 117, 109, 101, 67, 108, 111, 117, 100, 79, 98, 102, 73, 110, 105, 116, 50, 0, 107, 101, 121, 80, 114, 101, 115, 115, 101, 100, 0, 40, 76, 106, 97, 118, 97, 47, 97, 119, 116, 47, 101, 118, 101, 110, 116, 47, 75, 101, 121, 69, 118, 101, 110, 116, 59, 41, 86, 0, 106, 97, 118, 97, 46, 97, 119, 116, 46, 101, 118, 101, 110, 116, 46, 75, 101, 121, 69, 118, 101, 110, 116, 0, 103, 101, 116, 75, 101, 121, 67, 111, 100, 101, 0, 107, 101, 121, 82, 101, 108, 101, 97, 115, 101, 100, 0, 107, 101, 121, 84, 121, 112, 101, 100, 0, 89, 117, 109, 101, 67, 108, 111, 117, 100, 79, 98, 102, 73, 110, 105, 116, 52, 0, 75, 101, 121, 98, 111, 97, 114, 100, 76, 105, 115, 116, 101, 110, 110, 101, 114, 0, 109, 97, 105, 110, 0, 40, 91, 76, 106, 97, 118, 97, 47, 108, 97, 110, 103, 47, 83, 116, 114, 105, 110, 103, 59, 41, 86, 0, 87, 105, 110, 100, 111, 119, 0, 115, 101, 116, 84, 105, 116, 108, 101, 0, 115, 101, 116, 83, 105, 122, 101, 0, 115, 101, 116, 86, 105, 115, 105, 98, 108, 101, 0, 40, 90, 41, 86, 0, 115, 101, 116, 68, 101, 102, 97, 117, 108, 116, 67, 108, 111, 115, 101, 79, 112, 101, 114, 97, 116, 105, 111, 110, 0, 77, 97, 105, 110, 0, 75, 101, 121, 0, 76, 106, 97, 118, 97, 47, 108, 97, 110, 103, 47, 83, 116, 114, 105, 110, 103, 59, 0, 89, 117, 109, 101, 49, 51, 51, 55, 0, 83, 110, 97, 107, 101, 0, 115, 101, 116, 66, 97, 99, 107, 103, 114, 111, 117, 110, 100, 0, 114, 101, 112, 97, 105, 110, 116, 0, 106, 97, 118, 97, 46, 108, 97, 110, 103, 46, 69, 120, 99, 101, 112, 116, 105, 111, 110, 0, 71, 85, 73, 95, 73, 78, 73, 84, 73, 65, 76, 73, 90, 65, 84, 73, 79, 78, 95, 77, 79, 78, 73, 84, 79, 82, 0, 76, 106, 97, 118, 97, 47, 108, 97, 110, 103, 47, 79, 98, 106, 101, 99, 116, 59, 0, 77, 79, 78, 73, 84, 79, 82, 69, 78, 84, 69, 82, 32, 110, 112, 101, 0, 106, 97, 118, 97, 46, 108, 97, 110, 103, 46, 79, 98, 106, 101, 99, 116, 0, 119, 97, 105, 116, 0, 112, 97, 117, 115, 101, 84, 104, 114, 101, 97, 100, 70, 108, 97, 103, 0, 90, 0, 71, 69, 84, 70, 73, 69, 76, 68, 32, 66, 111, 111, 108, 101, 97, 110, 32, 110, 112, 101, 0, 65, 84, 72, 82, 79, 87, 32, 110, 112, 101, 0, 80, 85, 84, 70, 73, 69, 76, 68, 32, 66, 111, 111, 108, 101, 97, 110, 32, 110, 112, 101, 0, 114, 101, 115, 117, 109, 101, 84, 104, 114, 101, 97, 100, 0, 110, 111, 116, 105, 102, 121, 0, 103, 101, 116, 88, 102, 0, 120, 102, 0, 103, 101, 116, 89, 102, 0, 121, 102, 0, 89, 117, 109, 101, 67, 108, 111, 117, 100, 79, 98, 102, 73, 110, 105, 116, 54, 0, 89, 117, 109, 101, 67, 108, 111, 117, 100, 79, 98, 102, 73, 110, 105, 116, 48, 0, 119, 105, 100, 116, 104, 0, 104, 101, 105, 103, 104, 116, 0 };

    char *get_pool() {
        return pool;
    }
}