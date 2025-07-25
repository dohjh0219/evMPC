/* This file was automatically generated by CasADi 3.7.0.
 *  It consists of: 
 *   1) content generated by CasADi runtime: not copyrighted
 *   2) template code copied from CasADi source: permissively licensed (MIT-0)
 *   3) user code: owned by the user
 *
 */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) f_lpv_discrete_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

/* Add prefix to internal symbols */
#define casadi_c0 CASADI_PREFIX(c0)
#define casadi_c1 CASADI_PREFIX(c1)
#define casadi_c2 CASADI_PREFIX(c2)
#define casadi_c3 CASADI_PREFIX(c3)
#define casadi_clear CASADI_PREFIX(clear)
#define casadi_copy CASADI_PREFIX(copy)
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

void casadi_copy(const casadi_real* x, casadi_int n, casadi_real* y) {
  casadi_int i;
  if (y) {
    if (x) {
      for (i=0; i<n; ++i) *y++ = *x++;
    } else {
      for (i=0; i<n; ++i) *y++ = 0.;
    }
  }
}

void casadi_clear(casadi_real* x, casadi_int n) {
  casadi_int i;
  if (x) {
    for (i=0; i<n; ++i) *x++ = 0;
  }
}

static const casadi_int casadi_s0[3] = {3, 1, 1};
static const casadi_int casadi_s1[3] = {2, 1, 1};
static const casadi_int casadi_s2[3] = {1, 1, 1};

static const casadi_real casadi_c0[3] = {0., 0., -4.3247508008497281e-03};
static const casadi_real casadi_c1[9] = 
  {6.8529610574977073e-01, -5.7864756845831249e-02, 0., 3.7099398868208810e-01, 6.8529610574977073e-01, 0., 0., 0.,
  9.9959583169802202e-01};
static const casadi_real casadi_c2[6] = {-3.4828333580757824e-05, 1.3673526844606154e-06, 1.1108865580374650e-04, 3.4828333580757824e-05, -1.3673526844606154e-06, 1.1108865580374650e-04};
static const casadi_real casadi_c3[3] = {1.3748123500769063e+00, 9.6094546861279009e-02, 0.};

/* f_lpv_discrete:(x[3],u[2],delta)->(x_next[3]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_int i, j, k;
  casadi_real *rr, *w0=w+3, *w1=w+6, w3, w4, w5, *w6=w+21, *w7=w+24, *w8=w+30;
  const casadi_real *cs, *ct, *wr2;
  /* #0: @0 = [-0, -0, -0.00432475] */
  casadi_copy(casadi_c0, 3, w0);
  /* #1: @1 = zeros(3x1) */
  casadi_clear(w1, 3);
  /* #2: @2 = 
  [[0.685296, 0.370994, 0], 
   [-0.0578648, 0.685296, 0], 
   [0, 0, 0.999596]] */
  wr2 = casadi_c1;
  /* #3: @3 = input[0][0] */
  w3 = arg[0] ? arg[0][0] : 0;
  /* #4: @4 = input[0][1] */
  w4 = arg[0] ? arg[0][1] : 0;
  /* #5: @5 = input[0][2] */
  w5 = arg[0] ? arg[0][2] : 0;
  /* #6: @6 = vertcat(@3, @4, @5) */
  rr=w6;
  *rr++ = w3;
  *rr++ = w4;
  *rr++ = w5;
  /* #7: @1 = mac(@2,@6,@1) */
  for (i=0, rr=w1; i<1; ++i) for (j=0; j<3; ++j, ++rr) for (k=0, cs=wr2+j, ct=w6+i*3; k<3; ++k) *rr += cs[k*3]**ct++;
  /* #8: @6 = zeros(3x1) */
  casadi_clear(w6, 3);
  /* #9: @7 = 
  [[-3.48283e-05, 3.48283e-05], 
   [1.36735e-06, -1.36735e-06], 
   [0.000111089, 0.000111089]] */
  casadi_copy(casadi_c2, 6, w7);
  /* #10: @3 = input[1][0] */
  w3 = arg[1] ? arg[1][0] : 0;
  /* #11: @4 = input[1][1] */
  w4 = arg[1] ? arg[1][1] : 0;
  /* #12: @8 = vertcat(@3, @4) */
  rr=w8;
  *rr++ = w3;
  *rr++ = w4;
  /* #13: @6 = mac(@7,@8,@6) */
  for (i=0, rr=w6; i<1; ++i) for (j=0; j<3; ++j, ++rr) for (k=0, cs=w7+j, ct=w8+i*2; k<2; ++k) *rr += cs[k*3]**ct++;
  /* #14: @1 = (@1+@6) */
  for (i=0, rr=w1, cs=w6; i<3; ++i) (*rr++) += (*cs++);
  /* #15: @6 = [1.37481, 0.0960945, -0] */
  casadi_copy(casadi_c3, 3, w6);
  /* #16: @3 = input[2][0] */
  w3 = arg[2] ? arg[2][0] : 0;
  /* #17: @6 = (@6*@3) */
  for (i=0, rr=w6; i<3; ++i) (*rr++) *= w3;
  /* #18: @1 = (@1+@6) */
  for (i=0, rr=w1, cs=w6; i<3; ++i) (*rr++) += (*cs++);
  /* #19: @0 = (@0+@1) */
  for (i=0, rr=w0, cs=w1; i<3; ++i) (*rr++) += (*cs++);
  /* #20: output[0][0] = @0 */
  casadi_copy(w0, 3, res[0]);
  return 0;
}

CASADI_SYMBOL_EXPORT int f_lpv_discrete(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int f_lpv_discrete_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int f_lpv_discrete_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void f_lpv_discrete_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int f_lpv_discrete_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void f_lpv_discrete_release(int mem) {
}

CASADI_SYMBOL_EXPORT void f_lpv_discrete_incref(void) {
}

CASADI_SYMBOL_EXPORT void f_lpv_discrete_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int f_lpv_discrete_n_in(void) { return 3;}

CASADI_SYMBOL_EXPORT casadi_int f_lpv_discrete_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real f_lpv_discrete_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* f_lpv_discrete_name_in(casadi_int i) {
  switch (i) {
    case 0: return "x";
    case 1: return "u";
    case 2: return "delta";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* f_lpv_discrete_name_out(casadi_int i) {
  switch (i) {
    case 0: return "x_next";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* f_lpv_discrete_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* f_lpv_discrete_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int f_lpv_discrete_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 6;
  if (sz_res) *sz_res = 2;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 32;
  return 0;
}

CASADI_SYMBOL_EXPORT int f_lpv_discrete_work_bytes(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 6*sizeof(const casadi_real*);
  if (sz_res) *sz_res = 2*sizeof(casadi_real*);
  if (sz_iw) *sz_iw = 0*sizeof(casadi_int);
  if (sz_w) *sz_w = 32*sizeof(casadi_real);
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
