### Container
Так как нет почти никаких данных и условий, то я решил реализовать достаточно быстрый контейнер, где добавление и рандом
выполняются за O(1), а удаление за O(n). При условии, что операция удаления будет работать сильно реже, чем добавления, это решение является оптимальным. \
Не уверен, что declaration и definition методов класса стоит класть в один хэдер, можно в два, но я такой вариант прочитал в Google code style, возможно, я неправильно понял, что там написано, но ничего лучше не нашлось.
Добавление в конец ```#include "Continer.cpp"``` и использование ```export``` выдавало ошибку компиляции. 