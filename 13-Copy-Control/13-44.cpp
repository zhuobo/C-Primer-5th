#include <memory>

class String {
public:
    String();
    String(const char*);
    size_t size() const {
        return first_free - elements;
    }
    size_t capacity() const {
        return cap - elements;
    }
    
private:
    static std::allocator<char*> alloc;
    void reallocate();
    void free();
    void chk_n_alloc(){
        if ( size() == capacity()) {
            reallocate();
        }
    }
    char *elements;
    char *first_free;
    char *cap;

};
