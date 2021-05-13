#include <cassert>
#include <iostream>

using namespace std;

int main()
{

assert(-4==-1-3); //pruebo int
assert(2<3); //pruebo unsigned
assert(1.5==1.5); //pruebo punto flotante
assert(3.0/2.0==1.5);//pruebo punto flotante
assert(10e2==1000);//double
assert(true and true==true); //pruebo booleano
assert('a'=='a'); //pruebo char
assert('C'-'A'==2);//pruebo char
assert('B'-1=='A');//pruebo char
assert("hola" != "chau"); //pruebo string
assert("hola"s.length()==4);//pruebo string
assert("todo"s + "junto"s == "todojunto"s);//pruebo string


return 0;
}
