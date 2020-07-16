#include <iostream>
using std::cin; using std::endl;

#define TREE_WIDTH 256
#define WORDLENMAX 128

struct trie_node_st {
        int count;
        int pass;
        struct trie_node_st *next[TREE_WIDTH];
};

static trie_node_st root = {0, 0, {nullptr}};

static const char *spaces = " \t\n/.\"\'()";

void myfree(struct trie_node_st * rt) {
	for ( int i = 0; i < TREE_WIDTH; ++i ) {
		if ( rt -> next[i] != nullptr ) {
			myfree(rt -> next[i]);
			rt -> next[i] = nullptr;
		}
	}
	free(rt);
	return;
}

