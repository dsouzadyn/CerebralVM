/**
 * @author      : nullbit (nullbit@archbox)
 * @file        : Cerebral
 * @created     : Friday May 03, 2019 20:49:38 IST
 */

#ifndef CEREBRAL_HPP

#define CEREBRAL_HPP
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <stack>
class Cerebral
{
    public:
        Cerebral (std::string source);
        void increment_data_ptr();
        void decrement_data_ptr();
        void increment_data();
        void decrement_data();
        void jump_forward();
        void jump_backward();
        void output();
        void input();
        void populate_bracs();
        virtual ~Cerebral ();
        void execute();
    private:
        std::vector<char> memory;
        unsigned int data_ptr = 0;
        unsigned int ip = 0;
        std::map<int, int> bracs;
        std::string code = "";
};

#endif /* end of include guard CEREBRAL_HPP */

