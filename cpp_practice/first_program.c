#include <stdio.h> // standard input, output

typedef struct  s_juepark
{
    int         eat_cnt;
}               t_juepark;

void
    init_juepark(t_juepark *jueaprk)
{
    jueaprk->eat_cnt = 0;
}

void
    eat(t_juepark *juepark)
{
    juepark->eat_cnt++;
    printf("I ate %d times.\n", juepark->eat_cnt);
    printf("I'm happy...\n");
}

int
    main()
{
    t_juepark juepark;

    init_juepark(&juepark);
    eat(&juepark);
}
