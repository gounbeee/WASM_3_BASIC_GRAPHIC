//clang --target=wasm32 -nostdlib -Wl,--no-entry -Wl,--export-all -o main.wasm main.c

extern "C" {
    const char* getString() {
    return "Hello World!";
    }
}
