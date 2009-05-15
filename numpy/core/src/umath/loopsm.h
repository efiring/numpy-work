
#define BOOL_invert_m BOOL_logical_not_m
#define BOOL_negative_m BOOL_logical_not_m
#define BOOL_add_m BOOL_logical_or_m
#define BOOL_bitwise_and_m BOOL_logical_and_m
#define BOOL_bitwise_or_m BOOL_logical_or_m
#define BOOL_bitwise_xor_m BOOL_logical_xor_m
#define BOOL_multiply_m BOOL_logical_and_m
#define BOOL_subtract_m BOOL_logical_xor_m
#define BOOL_fmax_m BOOL_maximum_m
#define BOOL_fmin_m BOOL_minimum_m

/*
 *****************************************************************************
 **                             BOOLEAN LOOPS                               **
 *****************************************************************************
 */

NPY_NO_EXPORT void
BOOL_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BOOL_not_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BOOL_greater_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BOOL_greater_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BOOL_less_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BOOL_less_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BOOL_logical_and_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BOOL_logical_or_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BOOL_logical_xor_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BOOL_maximum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BOOL_minimum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BOOL_absolute_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BOOL_logical_not_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BOOL_ones_like_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

/*
 *****************************************************************************
 **                           INTEGER LOOPS
 *****************************************************************************
 */

#define BYTE_floor_divide_m BYTE_divide_m
#define BYTE_fmax_m BYTE_maximum_m
#define BYTE_fmin_m BYTE_minimum_m

NPY_NO_EXPORT void
BYTE_ones_like_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
BYTE_square_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
BYTE_reciprocal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
BYTE_conjugate_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
BYTE_negative_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
BYTE_logical_not_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
BYTE_invert_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BYTE_add_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BYTE_subtract_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BYTE_multiply_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BYTE_bitwise_and_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BYTE_bitwise_or_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BYTE_bitwise_xor_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BYTE_left_shift_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BYTE_right_shift_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




NPY_NO_EXPORT void
BYTE_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BYTE_not_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BYTE_greater_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BYTE_greater_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BYTE_less_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BYTE_less_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BYTE_logical_and_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BYTE_logical_or_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BYTE_logical_xor_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BYTE_maximum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BYTE_minimum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BYTE_true_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
BYTE_power_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
BYTE_fmod_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




#define UBYTE_floor_divide_m UBYTE_divide_m
#define UBYTE_fmax_m UBYTE_maximum_m
#define UBYTE_fmin_m UBYTE_minimum_m

NPY_NO_EXPORT void
UBYTE_ones_like_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
UBYTE_square_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
UBYTE_reciprocal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
UBYTE_conjugate_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UBYTE_negative_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UBYTE_logical_not_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UBYTE_invert_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UBYTE_add_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UBYTE_subtract_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UBYTE_multiply_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UBYTE_bitwise_and_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UBYTE_bitwise_or_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UBYTE_bitwise_xor_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UBYTE_left_shift_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UBYTE_right_shift_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




NPY_NO_EXPORT void
UBYTE_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UBYTE_not_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UBYTE_greater_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UBYTE_greater_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UBYTE_less_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UBYTE_less_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UBYTE_logical_and_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UBYTE_logical_or_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UBYTE_logical_xor_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UBYTE_maximum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UBYTE_minimum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UBYTE_true_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UBYTE_power_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UBYTE_fmod_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UBYTE_absolute_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
BYTE_absolute_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UBYTE_sign_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
BYTE_sign_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
BYTE_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UBYTE_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
BYTE_remainder_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UBYTE_remainder_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));





#define SHORT_floor_divide_m SHORT_divide_m
#define SHORT_fmax_m SHORT_maximum_m
#define SHORT_fmin_m SHORT_minimum_m

NPY_NO_EXPORT void
SHORT_ones_like_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
SHORT_square_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
SHORT_reciprocal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
SHORT_conjugate_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
SHORT_negative_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
SHORT_logical_not_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
SHORT_invert_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
SHORT_add_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
SHORT_subtract_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
SHORT_multiply_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
SHORT_bitwise_and_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
SHORT_bitwise_or_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
SHORT_bitwise_xor_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
SHORT_left_shift_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
SHORT_right_shift_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




NPY_NO_EXPORT void
SHORT_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
SHORT_not_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
SHORT_greater_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
SHORT_greater_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
SHORT_less_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
SHORT_less_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
SHORT_logical_and_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
SHORT_logical_or_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
SHORT_logical_xor_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
SHORT_maximum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
SHORT_minimum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
SHORT_true_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
SHORT_power_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
SHORT_fmod_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




#define USHORT_floor_divide_m USHORT_divide_m
#define USHORT_fmax_m USHORT_maximum_m
#define USHORT_fmin_m USHORT_minimum_m

NPY_NO_EXPORT void
USHORT_ones_like_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
USHORT_square_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
USHORT_reciprocal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
USHORT_conjugate_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
USHORT_negative_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
USHORT_logical_not_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
USHORT_invert_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
USHORT_add_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
USHORT_subtract_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
USHORT_multiply_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
USHORT_bitwise_and_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
USHORT_bitwise_or_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
USHORT_bitwise_xor_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
USHORT_left_shift_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
USHORT_right_shift_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




NPY_NO_EXPORT void
USHORT_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
USHORT_not_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
USHORT_greater_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
USHORT_greater_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
USHORT_less_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
USHORT_less_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
USHORT_logical_and_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
USHORT_logical_or_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
USHORT_logical_xor_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
USHORT_maximum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
USHORT_minimum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
USHORT_true_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
USHORT_power_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
USHORT_fmod_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
USHORT_absolute_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
SHORT_absolute_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
USHORT_sign_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
SHORT_sign_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
SHORT_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
USHORT_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
SHORT_remainder_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
USHORT_remainder_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));





#define INT_floor_divide_m INT_divide_m
#define INT_fmax_m INT_maximum_m
#define INT_fmin_m INT_minimum_m

NPY_NO_EXPORT void
INT_ones_like_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
INT_square_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
INT_reciprocal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
INT_conjugate_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
INT_negative_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
INT_logical_not_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
INT_invert_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
INT_add_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
INT_subtract_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
INT_multiply_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
INT_bitwise_and_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
INT_bitwise_or_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
INT_bitwise_xor_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
INT_left_shift_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
INT_right_shift_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




NPY_NO_EXPORT void
INT_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
INT_not_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
INT_greater_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
INT_greater_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
INT_less_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
INT_less_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
INT_logical_and_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
INT_logical_or_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
INT_logical_xor_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
INT_maximum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
INT_minimum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
INT_true_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
INT_power_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
INT_fmod_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




#define UINT_floor_divide_m UINT_divide_m
#define UINT_fmax_m UINT_maximum_m
#define UINT_fmin_m UINT_minimum_m

NPY_NO_EXPORT void
UINT_ones_like_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
UINT_square_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
UINT_reciprocal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
UINT_conjugate_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UINT_negative_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UINT_logical_not_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UINT_invert_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UINT_add_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UINT_subtract_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UINT_multiply_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UINT_bitwise_and_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UINT_bitwise_or_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UINT_bitwise_xor_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UINT_left_shift_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UINT_right_shift_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




NPY_NO_EXPORT void
UINT_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UINT_not_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UINT_greater_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UINT_greater_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UINT_less_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UINT_less_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UINT_logical_and_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UINT_logical_or_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UINT_logical_xor_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UINT_maximum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UINT_minimum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UINT_true_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UINT_power_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UINT_fmod_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UINT_absolute_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
INT_absolute_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UINT_sign_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
INT_sign_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
INT_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UINT_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
INT_remainder_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UINT_remainder_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));





#define LONG_floor_divide_m LONG_divide_m
#define LONG_fmax_m LONG_maximum_m
#define LONG_fmin_m LONG_minimum_m

NPY_NO_EXPORT void
LONG_ones_like_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
LONG_square_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
LONG_reciprocal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
LONG_conjugate_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONG_negative_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONG_logical_not_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONG_invert_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONG_add_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONG_subtract_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONG_multiply_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONG_bitwise_and_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONG_bitwise_or_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONG_bitwise_xor_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONG_left_shift_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONG_right_shift_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




NPY_NO_EXPORT void
LONG_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONG_not_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONG_greater_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONG_greater_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONG_less_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONG_less_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONG_logical_and_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONG_logical_or_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONG_logical_xor_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONG_maximum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONG_minimum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONG_true_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONG_power_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONG_fmod_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




#define ULONG_floor_divide_m ULONG_divide_m
#define ULONG_fmax_m ULONG_maximum_m
#define ULONG_fmin_m ULONG_minimum_m

NPY_NO_EXPORT void
ULONG_ones_like_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
ULONG_square_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
ULONG_reciprocal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
ULONG_conjugate_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONG_negative_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONG_logical_not_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONG_invert_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONG_add_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONG_subtract_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONG_multiply_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONG_bitwise_and_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONG_bitwise_or_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONG_bitwise_xor_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONG_left_shift_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONG_right_shift_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




NPY_NO_EXPORT void
ULONG_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONG_not_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONG_greater_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONG_greater_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONG_less_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONG_less_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONG_logical_and_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONG_logical_or_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONG_logical_xor_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONG_maximum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONG_minimum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONG_true_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONG_power_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONG_fmod_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONG_absolute_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONG_absolute_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONG_sign_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONG_sign_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONG_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONG_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONG_remainder_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONG_remainder_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));





#define LONGLONG_floor_divide_m LONGLONG_divide_m
#define LONGLONG_fmax_m LONGLONG_maximum_m
#define LONGLONG_fmin_m LONGLONG_minimum_m

NPY_NO_EXPORT void
LONGLONG_ones_like_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
LONGLONG_square_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
LONGLONG_reciprocal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
LONGLONG_conjugate_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONGLONG_negative_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONGLONG_logical_not_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONGLONG_invert_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGLONG_add_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONGLONG_subtract_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONGLONG_multiply_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONGLONG_bitwise_and_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONGLONG_bitwise_or_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONGLONG_bitwise_xor_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONGLONG_left_shift_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONGLONG_right_shift_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




NPY_NO_EXPORT void
LONGLONG_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGLONG_not_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGLONG_greater_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGLONG_greater_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGLONG_less_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGLONG_less_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGLONG_logical_and_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGLONG_logical_or_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGLONG_logical_xor_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGLONG_maximum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGLONG_minimum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGLONG_true_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONGLONG_power_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONGLONG_fmod_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




#define ULONGLONG_floor_divide_m ULONGLONG_divide_m
#define ULONGLONG_fmax_m ULONGLONG_maximum_m
#define ULONGLONG_fmin_m ULONGLONG_minimum_m

NPY_NO_EXPORT void
ULONGLONG_ones_like_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
ULONGLONG_square_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
ULONGLONG_reciprocal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
ULONGLONG_conjugate_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONGLONG_negative_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONGLONG_logical_not_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONGLONG_invert_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONGLONG_add_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONGLONG_subtract_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONGLONG_multiply_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONGLONG_bitwise_and_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONGLONG_bitwise_or_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONGLONG_bitwise_xor_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONGLONG_left_shift_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONGLONG_right_shift_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




NPY_NO_EXPORT void
ULONGLONG_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONGLONG_not_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONGLONG_greater_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONGLONG_greater_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONGLONG_less_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONGLONG_less_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONGLONG_logical_and_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONGLONG_logical_or_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONGLONG_logical_xor_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONGLONG_maximum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONGLONG_minimum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONGLONG_true_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONGLONG_power_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONGLONG_fmod_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONGLONG_absolute_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONGLONG_absolute_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONGLONG_sign_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONGLONG_sign_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONGLONG_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONGLONG_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONGLONG_remainder_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONGLONG_remainder_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


/*
 *****************************************************************************
 **                             FLOAT LOOPS                                 **
 *****************************************************************************
 */

NPY_NO_EXPORT void
FLOAT_add_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_subtract_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_multiply_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
FLOAT_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_not_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_less_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_less_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_greater_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_greater_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_logical_and_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_logical_or_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_logical_xor_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
FLOAT_logical_not_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_isnan_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_isinf_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_isfinite_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_signbit_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
FLOAT_maximum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_minimum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
FLOAT_fmax_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_fmin_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_floor_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
FLOAT_remainder_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
FLOAT_square_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
FLOAT_reciprocal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));


NPY_NO_EXPORT void
FLOAT_ones_like_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
FLOAT_conjugate_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
FLOAT_absolute_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_negative_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_sign_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_modf_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

#ifdef HAVE_FREXPF
NPY_NO_EXPORT void
FLOAT_frexp_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));
#endif

#ifdef HAVE_LDEXPF
NPY_NO_EXPORT void
FLOAT_ldexp_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));
#endif

#define FLOAT_true_divide_m FLOAT_divide_m






NPY_NO_EXPORT void
DOUBLE_add_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_subtract_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_multiply_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
DOUBLE_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_not_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_less_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_less_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_greater_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_greater_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_logical_and_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_logical_or_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_logical_xor_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
DOUBLE_logical_not_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_isnan_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_isinf_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_isfinite_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_signbit_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
DOUBLE_maximum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_minimum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
DOUBLE_fmax_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_fmin_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_floor_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
DOUBLE_remainder_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
DOUBLE_square_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
DOUBLE_reciprocal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));


NPY_NO_EXPORT void
DOUBLE_ones_like_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
DOUBLE_conjugate_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
DOUBLE_absolute_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_negative_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_sign_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_modf_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

#ifdef HAVE_FREXP
NPY_NO_EXPORT void
DOUBLE_frexp_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));
#endif

#ifdef HAVE_LDEXP
NPY_NO_EXPORT void
DOUBLE_ldexp_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));
#endif

#define DOUBLE_true_divide_m DOUBLE_divide_m






NPY_NO_EXPORT void
LONGDOUBLE_add_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_subtract_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_multiply_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONGDOUBLE_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_not_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_less_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_less_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_greater_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_greater_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_logical_and_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_logical_or_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_logical_xor_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONGDOUBLE_logical_not_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_isnan_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_isinf_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_isfinite_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_signbit_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONGDOUBLE_maximum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_minimum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONGDOUBLE_fmax_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_fmin_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_floor_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONGDOUBLE_remainder_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONGDOUBLE_square_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
LONGDOUBLE_reciprocal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));


NPY_NO_EXPORT void
LONGDOUBLE_ones_like_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
LONGDOUBLE_conjugate_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONGDOUBLE_absolute_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_negative_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_sign_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_modf_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

#ifdef HAVE_FREXPL
NPY_NO_EXPORT void
LONGDOUBLE_frexp_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));
#endif

#ifdef HAVE_LDEXPL
NPY_NO_EXPORT void
LONGDOUBLE_ldexp_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));
#endif

#define LONGDOUBLE_true_divide_m LONGDOUBLE_divide_m




/*
 *****************************************************************************
 **                           COMPLEX LOOPS                                 **
 *****************************************************************************
 */

NPY_NO_EXPORT void
CFLOAT_add_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_subtract_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_multiply_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_floor_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
CFLOAT_greater_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
CFLOAT_greater_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
CFLOAT_less_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_less_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_not_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_logical_and_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_logical_or_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_logical_xor_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_logical_not_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_isnan_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_isinf_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_isfinite_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_square_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
CFLOAT_reciprocal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
CFLOAT_ones_like_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
CFLOAT_conjugate_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_absolute_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_sign_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_maximum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_minimum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_fmax_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_fmin_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

#define CFLOAT_true_divide_m CFLOAT_divide_m

NPY_NO_EXPORT void
CDOUBLE_add_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_subtract_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_multiply_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_floor_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_greater_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_greater_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_less_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_less_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_not_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_logical_and_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_logical_or_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_logical_xor_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_logical_not_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_isnan_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_isinf_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_isfinite_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_square_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
CDOUBLE_reciprocal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
CDOUBLE_ones_like_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
CDOUBLE_conjugate_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_absolute_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_sign_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
CDOUBLE_maximum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
CDOUBLE_minimum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_fmax_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_fmin_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

#define CDOUBLE_true_divide_m CDOUBLE_divide_m

NPY_NO_EXPORT void
CLONGDOUBLE_add_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_subtract_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_multiply_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_floor_divide_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_greater_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_greater_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_less_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_less_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
CLONGDOUBLE_not_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_logical_and_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_logical_or_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_logical_xor_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_logical_not_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_isnan_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
CLONGDOUBLE_isinf_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
CLONGDOUBLE_isfinite_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
CLONGDOUBLE_square_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
CLONGDOUBLE_reciprocal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
CLONGDOUBLE_ones_like_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
CLONGDOUBLE_conjugate_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_absolute_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_sign_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
CLONGDOUBLE_maximum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
CLONGDOUBLE_minimum_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_fmax_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_fmin_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

#define CLONGDOUBLE_true_divide_m CLONGDOUBLE_divide_m

/*
 *****************************************************************************
 **                            OBJECT LOOPS                                 **
 *****************************************************************************
 */


NPY_NO_EXPORT void
OBJECT_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
OBJECT_not_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
OBJECT_greater_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
OBJECT_greater_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
OBJECT_less_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
OBJECT_less_equal_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
OBJECT_sign_m(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

