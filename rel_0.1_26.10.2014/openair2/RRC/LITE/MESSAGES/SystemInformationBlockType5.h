/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/openAir/rel_0.1_26.10.2014/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SystemInformationBlockType5_H_
#define	_SystemInformationBlockType5_H_


#include <asn_application.h>

/* Including external dependencies */
#include "InterFreqCarrierFreqList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SystemInformationBlockType5 */
typedef struct SystemInformationBlockType5 {
	InterFreqCarrierFreqList_t	 interFreqCarrierFreqList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType5_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType5;

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType5_H_ */
#include <asn_internal.h>
