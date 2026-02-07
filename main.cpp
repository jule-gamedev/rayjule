using Void = const void*;

Void ConvertBytesToVoidPtr(const char* byteArray, int size) {
    if (byteArray == nullptr || size == 0) {
        return nullptr; // Or handle null/empty case as needed
    }
    return static_cast<const void*>(byteArray);
}