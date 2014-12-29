/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/openAir/rel_0.1_26.10.2014/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_RadioResourceConfigDedicated_H_
#define	_RadioResourceConfigDedicated_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MAC-MainConfig.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RadioResourceConfigDedicated__mac_MainConfig_PR {
	RadioResourceConfigDedicated__mac_MainConfig_PR_NOTHING,	/* No components present */
	RadioResourceConfigDedicated__mac_MainConfig_PR_explicitValue,
	RadioResourceConfigDedicated__mac_MainConfig_PR_defaultValue
} RadioResourceConfigDedicated__mac_MainConfig_PR;

/* Forward declarations */
struct SRB_ToAddModList;
struct DRB_ToAddModList;
struct DRB_ToReleaseList;
struct SPS_Config;
struct PhysicalConfigDedicated;

/* RadioResourceConfigDedicated */
typedef struct RadioResourceConfigDedicated {
	struct SRB_ToAddModList	*srb_ToAddModList	/* OPTIONAL */;
	struct DRB_ToAddModList	*drb_ToAddModList	/* OPTIONAL */;
	struct DRB_ToReleaseList	*drb_ToReleaseList	/* OPTIONAL */;
	struct RadioResourceConfigDedicated__mac_MainConfig {
		RadioResourceConfigDedicated__mac_MainConfig_PR present;
		union RadioResourceConfigDedicated__mac_MainConfig_u {
			MAC_MainConfig_t	 explicitValue;
			NULL_t	 defaultValue;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *mac_MainConfig;
	struct SPS_Config	*sps_Config	/* OPTIONAL */;
	struct PhysicalConfigDedicated	*physicalConfigDedicated	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioResourceConfigDedicated_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigDedicated;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SRB-ToAddModList.h"
#include "DRB-ToAddModList.h"
#include "DRB-ToReleaseList.h"
#include "SPS-Config.h"
#include "PhysicalConfigDedicated.h"

#endif	/* _RadioResourceConfigDedicated_H_ */
#include <asn_internal.h>
