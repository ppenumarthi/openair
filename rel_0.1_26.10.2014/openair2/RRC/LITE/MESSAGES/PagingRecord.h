/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/openAir/rel_0.1_26.10.2014/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_PagingRecord_H_
#define	_PagingRecord_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PagingUE-Identity.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PagingRecord__cn_Domain {
	PagingRecord__cn_Domain_ps	= 0,
	PagingRecord__cn_Domain_cs	= 1
} e_PagingRecord__cn_Domain;

/* PagingRecord */
typedef struct PagingRecord {
	PagingUE_Identity_t	 ue_Identity;
	long	 cn_Domain;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PagingRecord_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_cn_Domain_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PagingRecord;

#ifdef __cplusplus
}
#endif

#endif	/* _PagingRecord_H_ */
#include <asn_internal.h>
