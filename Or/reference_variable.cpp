#include<bits/stdc++.h>

int main()
{
    int a, *p;
    a = 5;

    int &b = a; // Reference variable

    printf("a before: %d\n", a);
    printf("b before: %d\n", b);

    p = &a;
    printf("p before: %d\n", p);
    p = &b;
    printf("p before: %d\n", p);

    b++;

    printf("a after: %d\n", a);
    printf("b after: %d\n", b);

    p = &a;
    printf("p after: %d\n", p);
    p = &b;
    printf("p after: %d\n", p);

    return 0;
}

/*

. int &b = a;
. Another name for to refer same variable
. Share same address
. It is internal poiner
. Reference variable can not be updated to store address of another variable while pointers can be modified
. Should be initialised then and there at the time of declaration (error: 'b' declared as reference but not initialized)
. A reference variable provides a new name to the existing variable. 
  It is de-referenced implicitly and does not need a de-referencing operator(*) to retrieve the value referenced. 
  Whereas, to retrieve the value pointed to by a pointer we need de-referencing operator(*) which is known as explicit de-referencing.

*/