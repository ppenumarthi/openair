/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/openAir/rel_0.1_26.10.2014/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_CarrierFreqsInfoListGERAN_H_
#define	_CarrierFreqsInfoListGERAN_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CarrierFreqsInfoGERAN;

/* CarrierFreqsInfoListGERAN */
typedef struct CarrierFreqsInfoListGERAN {
	A_SEQUENCE_OF(struct CarrierFreqsInfoGERAN) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CarrierFreqsInfoListGERAN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CarrierFreqsInfoListGERAN;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CarrierFreqsInfoGERAN.h"

#endif	/* _CarrierFreqsInfoListGERAN_H_ */
#include <asn_internal.h>