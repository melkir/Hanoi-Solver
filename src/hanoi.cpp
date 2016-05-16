//
// Created by melkir on 16/05/16.
//

#include "hanoi.h"

Hanoi::Hanoi(unsigned int n) : m_tower1(n), m_tower2(n), m_tower3(n) {
    m_disks.reserve(n);
    for (int i = n; i > 0; --i) {
        m_disks.push_back(Disk(i));
        m_tower1.push(m_disks.back());
    }
}


Tower &Hanoi::tower(unsigned int num) {
    if (num == 1) return m_tower1;
    else if (num == 2) return m_tower2;
    else if (num == 3) return m_tower3;
    else throw invalid_argument("No tower corresponding to the number : " + num);
}

void Hanoi::move(Tower &from, Tower &to) {
    const Disk &disk = from.pop();
    to.push(disk);
}







