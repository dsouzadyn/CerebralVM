/**
 * @author      : nullbit (nullbit@archbox)
 * @file        : Cerebral
 * @created     : Friday May 03, 2019 20:54:15 IST
 */

#include "Cerebral.hpp"

Cerebral::Cerebral(std::string source) : memory(30001, 0)
{
      code = source;
      populate_bracs();
}

Cerebral::~Cerebral()
{
}

void Cerebral::increment_data_ptr() {
    data_ptr++;
    ip++;
}

void Cerebral::decrement_data_ptr() {
    data_ptr--;
    ip++;
}

void Cerebral::increment_data() {
    memory[data_ptr] = memory[data_ptr] + 1;
    ip++;
}

void Cerebral::decrement_data() {
    memory[data_ptr] = memory[data_ptr] - 1;
    ip++;
}

void Cerebral::jump_forward() {
    if (memory[data_ptr] == 0) {
        ip = bracs[ip] + 1;
    } else {
        ip++;
    }
}

void Cerebral::jump_backward() {
    if (memory[data_ptr] != 0) {
        ip = bracs[ip] + 1;
    } else {
        ip++;
    }
}


void Cerebral::output() {
    std::cout << memory[data_ptr];
    ip++;
}

void Cerebral::input() {
    std::cin >> memory[data_ptr];
    ip++;
}

void Cerebral::populate_bracs() {
    std::stack<int> stk;
    for(unsigned long int i = 0; i < code.length(); i++) {
        if (code[i] == '[') stk.push(i);
        else if (code[i] == ']') {
            bracs[stk.top()] = i;
            bracs[i] = stk.top();
            stk.pop();
        }
    }
}

void Cerebral::execute() {
    while(ip < code.length()) {
        switch(code[ip]) {
            case '>':
                increment_data_ptr();
                break;
            case '<':
                decrement_data_ptr();
                break;
            case '+':
                increment_data();
                break;
            case '-':
                decrement_data();
                break;
            case '.':
                output();
                break;
            case ',':
                input();
                break;
            case '[':
                jump_forward();
                break;
            case ']':
                jump_backward();
                break;
            default:
                ip++;
        }
    }
}

