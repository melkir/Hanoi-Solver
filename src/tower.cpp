//
// Created by melkir on 16/05/16.
//

#include "tower.h"

void Tower::push(const Disk &disk) {
    try {
        if (m_disks.size() + 1 > m_capacity)
            throw logic_error("Capacity overload");
        else if (m_disks.size() != 0 && (m_disks.back()->getSize() < disk.getSize()))
            throw invalid_argument("This disk is superior to the previous one");
        else m_disks.push_back(&disk);
    } catch (const exception &e) {
        cerr << e.what() << endl;
    }
}

const Disk &Tower::pop() {
    if (m_disks.empty())
        throw logic_error("The tower doesn't contain any disk");
    const Disk *top = m_disks.back();
    m_disks.pop_back();
    return *top;
}




