class A
{
};
class B : virtual public A
{
};
class C : virtual public A
{
};
class D : public A
{
};
class E : public B,public C
{
};
int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
