Array of 5 characters: 
char v[5];

Pointer can be declared, p points to character:
char* p ;

In declarations:
[] means "array of"
* means "pointer to"

Arrays have 0 as lower bound, so 5 elements above, v[0] ... v[4]. 
Size of array must be constant expression.

char* p = &v[4]; //p points to v's fifth element
char x = \*p; // \*p is the object that p points to

Prefix unary 
* means "contents of"
& means "address of" 

p: |__| ------points to 
                      |
v : |_1_|_2_|_3_|_4_|_5_| 
