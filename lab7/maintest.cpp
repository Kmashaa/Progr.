#include "class.h"
#include <assert.h>


#undef main

int main() {
List list;
assert(list.AddNode("a","a","a",10)==1);
assert(list.AddNode("b","b","b",20)==0);
assert(list.AddMoney("a",20)==30);
assert(list.AddMoney("c",100)==0);
assert(list.Payment("a",20)==10);
assert(list.Payment("c",100)==0);
assert(list.Transfer("b","a",5)==15);
assert(list.Transfer("b","c",5)==2);
assert(list.Transfer("c","b",5)==1);
assert(list.Balance("a")==15);
assert(list.Balance("c")==0);
assert(list.Receipt("a")==0);
assert(list.Information()==0);
    
printf("All tests passed successful");
return 0;
}
