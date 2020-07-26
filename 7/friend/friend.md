# 友元函数

类的友元函数定义在类的外部,但是有权访问类的 *private* 和 *protected* 成员。友元函数不是成员函数。友元可以是一个函数，也可以是一个类（类的所有成员都是友元）。

```C++
class Box {
    double width;
    public:
        double length;
        friend void printWidth( Box box );
        void setWidth( double wid );
};
```

