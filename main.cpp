/**
 * @author      : nullbit (nullbit@archbox)
 * @file        : main
 * @created     : Friday May 03, 2019 21:11:24 IST
 */
#include <iostream>
#include <fstream>
#include <string>
#include "Cerebral.cpp"
int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "usage: ./cerebral <brainfuck_file>" << std::endl;
        return -1;
    }
    std::ifstream file(argv[1]);
    std::string code((std::istreambuf_iterator<char>(file)),
                        (std::istreambuf_iterator<char>()));
    Cerebral vm(code);
    vm.execute();
    return 0;
}
