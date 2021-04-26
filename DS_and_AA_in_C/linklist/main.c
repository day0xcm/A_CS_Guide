#include <stdio.h>
#include "linklist.h"

int main(){
	create_list('A');
	create_list('B');
	create_list('C');
	print_linklist();
	
	delete_node(2);
	print_linklist();
	
	return 0;	
}
