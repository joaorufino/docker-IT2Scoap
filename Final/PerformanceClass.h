/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/usr/local/share/asn1c/standard-modules/ts_102_894_2_v1.2.1.asn1"
 * 	`asn1c -gen-PER`
 */

#ifndef	_PerformanceClass_H_
#define	_PerformanceClass_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PerformanceClass {
	PerformanceClass_unavailable	= 0,
	PerformanceClass_performanceClassA	= 1,
	PerformanceClass_performanceClassB	= 2
} e_PerformanceClass;

/* PerformanceClass */
typedef long	 PerformanceClass_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PerformanceClass;
asn_struct_free_f PerformanceClass_free;
asn_struct_print_f PerformanceClass_print;
asn_constr_check_f PerformanceClass_constraint;
ber_type_decoder_f PerformanceClass_decode_ber;
der_type_encoder_f PerformanceClass_encode_der;
xer_type_decoder_f PerformanceClass_decode_xer;
xer_type_encoder_f PerformanceClass_encode_xer;
per_type_decoder_f PerformanceClass_decode_uper;
per_type_encoder_f PerformanceClass_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PerformanceClass_H_ */
#include <asn_internal.h>
