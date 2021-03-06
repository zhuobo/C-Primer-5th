# 16. 模板与泛型编程

## 16.1 定义模板
1. 函数模板

    - 模板类型参数：可以像内置类型一样使用类型参数。
    - 非模板类型参数：非类型参数表示一个值，而不是类型，在需要使用常量表达式的地方，比如指定数组的大小。
    - 实例化函数模板：编译器会用推断出的模板参数来实例化一个特定的函数
    - inline 和 constexpr 的函数模板：
        ``` C++
        // inline 放在模板参数列表之后
        template <typename T> inline T min(const T&, const T&);
        ```
    - 类型无关的代码：
        * 模板的函数参数是 const 的引用：函数可以处理无法拷贝的类型，同时引用速度会更快；
        * 函数体中的判断仅仅使用小于号而不是同时使用大于号，模板程序应该尽量减少对实参类型的要求
    - 模板编译：
        * 当编译器遇到一个模板定义时，它并不生成代码，二是只有实例化出一个模板的特定版本才会生成模板，也就是当使用模板时编译器才会生成代码。
        * 当调用一个函数时，编译器只需要知道函数的声明，当要使用一个类类型的对象时，类的定义必须时可用的，但是类的成员函数不是必须的，因此通常可以将类定义和函数声明放在头文件，而普通函数的成员函数的定义放在源文件中。
        * 模板则不同，为了生成一个实例化的函数版本，编译器需要知道函数模板或者类模板成员函数的定义，因此模板的头文件通常同时包含声明和定义。

2. 类模板
类模板是用来生成类的，与函数模板不同，编译器不能推断类模板的参数类型，需要用户在模板名后的尖括号提供类型。
* 定义类模板：
```C++
template<typename T> class A {
public:
    A();
    A(std::vector<T> &v);
private:
    std::vector<T> data;
};
template<typename T> A<T>::A():data(std::vector<T>()) {}
```
* 实例化类模板
* 类模板的成员函数:如果在类模板内部定义，则属于隐式声明为内联合；如果在类模板外部定义，则每个成员函数都要以关键字 template 开始，写出类模板参数列表。
* 类范围内使用类模板名：可以直接使用类模板名而不用提供实参；
* 类范围外使用类模板名：需要提供类模板名和实参
* 类模板和友元：当一个类中包含友元，类和友元各自是否模板没有关系，如果一个类模板包含一个非模板友元，则友元可以访问所有的模板实例，如果友元自身是模板，类可以授权给所有友元实例，也可以只授权特定实例。
    - 一对一友好关系：同一类型的是 friend 关系
    ```C++
    template <typename> class A;
    template <typename> class B;
    template <typename> bool operator==(const A<T>&, const A<T>&);

    template<typename T> class A {
    friend class B<T>;
    friend bool operator==(const A<T>&, const A<T>&);
    };
    ```
    这里友元关系被限制在和相同类型实例化之间。

3. 模板参数
* 模板参数作用域：和其他的名字一样，模板参数会隐藏其外层作用域同名名字，但是模板内则不能出现其他同名名字。
* 模板声明：模板声明必须包含模板参数，一个文件所需要的所有模板的声明通常放在文件开始位置，出现在任何使用这些模板的代码之前；
* 使用类的类型成员：

## 16.2 模板实参推断
对于函数模板，编译器利用调用中的函数实参来确定其模板参数，从函数实参来确定模板实参的过程称为**模板实参推断**。
1. 类型转换与模板类型参数 
* 使用相同模板参数类型的函数参数：一个模板类型参数可以用作多个函数形参类型，由于只允许有限的几种类型转换，因此传递给这些形参的实参必须有相同的类型，如果希望对函数实参进行正常的类型转换，可以定义多个类型参数。
* 正常类型转换应用普通函数实参：如果函数的参数类型不是模板参数，会对实参进行正常的类型转换。
2. 函数模板显式实参
在某些情况下，编译器无法推断出模板实参的类型，比如函数的返回值类型和参数列表中都不相同。
```C++
// 在这种情况下，编译器无法根据函数实参推断出返回值T1
template<typename T1, typename T2, typename T3> T1 func(T2, T3);
```
在这种没有任何函数实参可以用来推导出T1类型的情况下，可以使用**显式模板实参**，显式模板实参在尖括号中给出，在函数名后面，在实参列表之前。比如这个例子，表示 T1 的类型是 long long。
```C++
auto val = func<long long>(ival, lngval);
```
3. 尾置返回类型与类型转换
像上面那样要求用户执行函数的返回类型无疑会增加用户的负担，因此可以使用**尾置返回类型**，用 decltype 来推断返回类型。
```C++
// 接受一对迭代器，返回第一个迭代器指向的内容
// 在参数列表之后声明返回的类型
template<typename It>
auto func(It beg, It end) -> decltype(*beg){
    return *beg;
}
```
4. 函数指针和实参推断
当使用一个函数模板初始化函数指针，或者用函数模板给函数指针赋值，编译器会使用函数指针的类型推断出模板实参。
```C++
template<typename T> int compare(const T &v1, const T &v2);

// 这里pf1指向 int compare(const int&, const int&)
int (*pf1)(const int&, const int &) = compare;
// 无法推断出模板实参类型
func(compare);
```


## 16.3 重载与模板

## 16.4 可变参数模板
## 16.5 模板特例化

