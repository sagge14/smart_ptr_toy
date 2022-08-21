#include <memory>
#include "dog.h"
#include "shared_ptr_toy.h"

int main() {
    shared_ptr_toy a("Ball");
    shared_ptr_toy b("Bone");
    auto* c = new shared_ptr_toy("Toy*"); //в такой случае придется удалять в ручную..

    if(true)
        Dog EE(*c);

    delete c; // даляем Toy*

    if(true)
    {
        Dog ABC(make_shared_ptr_toy("myToy3"));

        if(true)
            Dog E(b);
        
        Dog AB(make_shared_ptr_toy(b));
        ABC.setLovelyToy(a);
    }

return 0;
}
