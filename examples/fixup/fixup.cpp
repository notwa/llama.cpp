#include "llama.h"

#include <cstdio>

int main(int argc, char ** argv) {
    if (argc < 3) {
        printf("usage: %s input.gguf output.gguf\n", argv[0]);
        return -1;
    }

    return llama_model_fixup(argv[1], argv[2]);
}
