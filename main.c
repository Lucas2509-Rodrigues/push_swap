#include "push_swap.h"

int main (int ac, char *av[])
{

    t_info info;
    

    
    if (ac == 1 || !av[2])
        return (0);
    init_info(&info);
    init_stack(&info.a, av);
    if (info.a == NULL)
    {
        printf("Error\n");
        return (1);
    }
    if (is_sorted(info.a))
    {
       // printf("the stack is already sorted");
    }
    else if (stack_size(info.a) == 2)
    {
        sa(&info);
       print_stack(&info);
    }
    else if (stack_size(info.a) == 3)
    {
        sort_three(&info);
        print_stack(&info);
    }
    else if (stack_size(info.a) == 5 || stack_size(info.a) == 4)
    {
        sort_five(&info);
        //print_stack(info.a);
    }
    return (0);
}


