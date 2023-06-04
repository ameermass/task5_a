#include "doctest.h"
#include "sources/MagicalContainer.hpp"
#include <stdexcept>

using namespace ariel;
using namespace std;

// Test case for initializing the MagicalContainer
TEST_CASE("Initialization of MagicalContainer") {
    MagicalContainer container;
    
    CHECK(container.size() == 0);
}

// Test case for inserting elements in the MagicalContainer
TEST_CASE("Inserting elements to MagicalContainer") {
    MagicalContainer container;

    container.addElement(5);
    CHECK(container.size() == 1);

    container.addElement(7);
    CHECK(container.size() == 2);

    CHECK_NOTHROW(container.addElement(9));
}

// Test case for verifying the correctness of MagicalContainer
TEST_CASE("Verifying elements of MagicalContainer") {
    MagicalContainer container;
    container.addElement(5);
    container.addElement(7);
    container.addElement(9);
    container.addElement(93);

    CHECK(container.contains(5) == true);
    CHECK(container.contains(7) == true);
    CHECK(container.contains(9) == true);
    CHECK(container.contains(10) == false);
    CHECK(container.contains(93) == true);
}

// Test case for the AscendingIterator with negative and positive numbers
TEST_CASE("AscendingIterator with Negative and Positive Numbers") {
    MagicalContainer container;
    container.addElement(-3);
    container.addElement(51);
    container.addElement(-2);
    container.addElement(0);
    container.addElement(4);
    container.addElement(-1425);
    container.addElement(3);
    container.addElement(-4);
    container.addElement(2);
    container.addElement(1);

    SUBCASE("Iterating over elements") {
        MagicalContainer::AscendingIterator it(container);
        CHECK(*it == -4);
        ++it;
        CHECK(*it == -3);
        ++it;
        CHECK(*it == -2);
        ++it;
        CHECK(*it == -1425);
        ++it;
        CHECK(*it == 0);
        ++it;
        CHECK(*it == 1);
        ++it;
        CHECK(*it == 2);
        ++it;
        CHECK(*it == 3);
        ++it;
        CHECK(*it == 4);
        ++it;
        CHECK(*it == 51);
        ++it;
        CHECK(it == it.end());
    }
}