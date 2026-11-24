#include "push_swap.h"

int main (int ac, char *av[])
{

    t_node *a;

    a = NULL;

    if (ac == 1 || !av[2])
        return (1);
    init_stack(&a, av);
    if (a == NULL)
    {
        printf("Error\n");
        return (1);
    }
    if (is_sorted(a))
    {
        printf("the stack is already sorted");
    }
    else if (stack_size(a) == 2)
    {
        sa(&a);
        print_stack(a);
    }
    else if (stack_size(a) == 3)
    {
        sort_three(&a);
        print_stack(a);
    }
    return (0);
}
