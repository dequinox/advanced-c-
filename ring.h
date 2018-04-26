#ifndef RING_H
#define RING_H

#include <iostream>

template <class T>
class ring
{
      private:
            int m_pos;
            int m_size;
            T *m_values;

      public:
            class iterator;
      public:
            ring(int size) : m_pos(0), m_size(size), m_values(NULL) {
                  m_values = new T[size];
            }

            ~ring() {
                  delete [] m_values;
            }

            int size()
            {
                  return m_size;
            }

            void add(T value)
            {
                  m_values[m_pos++] = value;
                  m_pos %= m_size;
            }

            T &get(int pos)
            {
                  return m_values[pos];
            }

            iterator begin()
            {
                  return iterator(0, *this);
            }

            iterator end()
            {
                  return iterator(m_size, *this);
            }
};

template<class T>
class ring<T>::iterator
{
      private:
            int m_pos;
            ring &m_ring;
      public:
            iterator(int pos, ring &aRing) : m_pos(pos), m_ring(aRing) {}

            void print()
            {
                  std::cout << "Iterator printed " << T() << std::endl;
            }

            const iterator operator++(int) {
                  ring<T>::iterator temp(*this);
                  ++m_pos;
                  return temp;
            }

            const iterator &operator++() {
                  ++m_pos;
                  return *this;
            }

            T &operator*()
            {
                  return m_ring.get(m_pos);
            }

            bool operator!=(const iterator &other) const
            {
                  return m_pos != other.m_pos;
            }
};

#endif // RING_H
