# 关键字const

## 1. const 修饰基本数据类型
const 修饰基本数据类型，const 既可以放在类型说明符之前，也可以放在类型说明符之后，作用就是不改变这些变量的值即可。

```C++
const int a = 9;
// 等价
int const a = 9;

int const arr[] = {1, 2, 3};
// 等价
const int arr[] = {1, 2, 3};
```

## 2. const 修饰指针变量*和引用变量&
1. const 在星号*的左侧，则 const 修饰指针指向的变量，即指针指向常量；
2. const 在星号*的右侧，则 const 修饰指针本身，即常量指针指向非常量数据；

```C++
// a is a pointer point to the constant variable
// a是指向常量数据的指针
const int *a
int const *a

// b is a constant pointer point to a non-constant variable
// b是指向非常量数据的常量指针
int* const b;

// c is a constant pointer point to a constant variable
// c是指向常量数据的常量指针
const int* const c
```

