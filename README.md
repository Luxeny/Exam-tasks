- ### Ответы на вопросы к экзамену - [Программирование от А до Я](https://docs.google.com/spreadsheets/d/1lr44XEDsHwRocFPMpMzIEDMQr0SpBjEp6g6FZkfUpwU/edit?usp=sharing)
- ### Ответы на задания к экзамену - [Посмотреть решения](https://github.com/Luxeny/Exam-tasks/tree/main/tasks)

# Задания к экзамену

1. Нахождение суммы и произведения элементов массива.
2. Нахождение максимального элемента массива.
3. Нахождение минимального элемента массива.
4. Найти максимальные и минимальный элемент матрицы и поменять их местами.
5. Напишите программу, определяющую число слов в строке. Одно слово от другого отделяется одним пробелом.
6. Транспонирование матрицы.
7. Поворот матрицы на 90 градусов по часовой стрелке.
8. Сортировка методом пузырька.
9. Даны четыре точки A1(x1, y1), А2(х2, у2), А3(х3, у3), А4(х4, у4). Определить, будут ли они вершинами параллелограмма.
10. Даны три положительных числа а, b, с. Проверить, могут ли они быть длинами сторон треугольника. Если да, то вычислить площадь этого треугольника.
11. Замена элементов на главной диагонали. Блок-схема, программа.
12. Инверсия массива. Блок-схема, программа.
13. Вычислить сумму чисел в каждой строке матрицы. Блок-схема, программа.
14. Вычислить сумму отрицательных чисел в каждом столбце матрицы. Блок-схема, программа.
15. Вычислить сумму чисел на главной и побочной диагоналях матрицы. Блок-схема, программа.
16. Вычислить среднее значение чисел в каждом столбце массива.
17. В небоскребе N этажей и всего один подъезд; на каждом этаже по 3 квартиры; лифт может останавливаться только на нечетных этажах. Человек садится в лифт и набирает номер нужной ему квартиры М. На какой этаж должен доставить лифт пассажира?
18. Год является високосным, если его номер кратен 4, однако из кратных 100 високосными являются лишь кратные 400 (например, 1700, 1800 и 1900 – невисокосные года, 2000 – високосный). Дано натуральное число N. Определить, является ли високосным год с таким номером.
19. Напишите программу, которая подсчитывает стоимость телеграммы, текст которой вводится с клавиатуры.
20. Заданы фамилия, имя и отчество учащегося, разделенные пробелами. Напишите программу, печатающую фамилию ученика и его инициалы.
21. Определить, является ли введенное натуральное число простым.

## Конспект к заданиям:
17. Определить номер этажа, на котором находится квартира:
```num_floor = (M - 1) / 3 + 1;```

Проверка на допустимость номера квартиры:
```if (M < 1 || M > 3 * N)```

18. Условие на високосный год
```if ((N % 4 == 0 && N % 100 != 0) || (N % 400 == 0))```
