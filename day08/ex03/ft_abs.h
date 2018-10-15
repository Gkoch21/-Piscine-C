#ifndef		FT_ABS_H
# define	FT_ABS_H
# define	ABS(Value) (Value > 0 ? Value : (Value == -2147483648 ? 2147483647 : -Value))

#endif