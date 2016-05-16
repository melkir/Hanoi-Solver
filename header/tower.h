//
// Created by melkir on 16/05/16.
//

#ifndef HANOI_TOUR_H
#define HANOI_TOUR_H


#include <vector>
#include "disk.h"
#include <iostream>

using namespace std;

class Tower {
private:
    int m_capacity;
    std::vector<const Disk *> m_disks;

public:
    Tower(int capacity) : m_capacity{capacity} {
        m_disks.reserve((unsigned long) m_capacity);
    }

    Tower(const Tower &other) = delete;

    Tower &operator=(const Tower &other) = delete;

    int getSize() const {
        return (int) m_disks.size();
    }

    void push(const Disk &disk);

    const Disk &pop();

    friend std::ostream &operator<<(std::ostream &os, const Tower &tower) {
        for (auto i = tower.m_disks.begin(); i != tower.m_disks.end(); ++i) {
            os << '(' << **i << ") ";
        }
        int size_of_empty_elem = (int) (tower.m_capacity - tower.m_disks.size());
        for (int i = 0; i < size_of_empty_elem; ++i) {
            os << "(-) ";
        }
        return os;
    }

};


#endif //HANOI_TOUR_H
