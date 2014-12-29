/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/openAir/rel_0.1_26.10.2014/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SystemInformationBlockType7_H_
#define	_SystemInformationBlockType7_H_


#include <asn_application.h>

/* Including external dependencies */
#include "T-Reselection.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SpeedStateScaleFactors;
struct CarrierFreqsInfoListGERAN;

/* SystemInformationBlockType7 */
typedef struct SystemInformationBlockType7 {
	T_Reselection_t	 t_ReselectionGERAN;
	struct SpeedStateScaleFactors	*t_ReselectionGERAN_SF	/* OPTIONAL */;
	struct CarrierFreqsInfoListGERAN	*carrierFreqsInfoList	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType7;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SpeedStateScaleFactors.h"
#include "CarrierFreqsInfoListGERAN.h"

#endif	/* _SystemInformationBlockType7_H_ */
#include <asn_internal.h>
