/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/openAir/rel_0.1_26.10.2014/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_UL_UM_RLC_H_
#define	_UL_UM_RLC_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SN-FieldLength.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UL-UM-RLC */
typedef struct UL_UM_RLC {
	SN_FieldLength_t	 sn_FieldLength;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_UM_RLC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_UM_RLC;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_UM_RLC_H_ */
#include <asn_internal.h>
