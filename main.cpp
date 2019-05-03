/**
 * @author      : nullbit (nullbit@archbox)
 * @file        : main
 * @created     : Friday May 03, 2019 21:11:24 IST
 */
#include <iostream>
#include <string>
#include "Cerebral.cpp"
int main() {
    std::string code = "++>+++++[<+>-]++++++++[<++++++>-]<.";
    std::string wowcode = "++++++++[>++++[>++>+++>+++>+<<<<-]>+>+>->>+[<]<-]>>.>---.+++++++..+++.>>.<-.<.+++.------.--------.>>+.>++.";
    Cerebral test(wowcode);
    test.execute();
    //test.debug();
    return 0;
}
