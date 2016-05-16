//
// Created by melkir on 16/05/16.
//

#ifndef HANOI_HANOI_H
#define HANOI_HANOI_H


#include <vector>
#include "tower.h"

class Hanoi {
public:
    Hanoi(unsigned int n);

    Tower &tower(unsigned int num);

    void move(Tower &from, Tower &to);

    friend std::ostream &operator<<(std::ostream &os, const Hanoi &h) {
        os << "\tTower 1 : " << h.m_tower1
        << "\n\tTower 2 : " << h.m_tower2
        << "\n\tTower 3 : " << h.m_tower3;
        return os;
    }

private:
    std::vector<Disk> m_disks;
    Tower m_tower1;
    Tower m_tower2;
    Tower m_tower3;
};

#endif //HANOI_HANOI_H
