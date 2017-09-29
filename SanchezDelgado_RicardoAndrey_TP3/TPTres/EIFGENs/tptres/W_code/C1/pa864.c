/*
 * Code for class PARSER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F864_6994(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_6995(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_6996(EIF_REFERENCE);
extern void F864_6997(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F864_6998(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F864_7003(EIF_REFERENCE, int);
extern void EIF_Minit864(void);

#ifdef __cplusplus
}
#endif

#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PARSER}.make */
void F864_6994 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12678);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(863, Current, 12678);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4924, 0xF80000DC, 0); /* stringtemp */
	tr1 = RTMS_EX_H("",0,0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4924, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 4925, 0xF800035E, 0); /* poli */
	tr1 = RTLNSMART(RTWCT(4925, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4913, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4925, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {PARSER}.stringtemp */
EIF_TYPED_VALUE F864_6995 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4924,Dtype(Current)));
	return r;
}


/* {PARSER}.poli */
EIF_TYPED_VALUE F864_6996 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4925,Dtype(Current)));
	return r;
}


/* {PARSER}.set_string */
void F864_6997 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_string";
	RTEX;
#define arg1 arg1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 1, 12681);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(863, Current, 12681);
	RTCC(arg1, 863, l_feature_name, 1, eif_new_type(220, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 4924, 0xF80000DC, 0); /* stringtemp */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(4924, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {PARSER}.parse */
void F864_6998 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "parse";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc4);
	RTLR(2,tr1);
	RTLR(3,loc5);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 863, Current, 6, 1, 12682);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(863, Current, 12682);
	RTCC(arg1, 863, l_feature_name, 1, eif_new_type(220, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4467, "count", arg1));
		RTTE((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 4, 0xF800035C, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(860, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4897, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if (loc1) break;
		RTHOOK(5);
		RTDBGAL(Current, 5, 0xF80000DC, 0, 0); /* loc5 */
		ui4_1 = loc3;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2392, "item", arg1))(arg1, ui4_1x)).it_c1);
		RTNHOOK(5,1);
		tr1 = c_outc(tc1);
		loc5 = (EIF_REFERENCE) RTCCL(tr1);
		for (;;) {
			RTHOOK(6);
			tb1 = '\01';
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4467, "count", arg1));
			if (!(EIF_BOOLEAN) (loc3 >= ti4_1)) {
				ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2392, "item", arg1))(arg1, ui4_1x)).it_c1);
				RTNHOOK(6,1);
				tr1 = c_outc(tc1);
				tb1 = RTEQ(tr1, RTMS_EX_H(" ",1,32));
			}
			if (tb1) break;
			RTHOOK(7);
			RTDBGAL(Current, 5, 0xF80000DC, 0, 0); /* loc5 */
			ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2392, "item", arg1))(arg1, ui4_1x)).it_c1);
			RTNHOOK(7,1);
			tr1 = c_outc(tc1);
			ur1 = RTCCL(tr1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4421, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc5 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(8);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			loc3++;
		}
		RTHOOK(9);
		if (RTEQ(loc5, RTMS_EX_H("#",1,35))) {
			RTHOOK(10);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4925, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(10,1);
			ur1 = RTCCL(loc4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4920, "add_element", tr1))(tr1, ur1x);
			RTHOOK(11);
			RTDBGAL(Current, 4, 0xF800035C, 0, 0); /* loc4 */
			tr1 = RTLN(eif_new_type(860, 0x01).id);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4897, Dtype(tr1)))(tr1);
			RTNHOOK(11,1);
			loc4 = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(12);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4407, "to_integer", loc5))(loc5)).it_i4);
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4900, "add_element", loc4))(loc4, ui4_1x);
		}
		RTHOOK(13);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		loc3 += ((EIF_INTEGER_32) 2L);
		RTHOOK(14);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4467, "count", arg1));
		if ((EIF_BOOLEAN) (loc3 > ti4_1)) {
			RTHOOK(15);
			RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
			loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(16);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4925, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(16,1);
			ur1 = RTCCL(loc4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4920, "add_element", tr1))(tr1, ur1x);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT(NULL, EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4467, "count", arg1));
		if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {PARSER}._invariant */
void F864_7003 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 863, Current, 0, 7002);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT(NULL, Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4924, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4467, "count", tr1));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
}

void EIF_Minit864 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
