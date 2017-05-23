/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/usr/local/share/asn1c/standard-modules/ts_102_894_2_v1.2.1.asn1"
 * 	`asn1c -gen-PER`
 */

#ifndef	_PtActivationData_H_
#define	_PtActivationData_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PtActivationData */
typedef OCTET_STRING_t	 PtActivationData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PtActivationData;
asn_struct_free_f PtActivationData_free;
asn_struct_print_f PtActivationData_print;
asn_constr_check_f PtActivationData_constraint;
ber_type_decoder_f PtActivationData_decode_ber;
der_type_encoder_f PtActivationData_encode_der;
xer_type_decoder_f PtActivationData_decode_xer;
xer_type_encoder_f PtActivationData_encode_xer;
per_type_decoder_f PtActivationData_decode_uper;
per_type_encoder_f PtActivationData_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PtActivationData_H_ */
#include <asn_internal.h>
