## 指针和const

指针本身不可能并不意味着指向的对象不可变,同时指针不可变也不意味着不能用来修改指向的对象。下面第一行代码可以用ptr去修改val的值，只是ptr不可变罢了，而第二行则因为是常量指针指向常量对象，因此都不可变。

```c++
int *const ptr = &val; // ptr是一个常量指针,他指向int对象(ptr不可变,但是他指向的int对象可变)
const double *const ptr = *dval; // ptr是一个常量指针,指向的是double类型的常量对象(ptr不可变,dval也不可变)
```

