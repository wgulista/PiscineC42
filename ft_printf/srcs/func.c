#include "../includes/ft_printf.h"

void    ft_init_func(t_func *func)
{
    func->f['s'] = &(conv_s);
    func->f['S'] = &(conv_s);
    func->f['p'] = &(conv_p);
    func->f['d'] = &(conv_d);
    func->f['D'] = &(conv_d);
    func->f['i'] = &(conv_d);
    func->f['o'] = &(conv_o);
    func->f['O'] = &(conv_o);
    func->f['u'] = &(conv_u);
    func->f['U'] = &(conv_u);
    func->f['x'] = &(conv_x);
    func->f['X'] = &(conv_x);
    func->f['c'] = &(conv_c);
    func->f['C'] = &(conv_c);
}