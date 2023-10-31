#ifndef BIT_MATH_H_
# define BIT_MATH_H_
# define SET_BIT(VAR,BIT_NO)   VAR=VAR|(1<<BIT_NO)

# define CLR_BIT(VAR,BIT_NO)   VAR=VAR &(~(1<<BIT_NO))


# define TOGGLE_BIT(VAR,BIT_NO)  VAR=VAR ^(1<<BIT_NO)


# define GET_BIT(VAR,BIT_NO)     ((VAR>>BIT_NO)&1) 
#define  SHIFT_RIGHT(REG,BIT_NO)  REG=REG>>BIT_NO      
#define  SHIFT_LIFT(REG,BIT_NO)  REG=REG<<BIT_NO      
#endif