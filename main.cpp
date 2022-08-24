#include "dog.h"
#include "shared_ptr_toy.h"

int main() {
    shared_ptr_toy a("Ball");
    shared_ptr_toy b("Bone");

    {
        Dog ABC(make_shared_ptr_toy("myToy3"));

        {
            Dog E(b);
        }

        Dog AB(make_shared_ptr_toy(b));
        ABC.setLovelyToy(a);
    }

return 0;
}
