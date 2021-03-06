# 智能指针规范

1. 不要使用相同的内置指针初始化(或者 reset )多个智能指针;

这是因为如果使用相同的内置指针初始化多个智能指针会导致多个智能指针指向同一空间, 而他们之间又*相互独立*。因此，当某个智能指针由于引用计数为0而被释放，另外一些智能指针会指向被释放的空间，导致 UAF 或者 Double Free；

2. 不 delete get() 返回的内置指针；

当不得不使用内置指针的时候，可以使用 get 返回一个内置指针，但是要保证这个内置指针不被释放。这是因为如果这个内置指针被释放，同样导致原来的智能指针成为野指针。

3. 不使用 get() 初始化 或者 reset 另一个智能指针；

这是因为 get() 返回的内置指针初始化的智能指针和原来的智能指针没有直接关联；

4. 如果使用了 get() 那个要记得，当原来的最后一个智能指针被销毁后，这个被 get 返回的指针就无效了

5. 如果使用智能指针管理的资源不是 new 分配的内存，记得传递一个删除器给它；
