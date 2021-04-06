//
// Created by Christian Holmqvist on 2020-05-11.
//

#ifndef CONTAINERS_CIRCULAR_BUFFER_HPP
#define CONTAINERS_CIRCULAR_BUFFER_HPP

#include <iostream>
#include <array>
#include <stdexcept>
#include <iterator>

template<typename T, int cap, typename Container = std::array<T, cap>>
class CircularBuffer {
public:
    CircularBuffer() : _head(0), _tail(0), _size(0), _current(0), _capacity(cap) {}

    T& head() {
        return c.at(_head);
    }
    T& rail() {
        return c.at(_tail);
    }

    T const& head() const{
        return c.at(_head);
    }

    T const& tail() const {
        return c.at(_tail);
    }

    void push_back(T val) noexcept {
        if(_current >= _capacity) {
            _current = 0;
        }
        c.at(_current++) = val;
        _tail = _current -1;

        if(_size++ >= _capacity) {
            _size = _capacity;
            _head++;
            if(_head >= _capacity) {
                _head = 0;
            }
        }
    }
    void place_back(T val) {
        if(full()) {
            throw std::overflow_error("Place back(): full buffer");
        }
        push_back(val);
    }

    void pop() {
        if(empty()) {
            throw std::underflow_error("pop(): empty buffer");
        }
        _head++;
        if(_head >= _capacity) {
            _head = 0;
        }
        _size--;
    }

    std::size_t size() const noexcept {
        return _size;
    }
    std::size_t capacity() const noexcept {
        return _capacity;
    }

    bool empty() const noexcept {
        return _size <= 0;
    }
    bool full() const noexcept {
        return _size >= _capacity;
    }

    /***
     * Create a circular buffer iterator
     */
    template<typename Buffer, typename Iterator>
    class CircularBufferIterator {
    public:
        using iterator_category = std::forward_iterator_tag;
        using value_type = typename Buffer::value_type;
        using difference_type = std::ptrdiff_t;
        using pointer = typename Buffer::value_type*;
        using reference = typename Buffer::value_type&;

        CircularBufferIterator() : _done(true) {}

        CircularBufferIterator(const Buffer& buf, Iterator begin) : _buf(buf), _begin(begin), _cursor(begin), _done(false) {}

        CircularBufferIterator(const Buffer& buf, Iterator begin, bool done) : _buf(buf), _begin(begin), _cursor(begin), _done(done) {}

        reference operator*() const {
            return *_cursor;
        }

        reference operator->() const {
            return _cursor;
        }

        CircularBufferIterator& operator++() {
            ++_cursor;
            if(_cursor == _buf.end()) {
                _cursor = const_cast<Iterator>(_buf.begin());
            }
            _done = _cursor == _begin;

            return *this;
        }

        CircularBufferIterator& operator++(int) {
            iterator _tmp(*this);
            ++_cursor;
            if(_cursor == _buf.end()) {
                _cursor = const_cast<Iterator>(_buf.begin());
            }
            _done = _cursor == _begin;

            return _tmp;
        }

        bool operator==(const CircularBufferIterator& it) const {
            if(_done && it._done) {
                return true;
            }
            else if(!_done && !it.done) {
                return (this->_cursor == it._cursor);
            }
            return false;
        }

        bool operator!=(const CircularBufferIterator& it) const {
            return !(*this == it);
        }

    private:
        const Buffer& _buf;
        const Iterator _begin;
        Iterator _cursor;
        bool _done;
    };

    typedef CircularBufferIterator<Container, typename Container::iterator> iterator;

    iterator begin() {
        unsigned int offset = _head % _capacity;
        return CircularBuffer::iterator(c, c.begin() + offset);
    }

    iterator end() {
        unsigned int offset = _tail + 1 % _capacity;
        return CircularBuffer::iterator(c. c.begin() + offset, full());
    }

private:
    Container c;
    int _head;
    int _tail;
    int _size;
    int _capacity;
    int _current;
};

#endif //CONTAINERS_CIRCULAR_BUFFER_HPP
