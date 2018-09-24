/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/usr/local/share/asn1c/standard-modules/ts_102_894_2_v1.2.1.asn1"
 * 	`asn1c -gen-PER`
 */

#ifndef	_WheelBaseVehicle_H_
#define	_WheelBaseVehicle_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum WheelBaseVehicle {
	WheelBaseVehicle_tenCentimeters	= 1,
	WheelBaseVehicle_unavailable	= 127
} e_WheelBaseVehicle;

/* WheelBaseVehicle */
typedef long	 WheelBaseVehicle_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WheelBaseVehicle;
asn_struct_free_f WheelBaseVehicle_free;
asn_struct_print_f WheelBaseVehicle_print;
asn_constr_check_f WheelBaseVehicle_constraint;
ber_type_decoder_f WheelBaseVehicle_decode_ber;
der_type_encoder_f WheelBaseVehicle_encode_der;
xer_type_decoder_f WheelBaseVehicle_decode_xer;
xer_type_encoder_f WheelBaseVehicle_encode_xer;
per_type_decoder_f WheelBaseVehicle_decode_uper;
per_type_encoder_f WheelBaseVehicle_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _WheelBaseVehicle_H_ */
#include <asn_internal.h>
