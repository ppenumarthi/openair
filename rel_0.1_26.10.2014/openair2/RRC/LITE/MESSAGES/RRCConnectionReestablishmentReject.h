/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/openAir/rel_0.1_26.10.2014/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_RRCConnectionReestablishmentReject_H_
#define	_RRCConnectionReestablishmentReject_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRCConnectionReestablishmentReject-r8-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReestablishmentReject__criticalExtensions_PR {
	RRCConnectionReestablishmentReject__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCConnectionReestablishmentReject__criticalExtensions_PR_rrcConnectionReestablishmentReject_r8,
	RRCConnectionReestablishmentReject__criticalExtensions_PR_criticalExtensionsFuture
} RRCConnectionReestablishmentReject__criticalExtensions_PR;

/* RRCConnectionReestablishmentReject */
typedef struct RRCConnectionReestablishmentReject {
	struct RRCConnectionReestablishmentReject__criticalExtensions {
		RRCConnectionReestablishmentReject__criticalExtensions_PR present;
		union RRCConnectionReestablishmentReject__criticalExtensions_u {
			RRCConnectionReestablishmentReject_r8_IEs_t	 rrcConnectionReestablishmentReject_r8;
			struct RRCConnectionReestablishmentReject__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReestablishmentReject_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReestablishmentReject;

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReestablishmentReject_H_ */
#include <asn_internal.h>
