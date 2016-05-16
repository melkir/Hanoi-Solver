//
// Created by melkir on 16/05/16.
//

#ifndef HANOI_DISQUE_H
#define HANOI_DISQUE_H

#include <ostream>

class Disk {
private:
    int m_size;
public:
    Disk(int size = 0) : m_size(size) { }

    void setSize(int size) { m_size = size; }

    int getSize() const { return m_size; }

    friend std::ostream &operator<<(std::ostream &os, const Disk &disk) {
        return os << disk.m_size;
    }
};


#endif //HANOI_DISQUE_H
