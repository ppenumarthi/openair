/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/openAir/rel_0.1_26.10.2014/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_PUSCH_ConfigDedicated_H_
#define	_PUSCH_ConfigDedicated_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PUSCH-ConfigDedicated */
typedef struct PUSCH_ConfigDedicated {
	long	 betaOffset_ACK_Index;
	long	 betaOffset_RI_Index;
	long	 betaOffset_CQI_Index;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_ConfigDedicated_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_ConfigDedicated;

#ifdef __cplusplus
}
#endif

#endif	/* _PUSCH_ConfigDedicated_H_ */
#include <asn_internal.h>
