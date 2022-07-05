// Lean compiler output
// Module: Lean.Meta.LevelDefEq
// Imports: Init Lean.Util.CollectMVars Lean.Meta.Basic Lean.Meta.InferType Lean.Meta.DecLevel
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__9;
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_isMVarWithGreaterDepth___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__6;
static lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___closed__1;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_15_(uint8_t, uint8_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___closed__2;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__8;
lean_object* lean_string_append(lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__3;
lean_object* l_Lean_Level_getOffsetAux(lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__5;
lean_object* l_Lean_Level_mvarId_x21(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_isMVarWithGreaterDepth(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_levelZero;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax___boxed(lean_object*, lean_object*);
lean_object* l_Lean_instantiateLevelMVars(lean_object*, lean_object*);
lean_object* lean_is_level_def_eq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2___closed__1;
static lean_object* l_panic___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___spec__1___closed__1;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__4;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__10;
uint8_t l_Lean_Level_isParam(lean_object*);
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__6;
LEAN_EXPORT uint8_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1;
LEAN_EXPORT lean_object* lean_is_level_def_eq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_level_mk_max_simp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwIsDefEqStuck___rarg(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit(lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__5;
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevelMVarDepth(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit___boxed(lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__7;
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_Basic_0__Lean_Meta_processPostponedStep___spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_push___rarg(lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__3;
lean_object* l_Lean_hasAssignableLevelMVar(lean_object*, lean_object*);
lean_object* l_Lean_assignLevelMVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_normalize(lean_object*);
uint8_t l_Bool_toLBool(uint8_t);
uint8_t l_Lean_Level_isMVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4;
lean_object* l_Lean_Level_getLevelOffset(lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__1;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__2;
uint8_t l_Lean_Level_occurs(lean_object*, lean_object*);
uint8_t lean_level_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_LevelDefEq___hyg_1438_(lean_object*);
lean_object* l_Lean_Meta_isReadOnlyLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_decLevel_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Level_isMax(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit(x_1, x_3);
if (x_5 == 0)
{
x_2 = x_4;
goto _start;
}
else
{
uint8_t x_7; 
x_7 = 1;
return x_7;
}
}
else
{
uint8_t x_8; 
x_8 = lean_level_eq(x_2, x_1);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = l_Lean_Level_occurs(x_1, x_2);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit(x_1, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit(x_1, x_4);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = 1;
return x_7;
}
}
else
{
uint8_t x_8; 
x_8 = 0;
return x_8;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 2:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff(x_1, x_4, x_3);
x_2 = x_5;
x_3 = x_6;
goto _start;
}
case 5:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
x_9 = lean_name_eq(x_8, x_1);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_level_mk_max_simp(x_3, x_2);
return x_10;
}
else
{
lean_dec(x_2);
return x_3;
}
}
default: 
{
lean_object* x_11; 
x_11 = lean_level_mk_max_simp(x_3, x_2);
return x_11;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_panic___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_instInhabitedMetaM___boxed), 5, 1);
lean_closure_set(x_1, 0, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_panic___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_panic___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___spec__1___closed__1;
x_8 = lean_panic_fn(x_7, x_1);
x_9 = lean_apply_5(x_8, x_2, x_3, x_4, x_5, x_6);
return x_9;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("assertion violation: ", 21);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("v.isMax\n  ", 10);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1;
x_2 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__2;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.Meta.LevelDefEq", 20);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("_private.Lean.Meta.LevelDefEq.0.Lean.Meta.solveSelfMax", 54);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__4;
x_2 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__5;
x_3 = lean_unsigned_to_nat(34u);
x_4 = lean_unsigned_to_nat(2u);
x_5 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = l_Lean_Level_isMax(x_2);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_2);
lean_dec(x_1);
x_9 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__6;
x_10 = l_panic___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___spec__1(x_9, x_3, x_4, x_5, x_6, x_7);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_11 = l_Lean_Meta_mkFreshLevelMVar(x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_3);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff(x_1, x_2, x_12);
x_15 = lean_st_ref_get(x_6, x_13);
lean_dec(x_6);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_st_ref_take(x_4, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = !lean_is_exclusive(x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_21 = lean_ctor_get(x_18, 0);
x_22 = l_Lean_assignLevelMVar(x_1, x_14, x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
lean_ctor_set(x_18, 0, x_24);
x_25 = lean_st_ref_set(x_4, x_18, x_19);
lean_dec(x_4);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_25, 0);
lean_dec(x_27);
lean_ctor_set(x_25, 0, x_23);
return x_25;
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_23);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_30 = lean_ctor_get(x_18, 0);
x_31 = lean_ctor_get(x_18, 1);
x_32 = lean_ctor_get(x_18, 2);
x_33 = lean_ctor_get(x_18, 3);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_18);
x_34 = l_Lean_assignLevelMVar(x_1, x_14, x_30);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_31);
lean_ctor_set(x_37, 2, x_32);
lean_ctor_set(x_37, 3, x_33);
x_38 = lean_st_ref_set(x_4, x_37, x_19);
lean_dec(x_4);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_40 = x_38;
} else {
 lean_dec_ref(x_38);
 x_40 = lean_box(0);
}
if (lean_is_scalar(x_40)) {
 x_41 = lean_alloc_ctor(0, 2, 0);
} else {
 x_41 = x_40;
}
lean_ctor_set(x_41, 0, x_35);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_st_ref_take(x_7, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_17 = lean_ctor_get(x_14, 3);
x_18 = lean_ctor_get(x_1, 3);
lean_inc(x_18);
x_19 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_19, 0, x_2);
lean_ctor_set(x_19, 1, x_3);
lean_ctor_set(x_19, 2, x_4);
lean_ctor_set(x_19, 3, x_18);
x_20 = l_Std_PersistentArray_push___rarg(x_17, x_19);
lean_ctor_set(x_14, 3, x_20);
x_21 = lean_st_ref_set(x_7, x_14, x_15);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_21, 0);
lean_dec(x_23);
x_24 = lean_box(0);
lean_ctor_set(x_21, 0, x_24);
return x_21;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_21, 1);
lean_inc(x_25);
lean_dec(x_21);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_28 = lean_ctor_get(x_14, 0);
x_29 = lean_ctor_get(x_14, 1);
x_30 = lean_ctor_get(x_14, 2);
x_31 = lean_ctor_get(x_14, 3);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_14);
x_32 = lean_ctor_get(x_1, 3);
lean_inc(x_32);
x_33 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_33, 0, x_2);
lean_ctor_set(x_33, 1, x_3);
lean_ctor_set(x_33, 2, x_4);
lean_ctor_set(x_33, 3, x_32);
x_34 = l_Std_PersistentArray_push___rarg(x_31, x_33);
x_35 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_35, 0, x_28);
lean_ctor_set(x_35, 1, x_29);
lean_ctor_set(x_35, 2, x_30);
lean_ctor_set(x_35, 3, x_34);
x_36 = lean_st_ref_set(x_7, x_35, x_15);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 x_38 = x_36;
} else {
 lean_dec_ref(x_36);
 x_38 = lean_box(0);
}
x_39 = lean_box(0);
if (lean_is_scalar(x_38)) {
 x_40 = lean_alloc_ctor(0, 2, 0);
} else {
 x_40 = x_38;
}
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_37);
return x_40;
}
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Meta", 4);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("isLevelDefEq", 12);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__2;
x_2 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("stuck", 5);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4;
x_2 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("", 0);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__7;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(" =?= ", 5);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__9;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_8 = lean_ctor_get(x_5, 5);
lean_inc(x_8);
x_9 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__6;
x_27 = lean_st_ref_get(x_6, x_7);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_28, 3);
lean_inc(x_29);
lean_dec(x_28);
x_30 = lean_ctor_get_uint8(x_29, sizeof(void*)*1);
lean_dec(x_29);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_ctor_get(x_27, 1);
lean_inc(x_31);
lean_dec(x_27);
x_32 = 0;
x_10 = x_32;
x_11 = x_31;
goto block_26;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_33 = lean_ctor_get(x_27, 1);
lean_inc(x_33);
lean_dec(x_27);
x_34 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_Basic_0__Lean_Meta_processPostponedStep___spec__14(x_9, x_3, x_4, x_5, x_6, x_33);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_unbox(x_35);
lean_dec(x_35);
x_10 = x_37;
x_11 = x_36;
goto block_26;
}
block_26:
{
if (x_10 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_box(0);
x_13 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___lambda__1(x_3, x_8, x_1, x_2, x_12, x_3, x_4, x_5, x_6, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_inc(x_1);
x_14 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_14, 0, x_1);
x_15 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__8;
x_16 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
x_17 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__10;
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
lean_inc(x_2);
x_19 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_19, 0, x_2);
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_15);
x_22 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__1(x_9, x_21, x_3, x_4, x_5, x_6, x_11);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___lambda__1(x_3, x_8, x_1, x_2, x_23, x_3, x_4, x_5, x_6, x_24);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_23);
lean_dec(x_3);
return x_25;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_isMVarWithGreaterDepth(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_1) == 5)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = l_Lean_Meta_getLevelMVarDepth(x_8, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_Meta_getLevelMVarDepth(x_2, x_3, x_4, x_5, x_6, x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_nat_dec_lt(x_14, x_10);
lean_dec(x_10);
lean_dec(x_14);
x_16 = lean_box(x_15);
lean_ctor_set(x_12, 0, x_16);
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
x_19 = lean_nat_dec_lt(x_17, x_10);
lean_dec(x_10);
lean_dec(x_17);
x_20 = lean_box(x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_18);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_10);
x_22 = !lean_is_exclusive(x_12);
if (x_22 == 0)
{
return x_12;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_12, 0);
x_24 = lean_ctor_get(x_12, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_12);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
uint8_t x_26; 
lean_dec(x_2);
x_26 = !lean_is_exclusive(x_9);
if (x_26 == 0)
{
return x_9;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_9, 0);
x_28 = lean_ctor_get(x_9, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_9);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
uint8_t x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_2);
lean_dec(x_1);
x_30 = 0;
x_31 = lean_box(x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_7);
return x_32;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_isMVarWithGreaterDepth___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_isMVarWithGreaterDepth(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_dec(x_1);
switch (lean_obj_tag(x_2)) {
case 1:
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = 0;
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
case 2:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_dec(x_2);
x_13 = l_Lean_levelZero;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_14 = lean_is_level_def_eq(x_13, x_11, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_unbox(x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_17 = !lean_is_exclusive(x_14);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; uint8_t x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_14, 0);
lean_dec(x_18);
x_19 = lean_unbox(x_15);
lean_dec(x_15);
x_20 = l_Bool_toLBool(x_19);
x_21 = lean_box(x_20);
lean_ctor_set(x_14, 0, x_21);
return x_14;
}
else
{
lean_object* x_22; uint8_t x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_14, 1);
lean_inc(x_22);
lean_dec(x_14);
x_23 = lean_unbox(x_15);
lean_dec(x_15);
x_24 = l_Bool_toLBool(x_23);
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_22);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_15);
x_27 = lean_ctor_get(x_14, 1);
lean_inc(x_27);
lean_dec(x_14);
x_28 = lean_is_level_def_eq(x_13, x_12, x_3, x_4, x_5, x_6, x_27);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; uint8_t x_31; uint8_t x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = lean_unbox(x_30);
lean_dec(x_30);
x_32 = l_Bool_toLBool(x_31);
x_33 = lean_box(x_32);
lean_ctor_set(x_28, 0, x_33);
return x_28;
}
else
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; uint8_t x_37; lean_object* x_38; lean_object* x_39; 
x_34 = lean_ctor_get(x_28, 0);
x_35 = lean_ctor_get(x_28, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_28);
x_36 = lean_unbox(x_34);
lean_dec(x_34);
x_37 = l_Bool_toLBool(x_36);
x_38 = lean_box(x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_35);
return x_39;
}
}
else
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_28);
if (x_40 == 0)
{
return x_28;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_28, 0);
x_42 = lean_ctor_get(x_28, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_28);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_44 = !lean_is_exclusive(x_14);
if (x_44 == 0)
{
return x_14;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_14, 0);
x_46 = lean_ctor_get(x_14, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_14);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
case 3:
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_2, 1);
lean_inc(x_48);
lean_dec(x_2);
x_49 = l_Lean_levelZero;
x_50 = lean_is_level_def_eq(x_49, x_48, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_50) == 0)
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; uint8_t x_53; uint8_t x_54; lean_object* x_55; 
x_52 = lean_ctor_get(x_50, 0);
x_53 = lean_unbox(x_52);
lean_dec(x_52);
x_54 = l_Bool_toLBool(x_53);
x_55 = lean_box(x_54);
lean_ctor_set(x_50, 0, x_55);
return x_50;
}
else
{
lean_object* x_56; lean_object* x_57; uint8_t x_58; uint8_t x_59; lean_object* x_60; lean_object* x_61; 
x_56 = lean_ctor_get(x_50, 0);
x_57 = lean_ctor_get(x_50, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_50);
x_58 = lean_unbox(x_56);
lean_dec(x_56);
x_59 = l_Bool_toLBool(x_58);
x_60 = lean_box(x_59);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_57);
return x_61;
}
}
else
{
uint8_t x_62; 
x_62 = !lean_is_exclusive(x_50);
if (x_62 == 0)
{
return x_50;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_50, 0);
x_64 = lean_ctor_get(x_50, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_50);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
default: 
{
uint8_t x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_66 = 2;
x_67 = lean_box(x_66);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_7);
return x_68;
}
}
}
case 1:
{
if (lean_obj_tag(x_2) == 5)
{
uint8_t x_69; lean_object* x_70; lean_object* x_71; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_69 = 2;
x_70 = lean_box(x_69);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_7);
return x_71;
}
else
{
lean_object* x_72; uint8_t x_73; 
x_72 = lean_ctor_get(x_1, 0);
lean_inc(x_72);
lean_dec(x_1);
x_73 = l_Lean_Level_isParam(x_2);
if (x_73 == 0)
{
uint8_t x_74; 
x_74 = l_Lean_Level_isMVar(x_72);
if (x_74 == 0)
{
lean_object* x_75; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_75 = l_Lean_Meta_decLevel_x3f(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; 
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
if (lean_obj_tag(x_76) == 0)
{
uint8_t x_77; 
lean_dec(x_72);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_77 = !lean_is_exclusive(x_75);
if (x_77 == 0)
{
lean_object* x_78; uint8_t x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_75, 0);
lean_dec(x_78);
x_79 = 2;
x_80 = lean_box(x_79);
lean_ctor_set(x_75, 0, x_80);
return x_75;
}
else
{
lean_object* x_81; uint8_t x_82; lean_object* x_83; lean_object* x_84; 
x_81 = lean_ctor_get(x_75, 1);
lean_inc(x_81);
lean_dec(x_75);
x_82 = 2;
x_83 = lean_box(x_82);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_81);
return x_84;
}
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_75, 1);
lean_inc(x_85);
lean_dec(x_75);
x_86 = lean_ctor_get(x_76, 0);
lean_inc(x_86);
lean_dec(x_76);
x_87 = lean_is_level_def_eq(x_72, x_86, x_3, x_4, x_5, x_6, x_85);
if (lean_obj_tag(x_87) == 0)
{
uint8_t x_88; 
x_88 = !lean_is_exclusive(x_87);
if (x_88 == 0)
{
lean_object* x_89; uint8_t x_90; uint8_t x_91; lean_object* x_92; 
x_89 = lean_ctor_get(x_87, 0);
x_90 = lean_unbox(x_89);
lean_dec(x_89);
x_91 = l_Bool_toLBool(x_90);
x_92 = lean_box(x_91);
lean_ctor_set(x_87, 0, x_92);
return x_87;
}
else
{
lean_object* x_93; lean_object* x_94; uint8_t x_95; uint8_t x_96; lean_object* x_97; lean_object* x_98; 
x_93 = lean_ctor_get(x_87, 0);
x_94 = lean_ctor_get(x_87, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_87);
x_95 = lean_unbox(x_93);
lean_dec(x_93);
x_96 = l_Bool_toLBool(x_95);
x_97 = lean_box(x_96);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_94);
return x_98;
}
}
else
{
uint8_t x_99; 
x_99 = !lean_is_exclusive(x_87);
if (x_99 == 0)
{
return x_87;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_100 = lean_ctor_get(x_87, 0);
x_101 = lean_ctor_get(x_87, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_87);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_100);
lean_ctor_set(x_102, 1, x_101);
return x_102;
}
}
}
}
else
{
uint8_t x_103; 
lean_dec(x_72);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_103 = !lean_is_exclusive(x_75);
if (x_103 == 0)
{
return x_75;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_104 = lean_ctor_get(x_75, 0);
x_105 = lean_ctor_get(x_75, 1);
lean_inc(x_105);
lean_inc(x_104);
lean_dec(x_75);
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_104);
lean_ctor_set(x_106, 1, x_105);
return x_106;
}
}
}
else
{
uint8_t x_107; 
x_107 = l_Lean_Level_occurs(x_72, x_2);
if (x_107 == 0)
{
lean_object* x_108; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_108 = l_Lean_Meta_decLevel_x3f(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_108) == 0)
{
lean_object* x_109; 
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
if (lean_obj_tag(x_109) == 0)
{
uint8_t x_110; 
lean_dec(x_72);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_110 = !lean_is_exclusive(x_108);
if (x_110 == 0)
{
lean_object* x_111; uint8_t x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_108, 0);
lean_dec(x_111);
x_112 = 2;
x_113 = lean_box(x_112);
lean_ctor_set(x_108, 0, x_113);
return x_108;
}
else
{
lean_object* x_114; uint8_t x_115; lean_object* x_116; lean_object* x_117; 
x_114 = lean_ctor_get(x_108, 1);
lean_inc(x_114);
lean_dec(x_108);
x_115 = 2;
x_116 = lean_box(x_115);
x_117 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_117, 0, x_116);
lean_ctor_set(x_117, 1, x_114);
return x_117;
}
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_118 = lean_ctor_get(x_108, 1);
lean_inc(x_118);
lean_dec(x_108);
x_119 = lean_ctor_get(x_109, 0);
lean_inc(x_119);
lean_dec(x_109);
x_120 = lean_is_level_def_eq(x_72, x_119, x_3, x_4, x_5, x_6, x_118);
if (lean_obj_tag(x_120) == 0)
{
uint8_t x_121; 
x_121 = !lean_is_exclusive(x_120);
if (x_121 == 0)
{
lean_object* x_122; uint8_t x_123; uint8_t x_124; lean_object* x_125; 
x_122 = lean_ctor_get(x_120, 0);
x_123 = lean_unbox(x_122);
lean_dec(x_122);
x_124 = l_Bool_toLBool(x_123);
x_125 = lean_box(x_124);
lean_ctor_set(x_120, 0, x_125);
return x_120;
}
else
{
lean_object* x_126; lean_object* x_127; uint8_t x_128; uint8_t x_129; lean_object* x_130; lean_object* x_131; 
x_126 = lean_ctor_get(x_120, 0);
x_127 = lean_ctor_get(x_120, 1);
lean_inc(x_127);
lean_inc(x_126);
lean_dec(x_120);
x_128 = lean_unbox(x_126);
lean_dec(x_126);
x_129 = l_Bool_toLBool(x_128);
x_130 = lean_box(x_129);
x_131 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_131, 0, x_130);
lean_ctor_set(x_131, 1, x_127);
return x_131;
}
}
else
{
uint8_t x_132; 
x_132 = !lean_is_exclusive(x_120);
if (x_132 == 0)
{
return x_120;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_133 = lean_ctor_get(x_120, 0);
x_134 = lean_ctor_get(x_120, 1);
lean_inc(x_134);
lean_inc(x_133);
lean_dec(x_120);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_133);
lean_ctor_set(x_135, 1, x_134);
return x_135;
}
}
}
}
else
{
uint8_t x_136; 
lean_dec(x_72);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_136 = !lean_is_exclusive(x_108);
if (x_136 == 0)
{
return x_108;
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_137 = lean_ctor_get(x_108, 0);
x_138 = lean_ctor_get(x_108, 1);
lean_inc(x_138);
lean_inc(x_137);
lean_dec(x_108);
x_139 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_139, 0, x_137);
lean_ctor_set(x_139, 1, x_138);
return x_139;
}
}
}
else
{
uint8_t x_140; lean_object* x_141; lean_object* x_142; 
lean_dec(x_72);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_140 = 2;
x_141 = lean_box(x_140);
x_142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_7);
return x_142;
}
}
}
else
{
uint8_t x_143; lean_object* x_144; lean_object* x_145; 
lean_dec(x_72);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_143 = 0;
x_144 = lean_box(x_143);
x_145 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_7);
return x_145;
}
}
}
case 5:
{
lean_object* x_146; lean_object* x_147; 
x_146 = lean_ctor_get(x_1, 0);
lean_inc(x_146);
lean_inc(x_146);
x_147 = l_Lean_Meta_isReadOnlyLevelMVar(x_146, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_147) == 0)
{
lean_object* x_148; uint8_t x_149; 
x_148 = lean_ctor_get(x_147, 0);
lean_inc(x_148);
x_149 = lean_unbox(x_148);
lean_dec(x_148);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_150 = lean_ctor_get(x_147, 1);
lean_inc(x_150);
lean_dec(x_147);
x_151 = l_Lean_Meta_getConfig(x_3, x_4, x_5, x_6, x_150);
x_152 = lean_ctor_get(x_151, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_151, 1);
lean_inc(x_153);
lean_dec(x_151);
lean_inc(x_2);
x_154 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_isMVarWithGreaterDepth(x_2, x_146, x_3, x_4, x_5, x_6, x_153);
if (lean_obj_tag(x_154) == 0)
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; uint8_t x_215; 
x_155 = lean_ctor_get(x_154, 0);
lean_inc(x_155);
x_156 = lean_ctor_get(x_154, 1);
lean_inc(x_156);
if (lean_is_exclusive(x_154)) {
 lean_ctor_release(x_154, 0);
 lean_ctor_release(x_154, 1);
 x_157 = x_154;
} else {
 lean_dec_ref(x_154);
 x_157 = lean_box(0);
}
x_215 = lean_ctor_get_uint8(x_152, 11);
lean_dec(x_152);
if (x_215 == 0)
{
lean_object* x_216; 
lean_dec(x_155);
x_216 = lean_box(0);
x_158 = x_216;
goto block_214;
}
else
{
uint8_t x_217; 
x_217 = lean_unbox(x_155);
lean_dec(x_155);
if (x_217 == 0)
{
lean_object* x_218; 
x_218 = lean_box(0);
x_158 = x_218;
goto block_214;
}
else
{
lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; uint8_t x_225; 
lean_dec(x_157);
lean_dec(x_5);
lean_dec(x_3);
x_219 = l_Lean_Level_mvarId_x21(x_2);
x_220 = lean_st_ref_get(x_6, x_156);
lean_dec(x_6);
x_221 = lean_ctor_get(x_220, 1);
lean_inc(x_221);
lean_dec(x_220);
x_222 = lean_st_ref_take(x_4, x_221);
x_223 = lean_ctor_get(x_222, 0);
lean_inc(x_223);
x_224 = lean_ctor_get(x_222, 1);
lean_inc(x_224);
lean_dec(x_222);
x_225 = !lean_is_exclusive(x_223);
if (x_225 == 0)
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; uint8_t x_230; 
x_226 = lean_ctor_get(x_223, 0);
x_227 = l_Lean_assignLevelMVar(x_219, x_1, x_226);
x_228 = lean_ctor_get(x_227, 1);
lean_inc(x_228);
lean_dec(x_227);
lean_ctor_set(x_223, 0, x_228);
x_229 = lean_st_ref_set(x_4, x_223, x_224);
lean_dec(x_4);
x_230 = !lean_is_exclusive(x_229);
if (x_230 == 0)
{
lean_object* x_231; uint8_t x_232; lean_object* x_233; 
x_231 = lean_ctor_get(x_229, 0);
lean_dec(x_231);
x_232 = 1;
x_233 = lean_box(x_232);
lean_ctor_set(x_229, 0, x_233);
return x_229;
}
else
{
lean_object* x_234; uint8_t x_235; lean_object* x_236; lean_object* x_237; 
x_234 = lean_ctor_get(x_229, 1);
lean_inc(x_234);
lean_dec(x_229);
x_235 = 1;
x_236 = lean_box(x_235);
x_237 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_237, 0, x_236);
lean_ctor_set(x_237, 1, x_234);
return x_237;
}
}
else
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; uint8_t x_248; lean_object* x_249; lean_object* x_250; 
x_238 = lean_ctor_get(x_223, 0);
x_239 = lean_ctor_get(x_223, 1);
x_240 = lean_ctor_get(x_223, 2);
x_241 = lean_ctor_get(x_223, 3);
lean_inc(x_241);
lean_inc(x_240);
lean_inc(x_239);
lean_inc(x_238);
lean_dec(x_223);
x_242 = l_Lean_assignLevelMVar(x_219, x_1, x_238);
x_243 = lean_ctor_get(x_242, 1);
lean_inc(x_243);
lean_dec(x_242);
x_244 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_244, 0, x_243);
lean_ctor_set(x_244, 1, x_239);
lean_ctor_set(x_244, 2, x_240);
lean_ctor_set(x_244, 3, x_241);
x_245 = lean_st_ref_set(x_4, x_244, x_224);
lean_dec(x_4);
x_246 = lean_ctor_get(x_245, 1);
lean_inc(x_246);
if (lean_is_exclusive(x_245)) {
 lean_ctor_release(x_245, 0);
 lean_ctor_release(x_245, 1);
 x_247 = x_245;
} else {
 lean_dec_ref(x_245);
 x_247 = lean_box(0);
}
x_248 = 1;
x_249 = lean_box(x_248);
if (lean_is_scalar(x_247)) {
 x_250 = lean_alloc_ctor(0, 2, 0);
} else {
 x_250 = x_247;
}
lean_ctor_set(x_250, 0, x_249);
lean_ctor_set(x_250, 1, x_246);
return x_250;
}
}
}
block_214:
{
uint8_t x_159; 
lean_dec(x_158);
x_159 = l_Lean_Level_occurs(x_1, x_2);
if (x_159 == 0)
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; uint8_t x_166; 
lean_dec(x_157);
lean_dec(x_5);
lean_dec(x_3);
x_160 = l_Lean_Level_mvarId_x21(x_1);
x_161 = lean_st_ref_get(x_6, x_156);
lean_dec(x_6);
x_162 = lean_ctor_get(x_161, 1);
lean_inc(x_162);
lean_dec(x_161);
x_163 = lean_st_ref_take(x_4, x_162);
x_164 = lean_ctor_get(x_163, 0);
lean_inc(x_164);
x_165 = lean_ctor_get(x_163, 1);
lean_inc(x_165);
lean_dec(x_163);
x_166 = !lean_is_exclusive(x_164);
if (x_166 == 0)
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; uint8_t x_171; 
x_167 = lean_ctor_get(x_164, 0);
x_168 = l_Lean_assignLevelMVar(x_160, x_2, x_167);
x_169 = lean_ctor_get(x_168, 1);
lean_inc(x_169);
lean_dec(x_168);
lean_ctor_set(x_164, 0, x_169);
x_170 = lean_st_ref_set(x_4, x_164, x_165);
lean_dec(x_4);
x_171 = !lean_is_exclusive(x_170);
if (x_171 == 0)
{
lean_object* x_172; uint8_t x_173; lean_object* x_174; 
x_172 = lean_ctor_get(x_170, 0);
lean_dec(x_172);
x_173 = 1;
x_174 = lean_box(x_173);
lean_ctor_set(x_170, 0, x_174);
return x_170;
}
else
{
lean_object* x_175; uint8_t x_176; lean_object* x_177; lean_object* x_178; 
x_175 = lean_ctor_get(x_170, 1);
lean_inc(x_175);
lean_dec(x_170);
x_176 = 1;
x_177 = lean_box(x_176);
x_178 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_178, 0, x_177);
lean_ctor_set(x_178, 1, x_175);
return x_178;
}
}
else
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; uint8_t x_189; lean_object* x_190; lean_object* x_191; 
x_179 = lean_ctor_get(x_164, 0);
x_180 = lean_ctor_get(x_164, 1);
x_181 = lean_ctor_get(x_164, 2);
x_182 = lean_ctor_get(x_164, 3);
lean_inc(x_182);
lean_inc(x_181);
lean_inc(x_180);
lean_inc(x_179);
lean_dec(x_164);
x_183 = l_Lean_assignLevelMVar(x_160, x_2, x_179);
x_184 = lean_ctor_get(x_183, 1);
lean_inc(x_184);
lean_dec(x_183);
x_185 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_185, 0, x_184);
lean_ctor_set(x_185, 1, x_180);
lean_ctor_set(x_185, 2, x_181);
lean_ctor_set(x_185, 3, x_182);
x_186 = lean_st_ref_set(x_4, x_185, x_165);
lean_dec(x_4);
x_187 = lean_ctor_get(x_186, 1);
lean_inc(x_187);
if (lean_is_exclusive(x_186)) {
 lean_ctor_release(x_186, 0);
 lean_ctor_release(x_186, 1);
 x_188 = x_186;
} else {
 lean_dec_ref(x_186);
 x_188 = lean_box(0);
}
x_189 = 1;
x_190 = lean_box(x_189);
if (lean_is_scalar(x_188)) {
 x_191 = lean_alloc_ctor(0, 2, 0);
} else {
 x_191 = x_188;
}
lean_ctor_set(x_191, 0, x_190);
lean_ctor_set(x_191, 1, x_187);
return x_191;
}
}
else
{
uint8_t x_192; 
x_192 = l_Lean_Level_isMax(x_2);
if (x_192 == 0)
{
uint8_t x_193; lean_object* x_194; lean_object* x_195; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_193 = 2;
x_194 = lean_box(x_193);
if (lean_is_scalar(x_157)) {
 x_195 = lean_alloc_ctor(0, 2, 0);
} else {
 x_195 = x_157;
}
lean_ctor_set(x_195, 0, x_194);
lean_ctor_set(x_195, 1, x_156);
return x_195;
}
else
{
uint8_t x_196; 
x_196 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax(x_1, x_2);
if (x_196 == 0)
{
lean_object* x_197; lean_object* x_198; 
lean_dec(x_157);
x_197 = l_Lean_Level_mvarId_x21(x_1);
x_198 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax(x_197, x_2, x_3, x_4, x_5, x_6, x_156);
if (lean_obj_tag(x_198) == 0)
{
uint8_t x_199; 
x_199 = !lean_is_exclusive(x_198);
if (x_199 == 0)
{
lean_object* x_200; uint8_t x_201; lean_object* x_202; 
x_200 = lean_ctor_get(x_198, 0);
lean_dec(x_200);
x_201 = 1;
x_202 = lean_box(x_201);
lean_ctor_set(x_198, 0, x_202);
return x_198;
}
else
{
lean_object* x_203; uint8_t x_204; lean_object* x_205; lean_object* x_206; 
x_203 = lean_ctor_get(x_198, 1);
lean_inc(x_203);
lean_dec(x_198);
x_204 = 1;
x_205 = lean_box(x_204);
x_206 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_206, 0, x_205);
lean_ctor_set(x_206, 1, x_203);
return x_206;
}
}
else
{
uint8_t x_207; 
x_207 = !lean_is_exclusive(x_198);
if (x_207 == 0)
{
return x_198;
}
else
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; 
x_208 = lean_ctor_get(x_198, 0);
x_209 = lean_ctor_get(x_198, 1);
lean_inc(x_209);
lean_inc(x_208);
lean_dec(x_198);
x_210 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_210, 0, x_208);
lean_ctor_set(x_210, 1, x_209);
return x_210;
}
}
}
else
{
uint8_t x_211; lean_object* x_212; lean_object* x_213; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_211 = 2;
x_212 = lean_box(x_211);
if (lean_is_scalar(x_157)) {
 x_213 = lean_alloc_ctor(0, 2, 0);
} else {
 x_213 = x_157;
}
lean_ctor_set(x_213, 0, x_212);
lean_ctor_set(x_213, 1, x_156);
return x_213;
}
}
}
}
}
else
{
uint8_t x_251; 
lean_dec(x_152);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_251 = !lean_is_exclusive(x_154);
if (x_251 == 0)
{
return x_154;
}
else
{
lean_object* x_252; lean_object* x_253; lean_object* x_254; 
x_252 = lean_ctor_get(x_154, 0);
x_253 = lean_ctor_get(x_154, 1);
lean_inc(x_253);
lean_inc(x_252);
lean_dec(x_154);
x_254 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_254, 0, x_252);
lean_ctor_set(x_254, 1, x_253);
return x_254;
}
}
}
else
{
uint8_t x_255; 
lean_dec(x_146);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_255 = !lean_is_exclusive(x_147);
if (x_255 == 0)
{
lean_object* x_256; uint8_t x_257; lean_object* x_258; 
x_256 = lean_ctor_get(x_147, 0);
lean_dec(x_256);
x_257 = 2;
x_258 = lean_box(x_257);
lean_ctor_set(x_147, 0, x_258);
return x_147;
}
else
{
lean_object* x_259; uint8_t x_260; lean_object* x_261; lean_object* x_262; 
x_259 = lean_ctor_get(x_147, 1);
lean_inc(x_259);
lean_dec(x_147);
x_260 = 2;
x_261 = lean_box(x_260);
x_262 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_262, 0, x_261);
lean_ctor_set(x_262, 1, x_259);
return x_262;
}
}
}
else
{
uint8_t x_263; 
lean_dec(x_146);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_263 = !lean_is_exclusive(x_147);
if (x_263 == 0)
{
return x_147;
}
else
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; 
x_264 = lean_ctor_get(x_147, 0);
x_265 = lean_ctor_get(x_147, 1);
lean_inc(x_265);
lean_inc(x_264);
lean_dec(x_147);
x_266 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_266, 0, x_264);
lean_ctor_set(x_266, 1, x_265);
return x_266;
}
}
}
default: 
{
uint8_t x_267; lean_object* x_268; lean_object* x_269; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_267 = 2;
x_268 = lean_box(x_267);
x_269 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_269, 0, x_268);
lean_ctor_set(x_269, 1, x_7);
return x_269;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_6);
return x_7;
}
}
static lean_object* _init_l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_isLevelDefEqAuxImpl___lambda__1___boxed), 6, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_st_ref_take(x_6, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_16 = lean_ctor_get(x_13, 0);
lean_inc(x_1);
x_17 = l_Lean_instantiateLevelMVars(x_1, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_ctor_set(x_13, 0, x_19);
x_20 = lean_st_ref_set(x_6, x_13, x_14);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = l_Lean_Level_normalize(x_18);
x_23 = lean_st_ref_get(x_8, x_21);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = lean_st_ref_take(x_6, x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = !lean_is_exclusive(x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_29 = lean_ctor_get(x_26, 0);
lean_inc(x_2);
x_30 = l_Lean_instantiateLevelMVars(x_2, x_29);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
lean_ctor_set(x_26, 0, x_32);
x_33 = lean_st_ref_set(x_6, x_26, x_27);
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
x_35 = l_Lean_Level_normalize(x_31);
x_36 = lean_level_eq(x_1, x_22);
if (x_36 == 0)
{
lean_object* x_37; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_37 = lean_is_level_def_eq(x_22, x_35, x_5, x_6, x_7, x_8, x_34);
return x_37;
}
else
{
uint8_t x_38; 
x_38 = lean_level_eq(x_2, x_35);
if (x_38 == 0)
{
lean_object* x_39; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_39 = lean_is_level_def_eq(x_22, x_35, x_5, x_6, x_7, x_8, x_34);
return x_39;
}
else
{
lean_object* x_40; 
lean_dec(x_35);
lean_dec(x_22);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_40 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_1, x_2, x_5, x_6, x_7, x_8, x_34);
if (lean_obj_tag(x_40) == 0)
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; uint8_t x_45; uint8_t x_46; 
x_42 = lean_ctor_get(x_40, 0);
x_43 = lean_ctor_get(x_40, 1);
x_44 = 2;
x_45 = lean_unbox(x_42);
x_46 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_15_(x_45, x_44);
if (x_46 == 0)
{
uint8_t x_47; uint8_t x_48; uint8_t x_49; lean_object* x_50; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_47 = 1;
x_48 = lean_unbox(x_42);
lean_dec(x_42);
x_49 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_15_(x_48, x_47);
x_50 = lean_box(x_49);
lean_ctor_set(x_40, 0, x_50);
return x_40;
}
else
{
lean_object* x_51; 
lean_free_object(x_40);
lean_dec(x_42);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
lean_inc(x_2);
x_51 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_2, x_1, x_5, x_6, x_7, x_8, x_43);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; uint8_t x_56; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 x_54 = x_51;
} else {
 lean_dec_ref(x_51);
 x_54 = lean_box(0);
}
x_55 = lean_unbox(x_52);
x_56 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_15_(x_55, x_44);
if (x_56 == 0)
{
uint8_t x_57; uint8_t x_58; uint8_t x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_57 = 1;
x_58 = lean_unbox(x_52);
lean_dec(x_52);
x_59 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_15_(x_58, x_57);
x_60 = lean_box(x_59);
if (lean_is_scalar(x_54)) {
 x_61 = lean_alloc_ctor(0, 2, 0);
} else {
 x_61 = x_54;
}
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_53);
return x_61;
}
else
{
uint8_t x_62; lean_object* x_63; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; 
lean_dec(x_52);
x_119 = lean_st_ref_get(x_8, x_53);
x_120 = lean_ctor_get(x_119, 1);
lean_inc(x_120);
lean_dec(x_119);
x_121 = lean_st_ref_take(x_6, x_120);
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
lean_dec(x_121);
x_124 = !lean_is_exclusive(x_122);
if (x_124 == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; uint8_t x_130; 
x_125 = lean_ctor_get(x_122, 0);
lean_inc(x_1);
x_126 = l_Lean_hasAssignableLevelMVar(x_1, x_125);
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_126, 1);
lean_inc(x_128);
lean_dec(x_126);
lean_ctor_set(x_122, 0, x_128);
x_129 = lean_st_ref_set(x_6, x_122, x_123);
x_130 = lean_unbox(x_127);
if (x_130 == 0)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; uint8_t x_137; 
lean_dec(x_127);
x_131 = lean_ctor_get(x_129, 1);
lean_inc(x_131);
lean_dec(x_129);
x_132 = lean_st_ref_get(x_8, x_131);
x_133 = lean_ctor_get(x_132, 1);
lean_inc(x_133);
lean_dec(x_132);
x_134 = lean_st_ref_take(x_6, x_133);
x_135 = lean_ctor_get(x_134, 0);
lean_inc(x_135);
x_136 = lean_ctor_get(x_134, 1);
lean_inc(x_136);
lean_dec(x_134);
x_137 = !lean_is_exclusive(x_135);
if (x_137 == 0)
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; uint8_t x_144; 
x_138 = lean_ctor_get(x_135, 0);
lean_inc(x_2);
x_139 = l_Lean_hasAssignableLevelMVar(x_2, x_138);
x_140 = lean_ctor_get(x_139, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_139, 1);
lean_inc(x_141);
lean_dec(x_139);
lean_ctor_set(x_135, 0, x_141);
x_142 = lean_st_ref_set(x_6, x_135, x_136);
x_143 = lean_ctor_get(x_142, 1);
lean_inc(x_143);
lean_dec(x_142);
x_144 = lean_unbox(x_140);
lean_dec(x_140);
x_62 = x_144;
x_63 = x_143;
goto block_118;
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; uint8_t x_155; 
x_145 = lean_ctor_get(x_135, 0);
x_146 = lean_ctor_get(x_135, 1);
x_147 = lean_ctor_get(x_135, 2);
x_148 = lean_ctor_get(x_135, 3);
lean_inc(x_148);
lean_inc(x_147);
lean_inc(x_146);
lean_inc(x_145);
lean_dec(x_135);
lean_inc(x_2);
x_149 = l_Lean_hasAssignableLevelMVar(x_2, x_145);
x_150 = lean_ctor_get(x_149, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_149, 1);
lean_inc(x_151);
lean_dec(x_149);
x_152 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_152, 0, x_151);
lean_ctor_set(x_152, 1, x_146);
lean_ctor_set(x_152, 2, x_147);
lean_ctor_set(x_152, 3, x_148);
x_153 = lean_st_ref_set(x_6, x_152, x_136);
x_154 = lean_ctor_get(x_153, 1);
lean_inc(x_154);
lean_dec(x_153);
x_155 = lean_unbox(x_150);
lean_dec(x_150);
x_62 = x_155;
x_63 = x_154;
goto block_118;
}
}
else
{
lean_object* x_156; uint8_t x_157; 
x_156 = lean_ctor_get(x_129, 1);
lean_inc(x_156);
lean_dec(x_129);
x_157 = lean_unbox(x_127);
lean_dec(x_127);
x_62 = x_157;
x_63 = x_156;
goto block_118;
}
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; uint8_t x_167; 
x_158 = lean_ctor_get(x_122, 0);
x_159 = lean_ctor_get(x_122, 1);
x_160 = lean_ctor_get(x_122, 2);
x_161 = lean_ctor_get(x_122, 3);
lean_inc(x_161);
lean_inc(x_160);
lean_inc(x_159);
lean_inc(x_158);
lean_dec(x_122);
lean_inc(x_1);
x_162 = l_Lean_hasAssignableLevelMVar(x_1, x_158);
x_163 = lean_ctor_get(x_162, 0);
lean_inc(x_163);
x_164 = lean_ctor_get(x_162, 1);
lean_inc(x_164);
lean_dec(x_162);
x_165 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_165, 0, x_164);
lean_ctor_set(x_165, 1, x_159);
lean_ctor_set(x_165, 2, x_160);
lean_ctor_set(x_165, 3, x_161);
x_166 = lean_st_ref_set(x_6, x_165, x_123);
x_167 = lean_unbox(x_163);
if (x_167 == 0)
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; uint8_t x_185; 
lean_dec(x_163);
x_168 = lean_ctor_get(x_166, 1);
lean_inc(x_168);
lean_dec(x_166);
x_169 = lean_st_ref_get(x_8, x_168);
x_170 = lean_ctor_get(x_169, 1);
lean_inc(x_170);
lean_dec(x_169);
x_171 = lean_st_ref_take(x_6, x_170);
x_172 = lean_ctor_get(x_171, 0);
lean_inc(x_172);
x_173 = lean_ctor_get(x_171, 1);
lean_inc(x_173);
lean_dec(x_171);
x_174 = lean_ctor_get(x_172, 0);
lean_inc(x_174);
x_175 = lean_ctor_get(x_172, 1);
lean_inc(x_175);
x_176 = lean_ctor_get(x_172, 2);
lean_inc(x_176);
x_177 = lean_ctor_get(x_172, 3);
lean_inc(x_177);
if (lean_is_exclusive(x_172)) {
 lean_ctor_release(x_172, 0);
 lean_ctor_release(x_172, 1);
 lean_ctor_release(x_172, 2);
 lean_ctor_release(x_172, 3);
 x_178 = x_172;
} else {
 lean_dec_ref(x_172);
 x_178 = lean_box(0);
}
lean_inc(x_2);
x_179 = l_Lean_hasAssignableLevelMVar(x_2, x_174);
x_180 = lean_ctor_get(x_179, 0);
lean_inc(x_180);
x_181 = lean_ctor_get(x_179, 1);
lean_inc(x_181);
lean_dec(x_179);
if (lean_is_scalar(x_178)) {
 x_182 = lean_alloc_ctor(0, 4, 0);
} else {
 x_182 = x_178;
}
lean_ctor_set(x_182, 0, x_181);
lean_ctor_set(x_182, 1, x_175);
lean_ctor_set(x_182, 2, x_176);
lean_ctor_set(x_182, 3, x_177);
x_183 = lean_st_ref_set(x_6, x_182, x_173);
x_184 = lean_ctor_get(x_183, 1);
lean_inc(x_184);
lean_dec(x_183);
x_185 = lean_unbox(x_180);
lean_dec(x_180);
x_62 = x_185;
x_63 = x_184;
goto block_118;
}
else
{
lean_object* x_186; uint8_t x_187; 
x_186 = lean_ctor_get(x_166, 1);
lean_inc(x_186);
lean_dec(x_166);
x_187 = lean_unbox(x_163);
lean_dec(x_163);
x_62 = x_187;
x_63 = x_186;
goto block_118;
}
}
block_118:
{
if (x_62 == 0)
{
lean_object* x_64; lean_object* x_97; uint8_t x_98; 
x_97 = lean_ctor_get(x_5, 0);
lean_inc(x_97);
x_98 = lean_ctor_get_uint8(x_97, 4);
lean_dec(x_97);
if (x_98 == 0)
{
uint8_t x_99; lean_object* x_100; lean_object* x_101; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_99 = 0;
x_100 = lean_box(x_99);
if (lean_is_scalar(x_54)) {
 x_101 = lean_alloc_ctor(0, 2, 0);
} else {
 x_101 = x_54;
}
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_63);
return x_101;
}
else
{
uint8_t x_102; 
x_102 = l_Lean_Level_isMVar(x_1);
if (x_102 == 0)
{
uint8_t x_103; 
x_103 = l_Lean_Level_isMVar(x_2);
if (x_103 == 0)
{
uint8_t x_104; lean_object* x_105; lean_object* x_106; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_104 = 0;
x_105 = lean_box(x_104);
if (lean_is_scalar(x_54)) {
 x_106 = lean_alloc_ctor(0, 2, 0);
} else {
 x_106 = x_54;
}
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_63);
return x_106;
}
else
{
lean_object* x_107; 
lean_dec(x_54);
x_107 = lean_box(0);
x_64 = x_107;
goto block_96;
}
}
else
{
lean_object* x_108; 
lean_dec(x_54);
x_108 = lean_box(0);
x_64 = x_108;
goto block_96;
}
}
block_96:
{
lean_object* x_65; lean_object* x_66; uint8_t x_67; lean_object* x_68; lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; 
lean_dec(x_64);
x_65 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__5;
x_66 = lean_name_mk_string(x_3, x_65);
x_85 = lean_st_ref_get(x_8, x_63);
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_86, 3);
lean_inc(x_87);
lean_dec(x_86);
x_88 = lean_ctor_get_uint8(x_87, sizeof(void*)*1);
lean_dec(x_87);
if (x_88 == 0)
{
lean_object* x_89; uint8_t x_90; 
x_89 = lean_ctor_get(x_85, 1);
lean_inc(x_89);
lean_dec(x_85);
x_90 = 0;
x_67 = x_90;
x_68 = x_89;
goto block_84;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; uint8_t x_95; 
x_91 = lean_ctor_get(x_85, 1);
lean_inc(x_91);
lean_dec(x_85);
lean_inc(x_66);
x_92 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_Basic_0__Lean_Meta_processPostponedStep___spec__14(x_66, x_5, x_6, x_7, x_8, x_91);
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
lean_dec(x_92);
x_95 = lean_unbox(x_93);
lean_dec(x_93);
x_67 = x_95;
x_68 = x_94;
goto block_84;
}
block_84:
{
lean_object* x_69; 
x_69 = l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2___closed__1;
if (x_67 == 0)
{
lean_object* x_70; lean_object* x_71; 
lean_dec(x_66);
lean_dec(x_2);
lean_dec(x_1);
x_70 = lean_box(0);
x_71 = lean_apply_6(x_69, x_70, x_5, x_6, x_7, x_8, x_68);
return x_71;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_72 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_72, 0, x_1);
x_73 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__8;
x_74 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_72);
x_75 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__10;
x_76 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
x_77 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_77, 0, x_2);
x_78 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
x_79 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_73);
x_80 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__1(x_66, x_79, x_5, x_6, x_7, x_8, x_68);
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
lean_dec(x_80);
x_83 = lean_apply_6(x_69, x_81, x_5, x_6, x_7, x_8, x_82);
return x_83;
}
}
}
}
else
{
lean_object* x_109; uint8_t x_110; 
lean_dec(x_54);
lean_dec(x_3);
x_109 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_5, x_6, x_7, x_8, x_63);
x_110 = !lean_is_exclusive(x_109);
if (x_110 == 0)
{
lean_object* x_111; uint8_t x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_109, 0);
lean_dec(x_111);
x_112 = 1;
x_113 = lean_box(x_112);
lean_ctor_set(x_109, 0, x_113);
return x_109;
}
else
{
lean_object* x_114; uint8_t x_115; lean_object* x_116; lean_object* x_117; 
x_114 = lean_ctor_get(x_109, 1);
lean_inc(x_114);
lean_dec(x_109);
x_115 = 1;
x_116 = lean_box(x_115);
x_117 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_117, 0, x_116);
lean_ctor_set(x_117, 1, x_114);
return x_117;
}
}
}
}
}
else
{
uint8_t x_188; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_188 = !lean_is_exclusive(x_51);
if (x_188 == 0)
{
return x_51;
}
else
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; 
x_189 = lean_ctor_get(x_51, 0);
x_190 = lean_ctor_get(x_51, 1);
lean_inc(x_190);
lean_inc(x_189);
lean_dec(x_51);
x_191 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_191, 0, x_189);
lean_ctor_set(x_191, 1, x_190);
return x_191;
}
}
}
}
else
{
lean_object* x_192; lean_object* x_193; uint8_t x_194; uint8_t x_195; uint8_t x_196; 
x_192 = lean_ctor_get(x_40, 0);
x_193 = lean_ctor_get(x_40, 1);
lean_inc(x_193);
lean_inc(x_192);
lean_dec(x_40);
x_194 = 2;
x_195 = lean_unbox(x_192);
x_196 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_15_(x_195, x_194);
if (x_196 == 0)
{
uint8_t x_197; uint8_t x_198; uint8_t x_199; lean_object* x_200; lean_object* x_201; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_197 = 1;
x_198 = lean_unbox(x_192);
lean_dec(x_192);
x_199 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_15_(x_198, x_197);
x_200 = lean_box(x_199);
x_201 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_201, 0, x_200);
lean_ctor_set(x_201, 1, x_193);
return x_201;
}
else
{
lean_object* x_202; 
lean_dec(x_192);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
lean_inc(x_2);
x_202 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_2, x_1, x_5, x_6, x_7, x_8, x_193);
if (lean_obj_tag(x_202) == 0)
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; uint8_t x_206; uint8_t x_207; 
x_203 = lean_ctor_get(x_202, 0);
lean_inc(x_203);
x_204 = lean_ctor_get(x_202, 1);
lean_inc(x_204);
if (lean_is_exclusive(x_202)) {
 lean_ctor_release(x_202, 0);
 lean_ctor_release(x_202, 1);
 x_205 = x_202;
} else {
 lean_dec_ref(x_202);
 x_205 = lean_box(0);
}
x_206 = lean_unbox(x_203);
x_207 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_15_(x_206, x_194);
if (x_207 == 0)
{
uint8_t x_208; uint8_t x_209; uint8_t x_210; lean_object* x_211; lean_object* x_212; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_208 = 1;
x_209 = lean_unbox(x_203);
lean_dec(x_203);
x_210 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_15_(x_209, x_208);
x_211 = lean_box(x_210);
if (lean_is_scalar(x_205)) {
 x_212 = lean_alloc_ctor(0, 2, 0);
} else {
 x_212 = x_205;
}
lean_ctor_set(x_212, 0, x_211);
lean_ctor_set(x_212, 1, x_204);
return x_212;
}
else
{
uint8_t x_213; lean_object* x_214; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; uint8_t x_282; 
lean_dec(x_203);
x_267 = lean_st_ref_get(x_8, x_204);
x_268 = lean_ctor_get(x_267, 1);
lean_inc(x_268);
lean_dec(x_267);
x_269 = lean_st_ref_take(x_6, x_268);
x_270 = lean_ctor_get(x_269, 0);
lean_inc(x_270);
x_271 = lean_ctor_get(x_269, 1);
lean_inc(x_271);
lean_dec(x_269);
x_272 = lean_ctor_get(x_270, 0);
lean_inc(x_272);
x_273 = lean_ctor_get(x_270, 1);
lean_inc(x_273);
x_274 = lean_ctor_get(x_270, 2);
lean_inc(x_274);
x_275 = lean_ctor_get(x_270, 3);
lean_inc(x_275);
if (lean_is_exclusive(x_270)) {
 lean_ctor_release(x_270, 0);
 lean_ctor_release(x_270, 1);
 lean_ctor_release(x_270, 2);
 lean_ctor_release(x_270, 3);
 x_276 = x_270;
} else {
 lean_dec_ref(x_270);
 x_276 = lean_box(0);
}
lean_inc(x_1);
x_277 = l_Lean_hasAssignableLevelMVar(x_1, x_272);
x_278 = lean_ctor_get(x_277, 0);
lean_inc(x_278);
x_279 = lean_ctor_get(x_277, 1);
lean_inc(x_279);
lean_dec(x_277);
if (lean_is_scalar(x_276)) {
 x_280 = lean_alloc_ctor(0, 4, 0);
} else {
 x_280 = x_276;
}
lean_ctor_set(x_280, 0, x_279);
lean_ctor_set(x_280, 1, x_273);
lean_ctor_set(x_280, 2, x_274);
lean_ctor_set(x_280, 3, x_275);
x_281 = lean_st_ref_set(x_6, x_280, x_271);
x_282 = lean_unbox(x_278);
if (x_282 == 0)
{
lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; uint8_t x_300; 
lean_dec(x_278);
x_283 = lean_ctor_get(x_281, 1);
lean_inc(x_283);
lean_dec(x_281);
x_284 = lean_st_ref_get(x_8, x_283);
x_285 = lean_ctor_get(x_284, 1);
lean_inc(x_285);
lean_dec(x_284);
x_286 = lean_st_ref_take(x_6, x_285);
x_287 = lean_ctor_get(x_286, 0);
lean_inc(x_287);
x_288 = lean_ctor_get(x_286, 1);
lean_inc(x_288);
lean_dec(x_286);
x_289 = lean_ctor_get(x_287, 0);
lean_inc(x_289);
x_290 = lean_ctor_get(x_287, 1);
lean_inc(x_290);
x_291 = lean_ctor_get(x_287, 2);
lean_inc(x_291);
x_292 = lean_ctor_get(x_287, 3);
lean_inc(x_292);
if (lean_is_exclusive(x_287)) {
 lean_ctor_release(x_287, 0);
 lean_ctor_release(x_287, 1);
 lean_ctor_release(x_287, 2);
 lean_ctor_release(x_287, 3);
 x_293 = x_287;
} else {
 lean_dec_ref(x_287);
 x_293 = lean_box(0);
}
lean_inc(x_2);
x_294 = l_Lean_hasAssignableLevelMVar(x_2, x_289);
x_295 = lean_ctor_get(x_294, 0);
lean_inc(x_295);
x_296 = lean_ctor_get(x_294, 1);
lean_inc(x_296);
lean_dec(x_294);
if (lean_is_scalar(x_293)) {
 x_297 = lean_alloc_ctor(0, 4, 0);
} else {
 x_297 = x_293;
}
lean_ctor_set(x_297, 0, x_296);
lean_ctor_set(x_297, 1, x_290);
lean_ctor_set(x_297, 2, x_291);
lean_ctor_set(x_297, 3, x_292);
x_298 = lean_st_ref_set(x_6, x_297, x_288);
x_299 = lean_ctor_get(x_298, 1);
lean_inc(x_299);
lean_dec(x_298);
x_300 = lean_unbox(x_295);
lean_dec(x_295);
x_213 = x_300;
x_214 = x_299;
goto block_266;
}
else
{
lean_object* x_301; uint8_t x_302; 
x_301 = lean_ctor_get(x_281, 1);
lean_inc(x_301);
lean_dec(x_281);
x_302 = lean_unbox(x_278);
lean_dec(x_278);
x_213 = x_302;
x_214 = x_301;
goto block_266;
}
block_266:
{
if (x_213 == 0)
{
lean_object* x_215; lean_object* x_248; uint8_t x_249; 
x_248 = lean_ctor_get(x_5, 0);
lean_inc(x_248);
x_249 = lean_ctor_get_uint8(x_248, 4);
lean_dec(x_248);
if (x_249 == 0)
{
uint8_t x_250; lean_object* x_251; lean_object* x_252; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_250 = 0;
x_251 = lean_box(x_250);
if (lean_is_scalar(x_205)) {
 x_252 = lean_alloc_ctor(0, 2, 0);
} else {
 x_252 = x_205;
}
lean_ctor_set(x_252, 0, x_251);
lean_ctor_set(x_252, 1, x_214);
return x_252;
}
else
{
uint8_t x_253; 
x_253 = l_Lean_Level_isMVar(x_1);
if (x_253 == 0)
{
uint8_t x_254; 
x_254 = l_Lean_Level_isMVar(x_2);
if (x_254 == 0)
{
uint8_t x_255; lean_object* x_256; lean_object* x_257; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_255 = 0;
x_256 = lean_box(x_255);
if (lean_is_scalar(x_205)) {
 x_257 = lean_alloc_ctor(0, 2, 0);
} else {
 x_257 = x_205;
}
lean_ctor_set(x_257, 0, x_256);
lean_ctor_set(x_257, 1, x_214);
return x_257;
}
else
{
lean_object* x_258; 
lean_dec(x_205);
x_258 = lean_box(0);
x_215 = x_258;
goto block_247;
}
}
else
{
lean_object* x_259; 
lean_dec(x_205);
x_259 = lean_box(0);
x_215 = x_259;
goto block_247;
}
}
block_247:
{
lean_object* x_216; lean_object* x_217; uint8_t x_218; lean_object* x_219; lean_object* x_236; lean_object* x_237; lean_object* x_238; uint8_t x_239; 
lean_dec(x_215);
x_216 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__5;
x_217 = lean_name_mk_string(x_3, x_216);
x_236 = lean_st_ref_get(x_8, x_214);
x_237 = lean_ctor_get(x_236, 0);
lean_inc(x_237);
x_238 = lean_ctor_get(x_237, 3);
lean_inc(x_238);
lean_dec(x_237);
x_239 = lean_ctor_get_uint8(x_238, sizeof(void*)*1);
lean_dec(x_238);
if (x_239 == 0)
{
lean_object* x_240; uint8_t x_241; 
x_240 = lean_ctor_get(x_236, 1);
lean_inc(x_240);
lean_dec(x_236);
x_241 = 0;
x_218 = x_241;
x_219 = x_240;
goto block_235;
}
else
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; uint8_t x_246; 
x_242 = lean_ctor_get(x_236, 1);
lean_inc(x_242);
lean_dec(x_236);
lean_inc(x_217);
x_243 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_Basic_0__Lean_Meta_processPostponedStep___spec__14(x_217, x_5, x_6, x_7, x_8, x_242);
x_244 = lean_ctor_get(x_243, 0);
lean_inc(x_244);
x_245 = lean_ctor_get(x_243, 1);
lean_inc(x_245);
lean_dec(x_243);
x_246 = lean_unbox(x_244);
lean_dec(x_244);
x_218 = x_246;
x_219 = x_245;
goto block_235;
}
block_235:
{
lean_object* x_220; 
x_220 = l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2___closed__1;
if (x_218 == 0)
{
lean_object* x_221; lean_object* x_222; 
lean_dec(x_217);
lean_dec(x_2);
lean_dec(x_1);
x_221 = lean_box(0);
x_222 = lean_apply_6(x_220, x_221, x_5, x_6, x_7, x_8, x_219);
return x_222;
}
else
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; 
x_223 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_223, 0, x_1);
x_224 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__8;
x_225 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_225, 0, x_224);
lean_ctor_set(x_225, 1, x_223);
x_226 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__10;
x_227 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_227, 0, x_225);
lean_ctor_set(x_227, 1, x_226);
x_228 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_228, 0, x_2);
x_229 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_229, 0, x_227);
lean_ctor_set(x_229, 1, x_228);
x_230 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_230, 0, x_229);
lean_ctor_set(x_230, 1, x_224);
x_231 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__1(x_217, x_230, x_5, x_6, x_7, x_8, x_219);
x_232 = lean_ctor_get(x_231, 0);
lean_inc(x_232);
x_233 = lean_ctor_get(x_231, 1);
lean_inc(x_233);
lean_dec(x_231);
x_234 = lean_apply_6(x_220, x_232, x_5, x_6, x_7, x_8, x_233);
return x_234;
}
}
}
}
else
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; uint8_t x_263; lean_object* x_264; lean_object* x_265; 
lean_dec(x_205);
lean_dec(x_3);
x_260 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_5, x_6, x_7, x_8, x_214);
x_261 = lean_ctor_get(x_260, 1);
lean_inc(x_261);
if (lean_is_exclusive(x_260)) {
 lean_ctor_release(x_260, 0);
 lean_ctor_release(x_260, 1);
 x_262 = x_260;
} else {
 lean_dec_ref(x_260);
 x_262 = lean_box(0);
}
x_263 = 1;
x_264 = lean_box(x_263);
if (lean_is_scalar(x_262)) {
 x_265 = lean_alloc_ctor(0, 2, 0);
} else {
 x_265 = x_262;
}
lean_ctor_set(x_265, 0, x_264);
lean_ctor_set(x_265, 1, x_261);
return x_265;
}
}
}
}
else
{
lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_303 = lean_ctor_get(x_202, 0);
lean_inc(x_303);
x_304 = lean_ctor_get(x_202, 1);
lean_inc(x_304);
if (lean_is_exclusive(x_202)) {
 lean_ctor_release(x_202, 0);
 lean_ctor_release(x_202, 1);
 x_305 = x_202;
} else {
 lean_dec_ref(x_202);
 x_305 = lean_box(0);
}
if (lean_is_scalar(x_305)) {
 x_306 = lean_alloc_ctor(1, 2, 0);
} else {
 x_306 = x_305;
}
lean_ctor_set(x_306, 0, x_303);
lean_ctor_set(x_306, 1, x_304);
return x_306;
}
}
}
}
else
{
uint8_t x_307; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_307 = !lean_is_exclusive(x_40);
if (x_307 == 0)
{
return x_40;
}
else
{
lean_object* x_308; lean_object* x_309; lean_object* x_310; 
x_308 = lean_ctor_get(x_40, 0);
x_309 = lean_ctor_get(x_40, 1);
lean_inc(x_309);
lean_inc(x_308);
lean_dec(x_40);
x_310 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_310, 0, x_308);
lean_ctor_set(x_310, 1, x_309);
return x_310;
}
}
}
}
}
else
{
lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; uint8_t x_322; 
x_311 = lean_ctor_get(x_26, 0);
x_312 = lean_ctor_get(x_26, 1);
x_313 = lean_ctor_get(x_26, 2);
x_314 = lean_ctor_get(x_26, 3);
lean_inc(x_314);
lean_inc(x_313);
lean_inc(x_312);
lean_inc(x_311);
lean_dec(x_26);
lean_inc(x_2);
x_315 = l_Lean_instantiateLevelMVars(x_2, x_311);
x_316 = lean_ctor_get(x_315, 0);
lean_inc(x_316);
x_317 = lean_ctor_get(x_315, 1);
lean_inc(x_317);
lean_dec(x_315);
x_318 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_318, 0, x_317);
lean_ctor_set(x_318, 1, x_312);
lean_ctor_set(x_318, 2, x_313);
lean_ctor_set(x_318, 3, x_314);
x_319 = lean_st_ref_set(x_6, x_318, x_27);
x_320 = lean_ctor_get(x_319, 1);
lean_inc(x_320);
lean_dec(x_319);
x_321 = l_Lean_Level_normalize(x_316);
x_322 = lean_level_eq(x_1, x_22);
if (x_322 == 0)
{
lean_object* x_323; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_323 = lean_is_level_def_eq(x_22, x_321, x_5, x_6, x_7, x_8, x_320);
return x_323;
}
else
{
uint8_t x_324; 
x_324 = lean_level_eq(x_2, x_321);
if (x_324 == 0)
{
lean_object* x_325; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_325 = lean_is_level_def_eq(x_22, x_321, x_5, x_6, x_7, x_8, x_320);
return x_325;
}
else
{
lean_object* x_326; 
lean_dec(x_321);
lean_dec(x_22);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_326 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_1, x_2, x_5, x_6, x_7, x_8, x_320);
if (lean_obj_tag(x_326) == 0)
{
lean_object* x_327; lean_object* x_328; lean_object* x_329; uint8_t x_330; uint8_t x_331; uint8_t x_332; 
x_327 = lean_ctor_get(x_326, 0);
lean_inc(x_327);
x_328 = lean_ctor_get(x_326, 1);
lean_inc(x_328);
if (lean_is_exclusive(x_326)) {
 lean_ctor_release(x_326, 0);
 lean_ctor_release(x_326, 1);
 x_329 = x_326;
} else {
 lean_dec_ref(x_326);
 x_329 = lean_box(0);
}
x_330 = 2;
x_331 = lean_unbox(x_327);
x_332 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_15_(x_331, x_330);
if (x_332 == 0)
{
uint8_t x_333; uint8_t x_334; uint8_t x_335; lean_object* x_336; lean_object* x_337; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_333 = 1;
x_334 = lean_unbox(x_327);
lean_dec(x_327);
x_335 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_15_(x_334, x_333);
x_336 = lean_box(x_335);
if (lean_is_scalar(x_329)) {
 x_337 = lean_alloc_ctor(0, 2, 0);
} else {
 x_337 = x_329;
}
lean_ctor_set(x_337, 0, x_336);
lean_ctor_set(x_337, 1, x_328);
return x_337;
}
else
{
lean_object* x_338; 
lean_dec(x_329);
lean_dec(x_327);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
lean_inc(x_2);
x_338 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_2, x_1, x_5, x_6, x_7, x_8, x_328);
if (lean_obj_tag(x_338) == 0)
{
lean_object* x_339; lean_object* x_340; lean_object* x_341; uint8_t x_342; uint8_t x_343; 
x_339 = lean_ctor_get(x_338, 0);
lean_inc(x_339);
x_340 = lean_ctor_get(x_338, 1);
lean_inc(x_340);
if (lean_is_exclusive(x_338)) {
 lean_ctor_release(x_338, 0);
 lean_ctor_release(x_338, 1);
 x_341 = x_338;
} else {
 lean_dec_ref(x_338);
 x_341 = lean_box(0);
}
x_342 = lean_unbox(x_339);
x_343 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_15_(x_342, x_330);
if (x_343 == 0)
{
uint8_t x_344; uint8_t x_345; uint8_t x_346; lean_object* x_347; lean_object* x_348; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_344 = 1;
x_345 = lean_unbox(x_339);
lean_dec(x_339);
x_346 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_15_(x_345, x_344);
x_347 = lean_box(x_346);
if (lean_is_scalar(x_341)) {
 x_348 = lean_alloc_ctor(0, 2, 0);
} else {
 x_348 = x_341;
}
lean_ctor_set(x_348, 0, x_347);
lean_ctor_set(x_348, 1, x_340);
return x_348;
}
else
{
uint8_t x_349; lean_object* x_350; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; uint8_t x_418; 
lean_dec(x_339);
x_403 = lean_st_ref_get(x_8, x_340);
x_404 = lean_ctor_get(x_403, 1);
lean_inc(x_404);
lean_dec(x_403);
x_405 = lean_st_ref_take(x_6, x_404);
x_406 = lean_ctor_get(x_405, 0);
lean_inc(x_406);
x_407 = lean_ctor_get(x_405, 1);
lean_inc(x_407);
lean_dec(x_405);
x_408 = lean_ctor_get(x_406, 0);
lean_inc(x_408);
x_409 = lean_ctor_get(x_406, 1);
lean_inc(x_409);
x_410 = lean_ctor_get(x_406, 2);
lean_inc(x_410);
x_411 = lean_ctor_get(x_406, 3);
lean_inc(x_411);
if (lean_is_exclusive(x_406)) {
 lean_ctor_release(x_406, 0);
 lean_ctor_release(x_406, 1);
 lean_ctor_release(x_406, 2);
 lean_ctor_release(x_406, 3);
 x_412 = x_406;
} else {
 lean_dec_ref(x_406);
 x_412 = lean_box(0);
}
lean_inc(x_1);
x_413 = l_Lean_hasAssignableLevelMVar(x_1, x_408);
x_414 = lean_ctor_get(x_413, 0);
lean_inc(x_414);
x_415 = lean_ctor_get(x_413, 1);
lean_inc(x_415);
lean_dec(x_413);
if (lean_is_scalar(x_412)) {
 x_416 = lean_alloc_ctor(0, 4, 0);
} else {
 x_416 = x_412;
}
lean_ctor_set(x_416, 0, x_415);
lean_ctor_set(x_416, 1, x_409);
lean_ctor_set(x_416, 2, x_410);
lean_ctor_set(x_416, 3, x_411);
x_417 = lean_st_ref_set(x_6, x_416, x_407);
x_418 = lean_unbox(x_414);
if (x_418 == 0)
{
lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; uint8_t x_436; 
lean_dec(x_414);
x_419 = lean_ctor_get(x_417, 1);
lean_inc(x_419);
lean_dec(x_417);
x_420 = lean_st_ref_get(x_8, x_419);
x_421 = lean_ctor_get(x_420, 1);
lean_inc(x_421);
lean_dec(x_420);
x_422 = lean_st_ref_take(x_6, x_421);
x_423 = lean_ctor_get(x_422, 0);
lean_inc(x_423);
x_424 = lean_ctor_get(x_422, 1);
lean_inc(x_424);
lean_dec(x_422);
x_425 = lean_ctor_get(x_423, 0);
lean_inc(x_425);
x_426 = lean_ctor_get(x_423, 1);
lean_inc(x_426);
x_427 = lean_ctor_get(x_423, 2);
lean_inc(x_427);
x_428 = lean_ctor_get(x_423, 3);
lean_inc(x_428);
if (lean_is_exclusive(x_423)) {
 lean_ctor_release(x_423, 0);
 lean_ctor_release(x_423, 1);
 lean_ctor_release(x_423, 2);
 lean_ctor_release(x_423, 3);
 x_429 = x_423;
} else {
 lean_dec_ref(x_423);
 x_429 = lean_box(0);
}
lean_inc(x_2);
x_430 = l_Lean_hasAssignableLevelMVar(x_2, x_425);
x_431 = lean_ctor_get(x_430, 0);
lean_inc(x_431);
x_432 = lean_ctor_get(x_430, 1);
lean_inc(x_432);
lean_dec(x_430);
if (lean_is_scalar(x_429)) {
 x_433 = lean_alloc_ctor(0, 4, 0);
} else {
 x_433 = x_429;
}
lean_ctor_set(x_433, 0, x_432);
lean_ctor_set(x_433, 1, x_426);
lean_ctor_set(x_433, 2, x_427);
lean_ctor_set(x_433, 3, x_428);
x_434 = lean_st_ref_set(x_6, x_433, x_424);
x_435 = lean_ctor_get(x_434, 1);
lean_inc(x_435);
lean_dec(x_434);
x_436 = lean_unbox(x_431);
lean_dec(x_431);
x_349 = x_436;
x_350 = x_435;
goto block_402;
}
else
{
lean_object* x_437; uint8_t x_438; 
x_437 = lean_ctor_get(x_417, 1);
lean_inc(x_437);
lean_dec(x_417);
x_438 = lean_unbox(x_414);
lean_dec(x_414);
x_349 = x_438;
x_350 = x_437;
goto block_402;
}
block_402:
{
if (x_349 == 0)
{
lean_object* x_351; lean_object* x_384; uint8_t x_385; 
x_384 = lean_ctor_get(x_5, 0);
lean_inc(x_384);
x_385 = lean_ctor_get_uint8(x_384, 4);
lean_dec(x_384);
if (x_385 == 0)
{
uint8_t x_386; lean_object* x_387; lean_object* x_388; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_386 = 0;
x_387 = lean_box(x_386);
if (lean_is_scalar(x_341)) {
 x_388 = lean_alloc_ctor(0, 2, 0);
} else {
 x_388 = x_341;
}
lean_ctor_set(x_388, 0, x_387);
lean_ctor_set(x_388, 1, x_350);
return x_388;
}
else
{
uint8_t x_389; 
x_389 = l_Lean_Level_isMVar(x_1);
if (x_389 == 0)
{
uint8_t x_390; 
x_390 = l_Lean_Level_isMVar(x_2);
if (x_390 == 0)
{
uint8_t x_391; lean_object* x_392; lean_object* x_393; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_391 = 0;
x_392 = lean_box(x_391);
if (lean_is_scalar(x_341)) {
 x_393 = lean_alloc_ctor(0, 2, 0);
} else {
 x_393 = x_341;
}
lean_ctor_set(x_393, 0, x_392);
lean_ctor_set(x_393, 1, x_350);
return x_393;
}
else
{
lean_object* x_394; 
lean_dec(x_341);
x_394 = lean_box(0);
x_351 = x_394;
goto block_383;
}
}
else
{
lean_object* x_395; 
lean_dec(x_341);
x_395 = lean_box(0);
x_351 = x_395;
goto block_383;
}
}
block_383:
{
lean_object* x_352; lean_object* x_353; uint8_t x_354; lean_object* x_355; lean_object* x_372; lean_object* x_373; lean_object* x_374; uint8_t x_375; 
lean_dec(x_351);
x_352 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__5;
x_353 = lean_name_mk_string(x_3, x_352);
x_372 = lean_st_ref_get(x_8, x_350);
x_373 = lean_ctor_get(x_372, 0);
lean_inc(x_373);
x_374 = lean_ctor_get(x_373, 3);
lean_inc(x_374);
lean_dec(x_373);
x_375 = lean_ctor_get_uint8(x_374, sizeof(void*)*1);
lean_dec(x_374);
if (x_375 == 0)
{
lean_object* x_376; uint8_t x_377; 
x_376 = lean_ctor_get(x_372, 1);
lean_inc(x_376);
lean_dec(x_372);
x_377 = 0;
x_354 = x_377;
x_355 = x_376;
goto block_371;
}
else
{
lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; uint8_t x_382; 
x_378 = lean_ctor_get(x_372, 1);
lean_inc(x_378);
lean_dec(x_372);
lean_inc(x_353);
x_379 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_Basic_0__Lean_Meta_processPostponedStep___spec__14(x_353, x_5, x_6, x_7, x_8, x_378);
x_380 = lean_ctor_get(x_379, 0);
lean_inc(x_380);
x_381 = lean_ctor_get(x_379, 1);
lean_inc(x_381);
lean_dec(x_379);
x_382 = lean_unbox(x_380);
lean_dec(x_380);
x_354 = x_382;
x_355 = x_381;
goto block_371;
}
block_371:
{
lean_object* x_356; 
x_356 = l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2___closed__1;
if (x_354 == 0)
{
lean_object* x_357; lean_object* x_358; 
lean_dec(x_353);
lean_dec(x_2);
lean_dec(x_1);
x_357 = lean_box(0);
x_358 = lean_apply_6(x_356, x_357, x_5, x_6, x_7, x_8, x_355);
return x_358;
}
else
{
lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; 
x_359 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_359, 0, x_1);
x_360 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__8;
x_361 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_361, 0, x_360);
lean_ctor_set(x_361, 1, x_359);
x_362 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__10;
x_363 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_363, 0, x_361);
lean_ctor_set(x_363, 1, x_362);
x_364 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_364, 0, x_2);
x_365 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_365, 0, x_363);
lean_ctor_set(x_365, 1, x_364);
x_366 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_366, 0, x_365);
lean_ctor_set(x_366, 1, x_360);
x_367 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__1(x_353, x_366, x_5, x_6, x_7, x_8, x_355);
x_368 = lean_ctor_get(x_367, 0);
lean_inc(x_368);
x_369 = lean_ctor_get(x_367, 1);
lean_inc(x_369);
lean_dec(x_367);
x_370 = lean_apply_6(x_356, x_368, x_5, x_6, x_7, x_8, x_369);
return x_370;
}
}
}
}
else
{
lean_object* x_396; lean_object* x_397; lean_object* x_398; uint8_t x_399; lean_object* x_400; lean_object* x_401; 
lean_dec(x_341);
lean_dec(x_3);
x_396 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_5, x_6, x_7, x_8, x_350);
x_397 = lean_ctor_get(x_396, 1);
lean_inc(x_397);
if (lean_is_exclusive(x_396)) {
 lean_ctor_release(x_396, 0);
 lean_ctor_release(x_396, 1);
 x_398 = x_396;
} else {
 lean_dec_ref(x_396);
 x_398 = lean_box(0);
}
x_399 = 1;
x_400 = lean_box(x_399);
if (lean_is_scalar(x_398)) {
 x_401 = lean_alloc_ctor(0, 2, 0);
} else {
 x_401 = x_398;
}
lean_ctor_set(x_401, 0, x_400);
lean_ctor_set(x_401, 1, x_397);
return x_401;
}
}
}
}
else
{
lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_439 = lean_ctor_get(x_338, 0);
lean_inc(x_439);
x_440 = lean_ctor_get(x_338, 1);
lean_inc(x_440);
if (lean_is_exclusive(x_338)) {
 lean_ctor_release(x_338, 0);
 lean_ctor_release(x_338, 1);
 x_441 = x_338;
} else {
 lean_dec_ref(x_338);
 x_441 = lean_box(0);
}
if (lean_is_scalar(x_441)) {
 x_442 = lean_alloc_ctor(1, 2, 0);
} else {
 x_442 = x_441;
}
lean_ctor_set(x_442, 0, x_439);
lean_ctor_set(x_442, 1, x_440);
return x_442;
}
}
}
else
{
lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_443 = lean_ctor_get(x_326, 0);
lean_inc(x_443);
x_444 = lean_ctor_get(x_326, 1);
lean_inc(x_444);
if (lean_is_exclusive(x_326)) {
 lean_ctor_release(x_326, 0);
 lean_ctor_release(x_326, 1);
 x_445 = x_326;
} else {
 lean_dec_ref(x_326);
 x_445 = lean_box(0);
}
if (lean_is_scalar(x_445)) {
 x_446 = lean_alloc_ctor(1, 2, 0);
} else {
 x_446 = x_445;
}
lean_ctor_set(x_446, 0, x_443);
lean_ctor_set(x_446, 1, x_444);
return x_446;
}
}
}
}
}
else
{
lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; uint8_t x_475; 
x_447 = lean_ctor_get(x_13, 0);
x_448 = lean_ctor_get(x_13, 1);
x_449 = lean_ctor_get(x_13, 2);
x_450 = lean_ctor_get(x_13, 3);
lean_inc(x_450);
lean_inc(x_449);
lean_inc(x_448);
lean_inc(x_447);
lean_dec(x_13);
lean_inc(x_1);
x_451 = l_Lean_instantiateLevelMVars(x_1, x_447);
x_452 = lean_ctor_get(x_451, 0);
lean_inc(x_452);
x_453 = lean_ctor_get(x_451, 1);
lean_inc(x_453);
lean_dec(x_451);
x_454 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_454, 0, x_453);
lean_ctor_set(x_454, 1, x_448);
lean_ctor_set(x_454, 2, x_449);
lean_ctor_set(x_454, 3, x_450);
x_455 = lean_st_ref_set(x_6, x_454, x_14);
x_456 = lean_ctor_get(x_455, 1);
lean_inc(x_456);
lean_dec(x_455);
x_457 = l_Lean_Level_normalize(x_452);
x_458 = lean_st_ref_get(x_8, x_456);
x_459 = lean_ctor_get(x_458, 1);
lean_inc(x_459);
lean_dec(x_458);
x_460 = lean_st_ref_take(x_6, x_459);
x_461 = lean_ctor_get(x_460, 0);
lean_inc(x_461);
x_462 = lean_ctor_get(x_460, 1);
lean_inc(x_462);
lean_dec(x_460);
x_463 = lean_ctor_get(x_461, 0);
lean_inc(x_463);
x_464 = lean_ctor_get(x_461, 1);
lean_inc(x_464);
x_465 = lean_ctor_get(x_461, 2);
lean_inc(x_465);
x_466 = lean_ctor_get(x_461, 3);
lean_inc(x_466);
if (lean_is_exclusive(x_461)) {
 lean_ctor_release(x_461, 0);
 lean_ctor_release(x_461, 1);
 lean_ctor_release(x_461, 2);
 lean_ctor_release(x_461, 3);
 x_467 = x_461;
} else {
 lean_dec_ref(x_461);
 x_467 = lean_box(0);
}
lean_inc(x_2);
x_468 = l_Lean_instantiateLevelMVars(x_2, x_463);
x_469 = lean_ctor_get(x_468, 0);
lean_inc(x_469);
x_470 = lean_ctor_get(x_468, 1);
lean_inc(x_470);
lean_dec(x_468);
if (lean_is_scalar(x_467)) {
 x_471 = lean_alloc_ctor(0, 4, 0);
} else {
 x_471 = x_467;
}
lean_ctor_set(x_471, 0, x_470);
lean_ctor_set(x_471, 1, x_464);
lean_ctor_set(x_471, 2, x_465);
lean_ctor_set(x_471, 3, x_466);
x_472 = lean_st_ref_set(x_6, x_471, x_462);
x_473 = lean_ctor_get(x_472, 1);
lean_inc(x_473);
lean_dec(x_472);
x_474 = l_Lean_Level_normalize(x_469);
x_475 = lean_level_eq(x_1, x_457);
if (x_475 == 0)
{
lean_object* x_476; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_476 = lean_is_level_def_eq(x_457, x_474, x_5, x_6, x_7, x_8, x_473);
return x_476;
}
else
{
uint8_t x_477; 
x_477 = lean_level_eq(x_2, x_474);
if (x_477 == 0)
{
lean_object* x_478; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_478 = lean_is_level_def_eq(x_457, x_474, x_5, x_6, x_7, x_8, x_473);
return x_478;
}
else
{
lean_object* x_479; 
lean_dec(x_474);
lean_dec(x_457);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_479 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_1, x_2, x_5, x_6, x_7, x_8, x_473);
if (lean_obj_tag(x_479) == 0)
{
lean_object* x_480; lean_object* x_481; lean_object* x_482; uint8_t x_483; uint8_t x_484; uint8_t x_485; 
x_480 = lean_ctor_get(x_479, 0);
lean_inc(x_480);
x_481 = lean_ctor_get(x_479, 1);
lean_inc(x_481);
if (lean_is_exclusive(x_479)) {
 lean_ctor_release(x_479, 0);
 lean_ctor_release(x_479, 1);
 x_482 = x_479;
} else {
 lean_dec_ref(x_479);
 x_482 = lean_box(0);
}
x_483 = 2;
x_484 = lean_unbox(x_480);
x_485 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_15_(x_484, x_483);
if (x_485 == 0)
{
uint8_t x_486; uint8_t x_487; uint8_t x_488; lean_object* x_489; lean_object* x_490; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_486 = 1;
x_487 = lean_unbox(x_480);
lean_dec(x_480);
x_488 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_15_(x_487, x_486);
x_489 = lean_box(x_488);
if (lean_is_scalar(x_482)) {
 x_490 = lean_alloc_ctor(0, 2, 0);
} else {
 x_490 = x_482;
}
lean_ctor_set(x_490, 0, x_489);
lean_ctor_set(x_490, 1, x_481);
return x_490;
}
else
{
lean_object* x_491; 
lean_dec(x_482);
lean_dec(x_480);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
lean_inc(x_2);
x_491 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_2, x_1, x_5, x_6, x_7, x_8, x_481);
if (lean_obj_tag(x_491) == 0)
{
lean_object* x_492; lean_object* x_493; lean_object* x_494; uint8_t x_495; uint8_t x_496; 
x_492 = lean_ctor_get(x_491, 0);
lean_inc(x_492);
x_493 = lean_ctor_get(x_491, 1);
lean_inc(x_493);
if (lean_is_exclusive(x_491)) {
 lean_ctor_release(x_491, 0);
 lean_ctor_release(x_491, 1);
 x_494 = x_491;
} else {
 lean_dec_ref(x_491);
 x_494 = lean_box(0);
}
x_495 = lean_unbox(x_492);
x_496 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_15_(x_495, x_483);
if (x_496 == 0)
{
uint8_t x_497; uint8_t x_498; uint8_t x_499; lean_object* x_500; lean_object* x_501; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_497 = 1;
x_498 = lean_unbox(x_492);
lean_dec(x_492);
x_499 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_15_(x_498, x_497);
x_500 = lean_box(x_499);
if (lean_is_scalar(x_494)) {
 x_501 = lean_alloc_ctor(0, 2, 0);
} else {
 x_501 = x_494;
}
lean_ctor_set(x_501, 0, x_500);
lean_ctor_set(x_501, 1, x_493);
return x_501;
}
else
{
uint8_t x_502; lean_object* x_503; lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; lean_object* x_563; lean_object* x_564; lean_object* x_565; lean_object* x_566; lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; uint8_t x_571; 
lean_dec(x_492);
x_556 = lean_st_ref_get(x_8, x_493);
x_557 = lean_ctor_get(x_556, 1);
lean_inc(x_557);
lean_dec(x_556);
x_558 = lean_st_ref_take(x_6, x_557);
x_559 = lean_ctor_get(x_558, 0);
lean_inc(x_559);
x_560 = lean_ctor_get(x_558, 1);
lean_inc(x_560);
lean_dec(x_558);
x_561 = lean_ctor_get(x_559, 0);
lean_inc(x_561);
x_562 = lean_ctor_get(x_559, 1);
lean_inc(x_562);
x_563 = lean_ctor_get(x_559, 2);
lean_inc(x_563);
x_564 = lean_ctor_get(x_559, 3);
lean_inc(x_564);
if (lean_is_exclusive(x_559)) {
 lean_ctor_release(x_559, 0);
 lean_ctor_release(x_559, 1);
 lean_ctor_release(x_559, 2);
 lean_ctor_release(x_559, 3);
 x_565 = x_559;
} else {
 lean_dec_ref(x_559);
 x_565 = lean_box(0);
}
lean_inc(x_1);
x_566 = l_Lean_hasAssignableLevelMVar(x_1, x_561);
x_567 = lean_ctor_get(x_566, 0);
lean_inc(x_567);
x_568 = lean_ctor_get(x_566, 1);
lean_inc(x_568);
lean_dec(x_566);
if (lean_is_scalar(x_565)) {
 x_569 = lean_alloc_ctor(0, 4, 0);
} else {
 x_569 = x_565;
}
lean_ctor_set(x_569, 0, x_568);
lean_ctor_set(x_569, 1, x_562);
lean_ctor_set(x_569, 2, x_563);
lean_ctor_set(x_569, 3, x_564);
x_570 = lean_st_ref_set(x_6, x_569, x_560);
x_571 = lean_unbox(x_567);
if (x_571 == 0)
{
lean_object* x_572; lean_object* x_573; lean_object* x_574; lean_object* x_575; lean_object* x_576; lean_object* x_577; lean_object* x_578; lean_object* x_579; lean_object* x_580; lean_object* x_581; lean_object* x_582; lean_object* x_583; lean_object* x_584; lean_object* x_585; lean_object* x_586; lean_object* x_587; lean_object* x_588; uint8_t x_589; 
lean_dec(x_567);
x_572 = lean_ctor_get(x_570, 1);
lean_inc(x_572);
lean_dec(x_570);
x_573 = lean_st_ref_get(x_8, x_572);
x_574 = lean_ctor_get(x_573, 1);
lean_inc(x_574);
lean_dec(x_573);
x_575 = lean_st_ref_take(x_6, x_574);
x_576 = lean_ctor_get(x_575, 0);
lean_inc(x_576);
x_577 = lean_ctor_get(x_575, 1);
lean_inc(x_577);
lean_dec(x_575);
x_578 = lean_ctor_get(x_576, 0);
lean_inc(x_578);
x_579 = lean_ctor_get(x_576, 1);
lean_inc(x_579);
x_580 = lean_ctor_get(x_576, 2);
lean_inc(x_580);
x_581 = lean_ctor_get(x_576, 3);
lean_inc(x_581);
if (lean_is_exclusive(x_576)) {
 lean_ctor_release(x_576, 0);
 lean_ctor_release(x_576, 1);
 lean_ctor_release(x_576, 2);
 lean_ctor_release(x_576, 3);
 x_582 = x_576;
} else {
 lean_dec_ref(x_576);
 x_582 = lean_box(0);
}
lean_inc(x_2);
x_583 = l_Lean_hasAssignableLevelMVar(x_2, x_578);
x_584 = lean_ctor_get(x_583, 0);
lean_inc(x_584);
x_585 = lean_ctor_get(x_583, 1);
lean_inc(x_585);
lean_dec(x_583);
if (lean_is_scalar(x_582)) {
 x_586 = lean_alloc_ctor(0, 4, 0);
} else {
 x_586 = x_582;
}
lean_ctor_set(x_586, 0, x_585);
lean_ctor_set(x_586, 1, x_579);
lean_ctor_set(x_586, 2, x_580);
lean_ctor_set(x_586, 3, x_581);
x_587 = lean_st_ref_set(x_6, x_586, x_577);
x_588 = lean_ctor_get(x_587, 1);
lean_inc(x_588);
lean_dec(x_587);
x_589 = lean_unbox(x_584);
lean_dec(x_584);
x_502 = x_589;
x_503 = x_588;
goto block_555;
}
else
{
lean_object* x_590; uint8_t x_591; 
x_590 = lean_ctor_get(x_570, 1);
lean_inc(x_590);
lean_dec(x_570);
x_591 = lean_unbox(x_567);
lean_dec(x_567);
x_502 = x_591;
x_503 = x_590;
goto block_555;
}
block_555:
{
if (x_502 == 0)
{
lean_object* x_504; lean_object* x_537; uint8_t x_538; 
x_537 = lean_ctor_get(x_5, 0);
lean_inc(x_537);
x_538 = lean_ctor_get_uint8(x_537, 4);
lean_dec(x_537);
if (x_538 == 0)
{
uint8_t x_539; lean_object* x_540; lean_object* x_541; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_539 = 0;
x_540 = lean_box(x_539);
if (lean_is_scalar(x_494)) {
 x_541 = lean_alloc_ctor(0, 2, 0);
} else {
 x_541 = x_494;
}
lean_ctor_set(x_541, 0, x_540);
lean_ctor_set(x_541, 1, x_503);
return x_541;
}
else
{
uint8_t x_542; 
x_542 = l_Lean_Level_isMVar(x_1);
if (x_542 == 0)
{
uint8_t x_543; 
x_543 = l_Lean_Level_isMVar(x_2);
if (x_543 == 0)
{
uint8_t x_544; lean_object* x_545; lean_object* x_546; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_544 = 0;
x_545 = lean_box(x_544);
if (lean_is_scalar(x_494)) {
 x_546 = lean_alloc_ctor(0, 2, 0);
} else {
 x_546 = x_494;
}
lean_ctor_set(x_546, 0, x_545);
lean_ctor_set(x_546, 1, x_503);
return x_546;
}
else
{
lean_object* x_547; 
lean_dec(x_494);
x_547 = lean_box(0);
x_504 = x_547;
goto block_536;
}
}
else
{
lean_object* x_548; 
lean_dec(x_494);
x_548 = lean_box(0);
x_504 = x_548;
goto block_536;
}
}
block_536:
{
lean_object* x_505; lean_object* x_506; uint8_t x_507; lean_object* x_508; lean_object* x_525; lean_object* x_526; lean_object* x_527; uint8_t x_528; 
lean_dec(x_504);
x_505 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__5;
x_506 = lean_name_mk_string(x_3, x_505);
x_525 = lean_st_ref_get(x_8, x_503);
x_526 = lean_ctor_get(x_525, 0);
lean_inc(x_526);
x_527 = lean_ctor_get(x_526, 3);
lean_inc(x_527);
lean_dec(x_526);
x_528 = lean_ctor_get_uint8(x_527, sizeof(void*)*1);
lean_dec(x_527);
if (x_528 == 0)
{
lean_object* x_529; uint8_t x_530; 
x_529 = lean_ctor_get(x_525, 1);
lean_inc(x_529);
lean_dec(x_525);
x_530 = 0;
x_507 = x_530;
x_508 = x_529;
goto block_524;
}
else
{
lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; uint8_t x_535; 
x_531 = lean_ctor_get(x_525, 1);
lean_inc(x_531);
lean_dec(x_525);
lean_inc(x_506);
x_532 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_Basic_0__Lean_Meta_processPostponedStep___spec__14(x_506, x_5, x_6, x_7, x_8, x_531);
x_533 = lean_ctor_get(x_532, 0);
lean_inc(x_533);
x_534 = lean_ctor_get(x_532, 1);
lean_inc(x_534);
lean_dec(x_532);
x_535 = lean_unbox(x_533);
lean_dec(x_533);
x_507 = x_535;
x_508 = x_534;
goto block_524;
}
block_524:
{
lean_object* x_509; 
x_509 = l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2___closed__1;
if (x_507 == 0)
{
lean_object* x_510; lean_object* x_511; 
lean_dec(x_506);
lean_dec(x_2);
lean_dec(x_1);
x_510 = lean_box(0);
x_511 = lean_apply_6(x_509, x_510, x_5, x_6, x_7, x_8, x_508);
return x_511;
}
else
{
lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; 
x_512 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_512, 0, x_1);
x_513 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__8;
x_514 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_514, 0, x_513);
lean_ctor_set(x_514, 1, x_512);
x_515 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__10;
x_516 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_516, 0, x_514);
lean_ctor_set(x_516, 1, x_515);
x_517 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_517, 0, x_2);
x_518 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_518, 0, x_516);
lean_ctor_set(x_518, 1, x_517);
x_519 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_519, 0, x_518);
lean_ctor_set(x_519, 1, x_513);
x_520 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__1(x_506, x_519, x_5, x_6, x_7, x_8, x_508);
x_521 = lean_ctor_get(x_520, 0);
lean_inc(x_521);
x_522 = lean_ctor_get(x_520, 1);
lean_inc(x_522);
lean_dec(x_520);
x_523 = lean_apply_6(x_509, x_521, x_5, x_6, x_7, x_8, x_522);
return x_523;
}
}
}
}
else
{
lean_object* x_549; lean_object* x_550; lean_object* x_551; uint8_t x_552; lean_object* x_553; lean_object* x_554; 
lean_dec(x_494);
lean_dec(x_3);
x_549 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_5, x_6, x_7, x_8, x_503);
x_550 = lean_ctor_get(x_549, 1);
lean_inc(x_550);
if (lean_is_exclusive(x_549)) {
 lean_ctor_release(x_549, 0);
 lean_ctor_release(x_549, 1);
 x_551 = x_549;
} else {
 lean_dec_ref(x_549);
 x_551 = lean_box(0);
}
x_552 = 1;
x_553 = lean_box(x_552);
if (lean_is_scalar(x_551)) {
 x_554 = lean_alloc_ctor(0, 2, 0);
} else {
 x_554 = x_551;
}
lean_ctor_set(x_554, 0, x_553);
lean_ctor_set(x_554, 1, x_550);
return x_554;
}
}
}
}
else
{
lean_object* x_592; lean_object* x_593; lean_object* x_594; lean_object* x_595; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_592 = lean_ctor_get(x_491, 0);
lean_inc(x_592);
x_593 = lean_ctor_get(x_491, 1);
lean_inc(x_593);
if (lean_is_exclusive(x_491)) {
 lean_ctor_release(x_491, 0);
 lean_ctor_release(x_491, 1);
 x_594 = x_491;
} else {
 lean_dec_ref(x_491);
 x_594 = lean_box(0);
}
if (lean_is_scalar(x_594)) {
 x_595 = lean_alloc_ctor(1, 2, 0);
} else {
 x_595 = x_594;
}
lean_ctor_set(x_595, 0, x_592);
lean_ctor_set(x_595, 1, x_593);
return x_595;
}
}
}
else
{
lean_object* x_596; lean_object* x_597; lean_object* x_598; lean_object* x_599; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_596 = lean_ctor_get(x_479, 0);
lean_inc(x_596);
x_597 = lean_ctor_get(x_479, 1);
lean_inc(x_597);
if (lean_is_exclusive(x_479)) {
 lean_ctor_release(x_479, 0);
 lean_ctor_release(x_479, 1);
 x_598 = x_479;
} else {
 lean_dec_ref(x_479);
 x_598 = lean_box(0);
}
if (lean_is_scalar(x_598)) {
 x_599 = lean_alloc_ctor(1, 2, 0);
} else {
 x_599 = x_598;
}
lean_ctor_set(x_599, 0, x_596);
lean_ctor_set(x_599, 1, x_597);
return x_599;
}
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_isLevelDefEqAuxImpl___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("step", 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_isLevelDefEqAuxImpl___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4;
x_2 = l_Lean_Meta_isLevelDefEqAuxImpl___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lean_is_level_def_eq(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = l_Lean_Level_getLevelOffset(x_1);
x_9 = l_Lean_Level_getLevelOffset(x_2);
x_10 = lean_level_eq(x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_11 = l_Lean_Meta_isLevelDefEqAuxImpl___closed__2;
x_31 = lean_st_ref_get(x_6, x_7);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_32, 3);
lean_inc(x_33);
lean_dec(x_32);
x_34 = lean_ctor_get_uint8(x_33, sizeof(void*)*1);
lean_dec(x_33);
if (x_34 == 0)
{
lean_object* x_35; uint8_t x_36; 
x_35 = lean_ctor_get(x_31, 1);
lean_inc(x_35);
lean_dec(x_31);
x_36 = 0;
x_12 = x_36;
x_13 = x_35;
goto block_30;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_37 = lean_ctor_get(x_31, 1);
lean_inc(x_37);
lean_dec(x_31);
x_38 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_Basic_0__Lean_Meta_processPostponedStep___spec__14(x_11, x_3, x_4, x_5, x_6, x_37);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_unbox(x_39);
lean_dec(x_39);
x_12 = x_41;
x_13 = x_40;
goto block_30;
}
block_30:
{
if (x_12 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4;
x_15 = lean_box(0);
x_16 = l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2(x_1, x_2, x_14, x_15, x_3, x_4, x_5, x_6, x_13);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_inc(x_1);
x_17 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_17, 0, x_1);
x_18 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__8;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__10;
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
lean_inc(x_2);
x_22 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_22, 0, x_2);
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_18);
x_25 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__1(x_11, x_24, x_3, x_4, x_5, x_6, x_13);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4;
x_29 = l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2(x_1, x_2, x_28, x_26, x_3, x_4, x_5, x_6, x_27);
lean_dec(x_26);
return x_29;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_42 = lean_unsigned_to_nat(0u);
x_43 = l_Lean_Level_getOffsetAux(x_1, x_42);
lean_dec(x_1);
x_44 = l_Lean_Level_getOffsetAux(x_2, x_42);
lean_dec(x_2);
x_45 = lean_nat_dec_eq(x_43, x_44);
lean_dec(x_44);
lean_dec(x_43);
x_46 = lean_box(x_45);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_7);
return x_47;
}
}
case 1:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_48 = l_Lean_Level_getLevelOffset(x_1);
x_49 = l_Lean_Level_getLevelOffset(x_2);
x_50 = lean_level_eq(x_48, x_49);
lean_dec(x_49);
lean_dec(x_48);
if (x_50 == 0)
{
lean_object* x_51; uint8_t x_52; lean_object* x_53; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_51 = l_Lean_Meta_isLevelDefEqAuxImpl___closed__2;
x_71 = lean_st_ref_get(x_6, x_7);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_72, 3);
lean_inc(x_73);
lean_dec(x_72);
x_74 = lean_ctor_get_uint8(x_73, sizeof(void*)*1);
lean_dec(x_73);
if (x_74 == 0)
{
lean_object* x_75; uint8_t x_76; 
x_75 = lean_ctor_get(x_71, 1);
lean_inc(x_75);
lean_dec(x_71);
x_76 = 0;
x_52 = x_76;
x_53 = x_75;
goto block_70;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_77 = lean_ctor_get(x_71, 1);
lean_inc(x_77);
lean_dec(x_71);
x_78 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_Basic_0__Lean_Meta_processPostponedStep___spec__14(x_51, x_3, x_4, x_5, x_6, x_77);
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
x_81 = lean_unbox(x_79);
lean_dec(x_79);
x_52 = x_81;
x_53 = x_80;
goto block_70;
}
block_70:
{
if (x_52 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4;
x_55 = lean_box(0);
x_56 = l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2(x_1, x_2, x_54, x_55, x_3, x_4, x_5, x_6, x_53);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_inc(x_1);
x_57 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_57, 0, x_1);
x_58 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__8;
x_59 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_57);
x_60 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__10;
x_61 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
lean_inc(x_2);
x_62 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_62, 0, x_2);
x_63 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_58);
x_65 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__1(x_51, x_64, x_3, x_4, x_5, x_6, x_53);
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_68 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4;
x_69 = l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2(x_1, x_2, x_68, x_66, x_3, x_4, x_5, x_6, x_67);
lean_dec(x_66);
return x_69;
}
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_82 = lean_unsigned_to_nat(0u);
x_83 = l_Lean_Level_getOffsetAux(x_1, x_82);
lean_dec(x_1);
x_84 = l_Lean_Level_getOffsetAux(x_2, x_82);
lean_dec(x_2);
x_85 = lean_nat_dec_eq(x_83, x_84);
lean_dec(x_84);
lean_dec(x_83);
x_86 = lean_box(x_85);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_7);
return x_87;
}
}
case 1:
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_1, 0);
lean_inc(x_88);
lean_dec(x_1);
x_89 = lean_ctor_get(x_2, 0);
lean_inc(x_89);
lean_dec(x_2);
x_90 = lean_is_level_def_eq(x_88, x_89, x_3, x_4, x_5, x_6, x_7);
return x_90;
}
case 2:
{
lean_object* x_91; lean_object* x_92; uint8_t x_93; 
x_91 = l_Lean_Level_getLevelOffset(x_1);
x_92 = l_Lean_Level_getLevelOffset(x_2);
x_93 = lean_level_eq(x_91, x_92);
lean_dec(x_92);
lean_dec(x_91);
if (x_93 == 0)
{
lean_object* x_94; uint8_t x_95; lean_object* x_96; lean_object* x_114; lean_object* x_115; lean_object* x_116; uint8_t x_117; 
x_94 = l_Lean_Meta_isLevelDefEqAuxImpl___closed__2;
x_114 = lean_st_ref_get(x_6, x_7);
x_115 = lean_ctor_get(x_114, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_115, 3);
lean_inc(x_116);
lean_dec(x_115);
x_117 = lean_ctor_get_uint8(x_116, sizeof(void*)*1);
lean_dec(x_116);
if (x_117 == 0)
{
lean_object* x_118; uint8_t x_119; 
x_118 = lean_ctor_get(x_114, 1);
lean_inc(x_118);
lean_dec(x_114);
x_119 = 0;
x_95 = x_119;
x_96 = x_118;
goto block_113;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; 
x_120 = lean_ctor_get(x_114, 1);
lean_inc(x_120);
lean_dec(x_114);
x_121 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_Basic_0__Lean_Meta_processPostponedStep___spec__14(x_94, x_3, x_4, x_5, x_6, x_120);
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
lean_dec(x_121);
x_124 = lean_unbox(x_122);
lean_dec(x_122);
x_95 = x_124;
x_96 = x_123;
goto block_113;
}
block_113:
{
if (x_95 == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4;
x_98 = lean_box(0);
x_99 = l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2(x_1, x_2, x_97, x_98, x_3, x_4, x_5, x_6, x_96);
return x_99;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
lean_inc(x_1);
x_100 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_100, 0, x_1);
x_101 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__8;
x_102 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_100);
x_103 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__10;
x_104 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_103);
lean_inc(x_2);
x_105 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_105, 0, x_2);
x_106 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_106, 0, x_104);
lean_ctor_set(x_106, 1, x_105);
x_107 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_101);
x_108 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__1(x_94, x_107, x_3, x_4, x_5, x_6, x_96);
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_108, 1);
lean_inc(x_110);
lean_dec(x_108);
x_111 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4;
x_112 = l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2(x_1, x_2, x_111, x_109, x_3, x_4, x_5, x_6, x_110);
lean_dec(x_109);
return x_112;
}
}
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; uint8_t x_128; lean_object* x_129; lean_object* x_130; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_125 = lean_unsigned_to_nat(0u);
x_126 = l_Lean_Level_getOffsetAux(x_1, x_125);
lean_dec(x_1);
x_127 = l_Lean_Level_getOffsetAux(x_2, x_125);
lean_dec(x_2);
x_128 = lean_nat_dec_eq(x_126, x_127);
lean_dec(x_127);
lean_dec(x_126);
x_129 = lean_box(x_128);
x_130 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_7);
return x_130;
}
}
case 3:
{
lean_object* x_131; lean_object* x_132; uint8_t x_133; 
x_131 = l_Lean_Level_getLevelOffset(x_1);
x_132 = l_Lean_Level_getLevelOffset(x_2);
x_133 = lean_level_eq(x_131, x_132);
lean_dec(x_132);
lean_dec(x_131);
if (x_133 == 0)
{
lean_object* x_134; uint8_t x_135; lean_object* x_136; lean_object* x_154; lean_object* x_155; lean_object* x_156; uint8_t x_157; 
x_134 = l_Lean_Meta_isLevelDefEqAuxImpl___closed__2;
x_154 = lean_st_ref_get(x_6, x_7);
x_155 = lean_ctor_get(x_154, 0);
lean_inc(x_155);
x_156 = lean_ctor_get(x_155, 3);
lean_inc(x_156);
lean_dec(x_155);
x_157 = lean_ctor_get_uint8(x_156, sizeof(void*)*1);
lean_dec(x_156);
if (x_157 == 0)
{
lean_object* x_158; uint8_t x_159; 
x_158 = lean_ctor_get(x_154, 1);
lean_inc(x_158);
lean_dec(x_154);
x_159 = 0;
x_135 = x_159;
x_136 = x_158;
goto block_153;
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; uint8_t x_164; 
x_160 = lean_ctor_get(x_154, 1);
lean_inc(x_160);
lean_dec(x_154);
x_161 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_Basic_0__Lean_Meta_processPostponedStep___spec__14(x_134, x_3, x_4, x_5, x_6, x_160);
x_162 = lean_ctor_get(x_161, 0);
lean_inc(x_162);
x_163 = lean_ctor_get(x_161, 1);
lean_inc(x_163);
lean_dec(x_161);
x_164 = lean_unbox(x_162);
lean_dec(x_162);
x_135 = x_164;
x_136 = x_163;
goto block_153;
}
block_153:
{
if (x_135 == 0)
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_137 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4;
x_138 = lean_box(0);
x_139 = l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2(x_1, x_2, x_137, x_138, x_3, x_4, x_5, x_6, x_136);
return x_139;
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
lean_inc(x_1);
x_140 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_140, 0, x_1);
x_141 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__8;
x_142 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_140);
x_143 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__10;
x_144 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_144, 0, x_142);
lean_ctor_set(x_144, 1, x_143);
lean_inc(x_2);
x_145 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_145, 0, x_2);
x_146 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_146, 0, x_144);
lean_ctor_set(x_146, 1, x_145);
x_147 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_147, 0, x_146);
lean_ctor_set(x_147, 1, x_141);
x_148 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__1(x_134, x_147, x_3, x_4, x_5, x_6, x_136);
x_149 = lean_ctor_get(x_148, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_148, 1);
lean_inc(x_150);
lean_dec(x_148);
x_151 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4;
x_152 = l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2(x_1, x_2, x_151, x_149, x_3, x_4, x_5, x_6, x_150);
lean_dec(x_149);
return x_152;
}
}
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; uint8_t x_168; lean_object* x_169; lean_object* x_170; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_165 = lean_unsigned_to_nat(0u);
x_166 = l_Lean_Level_getOffsetAux(x_1, x_165);
lean_dec(x_1);
x_167 = l_Lean_Level_getOffsetAux(x_2, x_165);
lean_dec(x_2);
x_168 = lean_nat_dec_eq(x_166, x_167);
lean_dec(x_167);
lean_dec(x_166);
x_169 = lean_box(x_168);
x_170 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_170, 0, x_169);
lean_ctor_set(x_170, 1, x_7);
return x_170;
}
}
case 4:
{
lean_object* x_171; lean_object* x_172; uint8_t x_173; 
x_171 = l_Lean_Level_getLevelOffset(x_1);
x_172 = l_Lean_Level_getLevelOffset(x_2);
x_173 = lean_level_eq(x_171, x_172);
lean_dec(x_172);
lean_dec(x_171);
if (x_173 == 0)
{
lean_object* x_174; uint8_t x_175; lean_object* x_176; lean_object* x_194; lean_object* x_195; lean_object* x_196; uint8_t x_197; 
x_174 = l_Lean_Meta_isLevelDefEqAuxImpl___closed__2;
x_194 = lean_st_ref_get(x_6, x_7);
x_195 = lean_ctor_get(x_194, 0);
lean_inc(x_195);
x_196 = lean_ctor_get(x_195, 3);
lean_inc(x_196);
lean_dec(x_195);
x_197 = lean_ctor_get_uint8(x_196, sizeof(void*)*1);
lean_dec(x_196);
if (x_197 == 0)
{
lean_object* x_198; uint8_t x_199; 
x_198 = lean_ctor_get(x_194, 1);
lean_inc(x_198);
lean_dec(x_194);
x_199 = 0;
x_175 = x_199;
x_176 = x_198;
goto block_193;
}
else
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; uint8_t x_204; 
x_200 = lean_ctor_get(x_194, 1);
lean_inc(x_200);
lean_dec(x_194);
x_201 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_Basic_0__Lean_Meta_processPostponedStep___spec__14(x_174, x_3, x_4, x_5, x_6, x_200);
x_202 = lean_ctor_get(x_201, 0);
lean_inc(x_202);
x_203 = lean_ctor_get(x_201, 1);
lean_inc(x_203);
lean_dec(x_201);
x_204 = lean_unbox(x_202);
lean_dec(x_202);
x_175 = x_204;
x_176 = x_203;
goto block_193;
}
block_193:
{
if (x_175 == 0)
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_177 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4;
x_178 = lean_box(0);
x_179 = l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2(x_1, x_2, x_177, x_178, x_3, x_4, x_5, x_6, x_176);
return x_179;
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; 
lean_inc(x_1);
x_180 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_180, 0, x_1);
x_181 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__8;
x_182 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_182, 0, x_181);
lean_ctor_set(x_182, 1, x_180);
x_183 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__10;
x_184 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_184, 0, x_182);
lean_ctor_set(x_184, 1, x_183);
lean_inc(x_2);
x_185 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_185, 0, x_2);
x_186 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_186, 0, x_184);
lean_ctor_set(x_186, 1, x_185);
x_187 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_187, 0, x_186);
lean_ctor_set(x_187, 1, x_181);
x_188 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__1(x_174, x_187, x_3, x_4, x_5, x_6, x_176);
x_189 = lean_ctor_get(x_188, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_188, 1);
lean_inc(x_190);
lean_dec(x_188);
x_191 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4;
x_192 = l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2(x_1, x_2, x_191, x_189, x_3, x_4, x_5, x_6, x_190);
lean_dec(x_189);
return x_192;
}
}
}
else
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; uint8_t x_208; lean_object* x_209; lean_object* x_210; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_205 = lean_unsigned_to_nat(0u);
x_206 = l_Lean_Level_getOffsetAux(x_1, x_205);
lean_dec(x_1);
x_207 = l_Lean_Level_getOffsetAux(x_2, x_205);
lean_dec(x_2);
x_208 = lean_nat_dec_eq(x_206, x_207);
lean_dec(x_207);
lean_dec(x_206);
x_209 = lean_box(x_208);
x_210 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_210, 0, x_209);
lean_ctor_set(x_210, 1, x_7);
return x_210;
}
}
default: 
{
lean_object* x_211; lean_object* x_212; uint8_t x_213; 
x_211 = l_Lean_Level_getLevelOffset(x_1);
x_212 = l_Lean_Level_getLevelOffset(x_2);
x_213 = lean_level_eq(x_211, x_212);
lean_dec(x_212);
lean_dec(x_211);
if (x_213 == 0)
{
lean_object* x_214; uint8_t x_215; lean_object* x_216; lean_object* x_234; lean_object* x_235; lean_object* x_236; uint8_t x_237; 
x_214 = l_Lean_Meta_isLevelDefEqAuxImpl___closed__2;
x_234 = lean_st_ref_get(x_6, x_7);
x_235 = lean_ctor_get(x_234, 0);
lean_inc(x_235);
x_236 = lean_ctor_get(x_235, 3);
lean_inc(x_236);
lean_dec(x_235);
x_237 = lean_ctor_get_uint8(x_236, sizeof(void*)*1);
lean_dec(x_236);
if (x_237 == 0)
{
lean_object* x_238; uint8_t x_239; 
x_238 = lean_ctor_get(x_234, 1);
lean_inc(x_238);
lean_dec(x_234);
x_239 = 0;
x_215 = x_239;
x_216 = x_238;
goto block_233;
}
else
{
lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; uint8_t x_244; 
x_240 = lean_ctor_get(x_234, 1);
lean_inc(x_240);
lean_dec(x_234);
x_241 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_Basic_0__Lean_Meta_processPostponedStep___spec__14(x_214, x_3, x_4, x_5, x_6, x_240);
x_242 = lean_ctor_get(x_241, 0);
lean_inc(x_242);
x_243 = lean_ctor_get(x_241, 1);
lean_inc(x_243);
lean_dec(x_241);
x_244 = lean_unbox(x_242);
lean_dec(x_242);
x_215 = x_244;
x_216 = x_243;
goto block_233;
}
block_233:
{
if (x_215 == 0)
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; 
x_217 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4;
x_218 = lean_box(0);
x_219 = l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2(x_1, x_2, x_217, x_218, x_3, x_4, x_5, x_6, x_216);
return x_219;
}
else
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; 
lean_inc(x_1);
x_220 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_220, 0, x_1);
x_221 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__8;
x_222 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_222, 0, x_221);
lean_ctor_set(x_222, 1, x_220);
x_223 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__10;
x_224 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_224, 0, x_222);
lean_ctor_set(x_224, 1, x_223);
lean_inc(x_2);
x_225 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_225, 0, x_2);
x_226 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_226, 0, x_224);
lean_ctor_set(x_226, 1, x_225);
x_227 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_227, 0, x_226);
lean_ctor_set(x_227, 1, x_221);
x_228 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__1(x_214, x_227, x_3, x_4, x_5, x_6, x_216);
x_229 = lean_ctor_get(x_228, 0);
lean_inc(x_229);
x_230 = lean_ctor_get(x_228, 1);
lean_inc(x_230);
lean_dec(x_228);
x_231 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4;
x_232 = l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2(x_1, x_2, x_231, x_229, x_3, x_4, x_5, x_6, x_230);
lean_dec(x_229);
return x_232;
}
}
}
else
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; uint8_t x_248; lean_object* x_249; lean_object* x_250; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_245 = lean_unsigned_to_nat(0u);
x_246 = l_Lean_Level_getOffsetAux(x_1, x_245);
lean_dec(x_1);
x_247 = l_Lean_Level_getOffsetAux(x_2, x_245);
lean_dec(x_2);
x_248 = lean_nat_dec_eq(x_246, x_247);
lean_dec(x_247);
lean_dec(x_246);
x_249 = lean_box(x_248);
x_250 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_250, 0, x_249);
lean_ctor_set(x_250, 1, x_7);
return x_250;
}
}
}
}
case 2:
{
lean_object* x_251; lean_object* x_252; uint8_t x_253; 
x_251 = l_Lean_Level_getLevelOffset(x_1);
x_252 = l_Lean_Level_getLevelOffset(x_2);
x_253 = lean_level_eq(x_251, x_252);
lean_dec(x_252);
lean_dec(x_251);
if (x_253 == 0)
{
lean_object* x_254; uint8_t x_255; lean_object* x_256; lean_object* x_274; lean_object* x_275; lean_object* x_276; uint8_t x_277; 
x_254 = l_Lean_Meta_isLevelDefEqAuxImpl___closed__2;
x_274 = lean_st_ref_get(x_6, x_7);
x_275 = lean_ctor_get(x_274, 0);
lean_inc(x_275);
x_276 = lean_ctor_get(x_275, 3);
lean_inc(x_276);
lean_dec(x_275);
x_277 = lean_ctor_get_uint8(x_276, sizeof(void*)*1);
lean_dec(x_276);
if (x_277 == 0)
{
lean_object* x_278; uint8_t x_279; 
x_278 = lean_ctor_get(x_274, 1);
lean_inc(x_278);
lean_dec(x_274);
x_279 = 0;
x_255 = x_279;
x_256 = x_278;
goto block_273;
}
else
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; uint8_t x_284; 
x_280 = lean_ctor_get(x_274, 1);
lean_inc(x_280);
lean_dec(x_274);
x_281 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_Basic_0__Lean_Meta_processPostponedStep___spec__14(x_254, x_3, x_4, x_5, x_6, x_280);
x_282 = lean_ctor_get(x_281, 0);
lean_inc(x_282);
x_283 = lean_ctor_get(x_281, 1);
lean_inc(x_283);
lean_dec(x_281);
x_284 = lean_unbox(x_282);
lean_dec(x_282);
x_255 = x_284;
x_256 = x_283;
goto block_273;
}
block_273:
{
if (x_255 == 0)
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; 
x_257 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4;
x_258 = lean_box(0);
x_259 = l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2(x_1, x_2, x_257, x_258, x_3, x_4, x_5, x_6, x_256);
return x_259;
}
else
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; 
lean_inc(x_1);
x_260 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_260, 0, x_1);
x_261 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__8;
x_262 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_262, 0, x_261);
lean_ctor_set(x_262, 1, x_260);
x_263 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__10;
x_264 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_264, 0, x_262);
lean_ctor_set(x_264, 1, x_263);
lean_inc(x_2);
x_265 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_265, 0, x_2);
x_266 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_266, 0, x_264);
lean_ctor_set(x_266, 1, x_265);
x_267 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_267, 0, x_266);
lean_ctor_set(x_267, 1, x_261);
x_268 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__1(x_254, x_267, x_3, x_4, x_5, x_6, x_256);
x_269 = lean_ctor_get(x_268, 0);
lean_inc(x_269);
x_270 = lean_ctor_get(x_268, 1);
lean_inc(x_270);
lean_dec(x_268);
x_271 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4;
x_272 = l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2(x_1, x_2, x_271, x_269, x_3, x_4, x_5, x_6, x_270);
lean_dec(x_269);
return x_272;
}
}
}
else
{
lean_object* x_285; lean_object* x_286; lean_object* x_287; uint8_t x_288; lean_object* x_289; lean_object* x_290; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_285 = lean_unsigned_to_nat(0u);
x_286 = l_Lean_Level_getOffsetAux(x_1, x_285);
lean_dec(x_1);
x_287 = l_Lean_Level_getOffsetAux(x_2, x_285);
lean_dec(x_2);
x_288 = lean_nat_dec_eq(x_286, x_287);
lean_dec(x_287);
lean_dec(x_286);
x_289 = lean_box(x_288);
x_290 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_290, 0, x_289);
lean_ctor_set(x_290, 1, x_7);
return x_290;
}
}
case 3:
{
lean_object* x_291; lean_object* x_292; uint8_t x_293; 
x_291 = l_Lean_Level_getLevelOffset(x_1);
x_292 = l_Lean_Level_getLevelOffset(x_2);
x_293 = lean_level_eq(x_291, x_292);
lean_dec(x_292);
lean_dec(x_291);
if (x_293 == 0)
{
lean_object* x_294; uint8_t x_295; lean_object* x_296; lean_object* x_314; lean_object* x_315; lean_object* x_316; uint8_t x_317; 
x_294 = l_Lean_Meta_isLevelDefEqAuxImpl___closed__2;
x_314 = lean_st_ref_get(x_6, x_7);
x_315 = lean_ctor_get(x_314, 0);
lean_inc(x_315);
x_316 = lean_ctor_get(x_315, 3);
lean_inc(x_316);
lean_dec(x_315);
x_317 = lean_ctor_get_uint8(x_316, sizeof(void*)*1);
lean_dec(x_316);
if (x_317 == 0)
{
lean_object* x_318; uint8_t x_319; 
x_318 = lean_ctor_get(x_314, 1);
lean_inc(x_318);
lean_dec(x_314);
x_319 = 0;
x_295 = x_319;
x_296 = x_318;
goto block_313;
}
else
{
lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; uint8_t x_324; 
x_320 = lean_ctor_get(x_314, 1);
lean_inc(x_320);
lean_dec(x_314);
x_321 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_Basic_0__Lean_Meta_processPostponedStep___spec__14(x_294, x_3, x_4, x_5, x_6, x_320);
x_322 = lean_ctor_get(x_321, 0);
lean_inc(x_322);
x_323 = lean_ctor_get(x_321, 1);
lean_inc(x_323);
lean_dec(x_321);
x_324 = lean_unbox(x_322);
lean_dec(x_322);
x_295 = x_324;
x_296 = x_323;
goto block_313;
}
block_313:
{
if (x_295 == 0)
{
lean_object* x_297; lean_object* x_298; lean_object* x_299; 
x_297 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4;
x_298 = lean_box(0);
x_299 = l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2(x_1, x_2, x_297, x_298, x_3, x_4, x_5, x_6, x_296);
return x_299;
}
else
{
lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; 
lean_inc(x_1);
x_300 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_300, 0, x_1);
x_301 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__8;
x_302 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_302, 0, x_301);
lean_ctor_set(x_302, 1, x_300);
x_303 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__10;
x_304 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_304, 0, x_302);
lean_ctor_set(x_304, 1, x_303);
lean_inc(x_2);
x_305 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_305, 0, x_2);
x_306 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_306, 0, x_304);
lean_ctor_set(x_306, 1, x_305);
x_307 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_307, 0, x_306);
lean_ctor_set(x_307, 1, x_301);
x_308 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__1(x_294, x_307, x_3, x_4, x_5, x_6, x_296);
x_309 = lean_ctor_get(x_308, 0);
lean_inc(x_309);
x_310 = lean_ctor_get(x_308, 1);
lean_inc(x_310);
lean_dec(x_308);
x_311 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4;
x_312 = l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2(x_1, x_2, x_311, x_309, x_3, x_4, x_5, x_6, x_310);
lean_dec(x_309);
return x_312;
}
}
}
else
{
lean_object* x_325; lean_object* x_326; lean_object* x_327; uint8_t x_328; lean_object* x_329; lean_object* x_330; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_325 = lean_unsigned_to_nat(0u);
x_326 = l_Lean_Level_getOffsetAux(x_1, x_325);
lean_dec(x_1);
x_327 = l_Lean_Level_getOffsetAux(x_2, x_325);
lean_dec(x_2);
x_328 = lean_nat_dec_eq(x_326, x_327);
lean_dec(x_327);
lean_dec(x_326);
x_329 = lean_box(x_328);
x_330 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_330, 0, x_329);
lean_ctor_set(x_330, 1, x_7);
return x_330;
}
}
case 4:
{
lean_object* x_331; lean_object* x_332; uint8_t x_333; 
x_331 = l_Lean_Level_getLevelOffset(x_1);
x_332 = l_Lean_Level_getLevelOffset(x_2);
x_333 = lean_level_eq(x_331, x_332);
lean_dec(x_332);
lean_dec(x_331);
if (x_333 == 0)
{
lean_object* x_334; uint8_t x_335; lean_object* x_336; lean_object* x_354; lean_object* x_355; lean_object* x_356; uint8_t x_357; 
x_334 = l_Lean_Meta_isLevelDefEqAuxImpl___closed__2;
x_354 = lean_st_ref_get(x_6, x_7);
x_355 = lean_ctor_get(x_354, 0);
lean_inc(x_355);
x_356 = lean_ctor_get(x_355, 3);
lean_inc(x_356);
lean_dec(x_355);
x_357 = lean_ctor_get_uint8(x_356, sizeof(void*)*1);
lean_dec(x_356);
if (x_357 == 0)
{
lean_object* x_358; uint8_t x_359; 
x_358 = lean_ctor_get(x_354, 1);
lean_inc(x_358);
lean_dec(x_354);
x_359 = 0;
x_335 = x_359;
x_336 = x_358;
goto block_353;
}
else
{
lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; uint8_t x_364; 
x_360 = lean_ctor_get(x_354, 1);
lean_inc(x_360);
lean_dec(x_354);
x_361 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_Basic_0__Lean_Meta_processPostponedStep___spec__14(x_334, x_3, x_4, x_5, x_6, x_360);
x_362 = lean_ctor_get(x_361, 0);
lean_inc(x_362);
x_363 = lean_ctor_get(x_361, 1);
lean_inc(x_363);
lean_dec(x_361);
x_364 = lean_unbox(x_362);
lean_dec(x_362);
x_335 = x_364;
x_336 = x_363;
goto block_353;
}
block_353:
{
if (x_335 == 0)
{
lean_object* x_337; lean_object* x_338; lean_object* x_339; 
x_337 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4;
x_338 = lean_box(0);
x_339 = l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2(x_1, x_2, x_337, x_338, x_3, x_4, x_5, x_6, x_336);
return x_339;
}
else
{
lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; 
lean_inc(x_1);
x_340 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_340, 0, x_1);
x_341 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__8;
x_342 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_342, 0, x_341);
lean_ctor_set(x_342, 1, x_340);
x_343 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__10;
x_344 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_344, 0, x_342);
lean_ctor_set(x_344, 1, x_343);
lean_inc(x_2);
x_345 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_345, 0, x_2);
x_346 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_346, 0, x_344);
lean_ctor_set(x_346, 1, x_345);
x_347 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_347, 0, x_346);
lean_ctor_set(x_347, 1, x_341);
x_348 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__1(x_334, x_347, x_3, x_4, x_5, x_6, x_336);
x_349 = lean_ctor_get(x_348, 0);
lean_inc(x_349);
x_350 = lean_ctor_get(x_348, 1);
lean_inc(x_350);
lean_dec(x_348);
x_351 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4;
x_352 = l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2(x_1, x_2, x_351, x_349, x_3, x_4, x_5, x_6, x_350);
lean_dec(x_349);
return x_352;
}
}
}
else
{
lean_object* x_365; lean_object* x_366; lean_object* x_367; uint8_t x_368; lean_object* x_369; lean_object* x_370; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_365 = lean_unsigned_to_nat(0u);
x_366 = l_Lean_Level_getOffsetAux(x_1, x_365);
lean_dec(x_1);
x_367 = l_Lean_Level_getOffsetAux(x_2, x_365);
lean_dec(x_2);
x_368 = lean_nat_dec_eq(x_366, x_367);
lean_dec(x_367);
lean_dec(x_366);
x_369 = lean_box(x_368);
x_370 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_370, 0, x_369);
lean_ctor_set(x_370, 1, x_7);
return x_370;
}
}
default: 
{
lean_object* x_371; lean_object* x_372; uint8_t x_373; 
x_371 = l_Lean_Level_getLevelOffset(x_1);
x_372 = l_Lean_Level_getLevelOffset(x_2);
x_373 = lean_level_eq(x_371, x_372);
lean_dec(x_372);
lean_dec(x_371);
if (x_373 == 0)
{
lean_object* x_374; uint8_t x_375; lean_object* x_376; lean_object* x_394; lean_object* x_395; lean_object* x_396; uint8_t x_397; 
x_374 = l_Lean_Meta_isLevelDefEqAuxImpl___closed__2;
x_394 = lean_st_ref_get(x_6, x_7);
x_395 = lean_ctor_get(x_394, 0);
lean_inc(x_395);
x_396 = lean_ctor_get(x_395, 3);
lean_inc(x_396);
lean_dec(x_395);
x_397 = lean_ctor_get_uint8(x_396, sizeof(void*)*1);
lean_dec(x_396);
if (x_397 == 0)
{
lean_object* x_398; uint8_t x_399; 
x_398 = lean_ctor_get(x_394, 1);
lean_inc(x_398);
lean_dec(x_394);
x_399 = 0;
x_375 = x_399;
x_376 = x_398;
goto block_393;
}
else
{
lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; uint8_t x_404; 
x_400 = lean_ctor_get(x_394, 1);
lean_inc(x_400);
lean_dec(x_394);
x_401 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_Basic_0__Lean_Meta_processPostponedStep___spec__14(x_374, x_3, x_4, x_5, x_6, x_400);
x_402 = lean_ctor_get(x_401, 0);
lean_inc(x_402);
x_403 = lean_ctor_get(x_401, 1);
lean_inc(x_403);
lean_dec(x_401);
x_404 = lean_unbox(x_402);
lean_dec(x_402);
x_375 = x_404;
x_376 = x_403;
goto block_393;
}
block_393:
{
if (x_375 == 0)
{
lean_object* x_377; lean_object* x_378; lean_object* x_379; 
x_377 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4;
x_378 = lean_box(0);
x_379 = l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2(x_1, x_2, x_377, x_378, x_3, x_4, x_5, x_6, x_376);
return x_379;
}
else
{
lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; 
lean_inc(x_1);
x_380 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_380, 0, x_1);
x_381 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__8;
x_382 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_382, 0, x_381);
lean_ctor_set(x_382, 1, x_380);
x_383 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__10;
x_384 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_384, 0, x_382);
lean_ctor_set(x_384, 1, x_383);
lean_inc(x_2);
x_385 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_385, 0, x_2);
x_386 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_386, 0, x_384);
lean_ctor_set(x_386, 1, x_385);
x_387 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_387, 0, x_386);
lean_ctor_set(x_387, 1, x_381);
x_388 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__1(x_374, x_387, x_3, x_4, x_5, x_6, x_376);
x_389 = lean_ctor_get(x_388, 0);
lean_inc(x_389);
x_390 = lean_ctor_get(x_388, 1);
lean_inc(x_390);
lean_dec(x_388);
x_391 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4;
x_392 = l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2(x_1, x_2, x_391, x_389, x_3, x_4, x_5, x_6, x_390);
lean_dec(x_389);
return x_392;
}
}
}
else
{
lean_object* x_405; lean_object* x_406; lean_object* x_407; uint8_t x_408; lean_object* x_409; lean_object* x_410; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_405 = lean_unsigned_to_nat(0u);
x_406 = l_Lean_Level_getOffsetAux(x_1, x_405);
lean_dec(x_1);
x_407 = l_Lean_Level_getOffsetAux(x_2, x_405);
lean_dec(x_2);
x_408 = lean_nat_dec_eq(x_406, x_407);
lean_dec(x_407);
lean_dec(x_406);
x_409 = lean_box(x_408);
x_410 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_410, 0, x_409);
lean_ctor_set(x_410, 1, x_7);
return x_410;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_isLevelDefEqAuxImpl___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_LevelDefEq___hyg_1438_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4;
x_3 = l_Lean_registerTraceClass(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Lean_Meta_isLevelDefEqAuxImpl___closed__2;
x_6 = l_Lean_registerTraceClass(x_5, x_4);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_3);
if (x_7 == 0)
{
return x_3;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_3, 0);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_3);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Util_CollectMVars(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_InferType(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_DecLevel(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_LevelDefEq(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectMVars(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_InferType(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_DecLevel(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_panic___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___spec__1___closed__1 = _init_l_panic___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___spec__1___closed__1();
lean_mark_persistent(l_panic___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___spec__1___closed__1);
l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1 = _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1();
lean_mark_persistent(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1);
l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__2 = _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__2();
lean_mark_persistent(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__2);
l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__3 = _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__3();
lean_mark_persistent(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__3);
l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__4 = _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__4();
lean_mark_persistent(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__4);
l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__5 = _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__5();
lean_mark_persistent(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__5);
l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__6 = _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__6();
lean_mark_persistent(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__6);
l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__1 = _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__1();
lean_mark_persistent(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__1);
l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__2 = _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__2();
lean_mark_persistent(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__2);
l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__3 = _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__3();
lean_mark_persistent(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__3);
l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4 = _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4();
lean_mark_persistent(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4);
l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__5 = _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__5();
lean_mark_persistent(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__5);
l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__6 = _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__6();
lean_mark_persistent(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__6);
l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__7 = _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__7();
lean_mark_persistent(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__7);
l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__8 = _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__8();
lean_mark_persistent(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__8);
l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__9 = _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__9();
lean_mark_persistent(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__9);
l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__10 = _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__10();
lean_mark_persistent(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__10);
l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2___closed__1 = _init_l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Meta_isLevelDefEqAuxImpl___lambda__2___closed__1);
l_Lean_Meta_isLevelDefEqAuxImpl___closed__1 = _init_l_Lean_Meta_isLevelDefEqAuxImpl___closed__1();
lean_mark_persistent(l_Lean_Meta_isLevelDefEqAuxImpl___closed__1);
l_Lean_Meta_isLevelDefEqAuxImpl___closed__2 = _init_l_Lean_Meta_isLevelDefEqAuxImpl___closed__2();
lean_mark_persistent(l_Lean_Meta_isLevelDefEqAuxImpl___closed__2);
res = l_Lean_Meta_initFn____x40_Lean_Meta_LevelDefEq___hyg_1438_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
