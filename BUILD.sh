clang++ --target=wasm32 -nostdlib -Wl,--no-entry -Wl,--export-all -o main.wasm main.cpp
wasm2wat ./main.wasm -o ./main.wat
