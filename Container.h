#ifndef JB_2021A_CONTAINER_H
#define JB_2021A_CONTAINER_H

template <typename T>
class Container {
public:
    Container();
    void add(const T& elem);
    void erase(const T& elem);

private:
    int size;
    int cur_pos;
};

#endif //JB_2021A_CONTAINER_H