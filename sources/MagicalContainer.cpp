#include "MagicalContainer.hpp"
#include <algorithm>

namespace ariel {

    // AscendingIterator methods

    MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer& magicalContainer) : container(magicalContainer)
    {
        // this->container = &magicalContainer;
        // this->sorted_elements = magicalContainer.elements;
        // std::sort(sorted_elements.begin(), sorted_elements.end());
        // this->position = 0;
    }

    MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer& magicalContainer, int position) : container(magicalContainer) , position(position)
    {
        // this->container = &magicalContainer;
        // this->sorted_elements = magicalContainer.elements;
        // std::sort(sorted_elements.begin(), sorted_elements.end());
        // this->position = position;
    }

    // MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator& other) : 
    // {
    //     // this->container = other.container;
    //     // this->sorted_elements = other.sorted_elements;
    //     // this->position = other.position;
    // }

    MagicalContainer::AscendingIterator::~AscendingIterator() {
        // No cleanup necessary
    }

    MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator=(const AscendingIterator& other) {
        // this->container = other.container;
        // this->sorted_elements = other.sorted_elements;
        // this->position = other.position;
         return *this;
    }

    bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator& other) const {
        return &this->container == &other.container && this->position == other.position;
    }

    bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator& other) const {
        return !(*this == other);
    }

    bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator& other) const {
        return this->position > other.position;
    }

    bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator& other) const {
        return this->position < other.position;
    }

    int MagicalContainer::AscendingIterator::operator*() const {
        return 0;
    }

    MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator++() {
        position++;
        return *this;
    }

    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin() const {
        return AscendingIterator(container, 0);
    }

    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end() const {
        return AscendingIterator(container, container.size());
    }



    // Implementations for SideCrossIterator

    MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer& magicalContainer) : container(magicalContainer)
    {

    }

    MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer& magicalContainer, int position, bool flag) : container(magicalContainer)
    {

    }

    MagicalContainer::SideCrossIterator::~SideCrossIterator() {
        // No cleanup necessary
    }

    MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator& other) {
         return *this;
    }

    bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator& other) const {
        return &this->container == &other.container;
    }

    bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator& other) const {
        return !(*this == other);
    }

    bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator& other) const {
        return this->position_start > other.position_start;
    }

    bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator& other) const {
        return this->position_start < other.position_start;
    }

    int MagicalContainer::SideCrossIterator::operator*() const {
        return 0;
    }

    MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator++() {
        position_start++;
        return *this;
    }

    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin() const {
        return SideCrossIterator(container, 0, true);
    }

    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end() const {
        return SideCrossIterator(container, container.size(), true);
    }

    // Implementations for PrimeIterator

    MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer& magicalContainer) : container(magicalContainer)
    {

    }

    MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer& magicalContainer, int position) : container(magicalContainer) , position(position)
    {

    }

    MagicalContainer::PrimeIterator::~PrimeIterator() {
        // No cleanup necessary
    }

    MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator=(const PrimeIterator& other) {
         return *this;
    }

    bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator& other) const {
        return &this->container == &other.container;
    }

    bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator& other) const {
        return !(*this == other);
    }

    bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator& other) const {
        return this->position > other.position;
    }

    bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator& other) const {
        return this->position < other.position;
    }

    int MagicalContainer::PrimeIterator::operator*() const {
        return 0;
    }

    MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator++() {
        position++;
        return *this;
    }

    MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin() const {
        return PrimeIterator(container, 0);
    }

    MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end() const {
        return PrimeIterator(container, container.size());
    }


}
