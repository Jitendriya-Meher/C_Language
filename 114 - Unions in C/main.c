struct demo
{
    int a;
    char b;
    float c;
};

union abc
{
    int a;
    char b;
    float c;
};

int main(){

    struct demo s ={1,'c',3.2};
    printf("%d %c %f \n",s.a,s.b,s.c);
    printf("%d \n",sizeof(s));

    union abc u ={1,'c',3.2};
    printf("%d %c %f \n",u.a,u.b,u.c);
    printf("%d\n",sizeof(u));

    u.a = 1234;
    printf("%d\n",u.a);

    u.b = 'M';
    printf("%c\n",u.b);

    u.c = 1234.78;
    printf("%f\n",u.c);

    return 0;

}
