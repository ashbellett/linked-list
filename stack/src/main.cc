#include "../include/test-stack.hh"

int main(void) {
    performTest(testCapacity, "Capacity:\t");
    performTest(testClear, "Clear:\t\t");
    performTest(testEmpty, "Empty:\t\t");
    performTest(testFull, "Full:\t\t");
    performTest(testLength, "Length:\t\t");
    performTest(testPeek, "Peek:\t\t");
    performTest(testPop, "Pop:\t\t");
    performTest(testPush, "Push:\t\t");
    return 0;
}
