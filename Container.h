#ifndef JB_2021A_CONTAINER_H
#define JB_2021A_CONTAINER_H

#include <vector>
#include <random>
#include <ctime>
#include <cassert>

template <typename T>
class Container {
public:
    Container();
    explicit Container(const std::vector<T> &data);

    void add(const T &elem);
    int erase(T const& elem);  // Возвращает 0, если элемент не найден, и 1, если элемент успешно удален
    T random_elem() const;

private:
    std::vector<T> buf;
};

template<typename T>
Container<T>::Container() {
    srand(static_cast<unsigned int>(time(0)));
}

template<typename T>
Container<T>::Container(const std::vector<T> &data) : buf(data) {
    srand(static_cast<unsigned int>(time(0)));
}

template <typename T>
void Container<T>::add(const T &elem) {
    try {
        buf.push_back(elem);
    } catch (std::exception& ex) {
        throw;
    }
}

template <typename T>
int Container<T>::erase(const T &elem) {
    int pos = -1;
    for (int i = 0; i < buf.size(); i++) {
        if (buf[i] == elem) {
            pos = i;
            break;
        }
    }
    if (pos == -1) {
        return 0;
    }
    if (pos == buf.size() - 1) {
        buf.pop_back();
    } else {
        buf[pos] = buf.back();
        buf.pop_back();
    }
    return 1;
}

template<typename T>
T Container<T>::random_elem() const {
    assert(!buf.empty());
    int random = abs((rand() << 16)|rand()) % buf.size();
    return buf[random];
}

#endif // JB_2021A_CONTAINER_H