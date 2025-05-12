#ifndef __XSTD_H__
#define __XSTD_H__

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#define MY_MACRO(x) ((x) * 2)

typedef struct {
    int member1;   /**< Description of member1 */
    float member2; /**< Description of member2 */
} my_struct_t;

typedef enum {
    VALUE1, /**< Description of VALUE1 */
    VALUE2, /**< Description of VALUE2 */
    VALUE3  /**< Description of VALUE3 */
} my_enum_t;

int my_function(int param1, int param2);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // __XSTD_H__
