/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/usr/local/share/asn1c/standard-modules/ts_102_894_2_v1.2.1.asn1"
 * 	`asn1c -gen-PER`
 */

#ifndef	_Altitude_H_
#define	_Altitude_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AltitudeValue.h"
#include "AltitudeConfidence.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Altitude */
typedef struct Altitude {
	AltitudeValue_t	 altitudeValue;
	AltitudeConfidence_t	 altitudeConfidence;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Altitude_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Altitude;

#ifdef __cplusplus
}
#endif

#endif	/* _Altitude_H_ */
#include <asn_internal.h>
