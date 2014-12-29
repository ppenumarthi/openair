/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/openAir/rel_0.1_26.10.2014/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_DL_DCCH_MessageType_H_
#define	_DL_DCCH_MessageType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CSFBParametersResponseCDMA2000.h"
#include "DLInformationTransfer.h"
#include "HandoverFromEUTRAPreparationRequest.h"
#include "MobilityFromEUTRACommand.h"
#include "RRCConnectionReconfiguration.h"
#include "RRCConnectionRelease.h"
#include "SecurityModeCommand.h"
#include "UECapabilityEnquiry.h"
#include "CounterCheck.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_DCCH_MessageType_PR {
	DL_DCCH_MessageType_PR_NOTHING,	/* No components present */
	DL_DCCH_MessageType_PR_c1,
	DL_DCCH_MessageType_PR_messageClassExtension
} DL_DCCH_MessageType_PR;
typedef enum DL_DCCH_MessageType__c1_PR {
	DL_DCCH_MessageType__c1_PR_NOTHING,	/* No components present */
	DL_DCCH_MessageType__c1_PR_csfbParametersResponseCDMA2000,
	DL_DCCH_MessageType__c1_PR_dlInformationTransfer,
	DL_DCCH_MessageType__c1_PR_handoverFromEUTRAPreparationRequest,
	DL_DCCH_MessageType__c1_PR_mobilityFromEUTRACommand,
	DL_DCCH_MessageType__c1_PR_rrcConnectionReconfiguration,
	DL_DCCH_MessageType__c1_PR_rrcConnectionRelease,
	DL_DCCH_MessageType__c1_PR_securityModeCommand,
	DL_DCCH_MessageType__c1_PR_ueCapabilityEnquiry,
	DL_DCCH_MessageType__c1_PR_counterCheck,
	DL_DCCH_MessageType__c1_PR_spare7,
	DL_DCCH_MessageType__c1_PR_spare6,
	DL_DCCH_MessageType__c1_PR_spare5,
	DL_DCCH_MessageType__c1_PR_spare4,
	DL_DCCH_MessageType__c1_PR_spare3,
	DL_DCCH_MessageType__c1_PR_spare2,
	DL_DCCH_MessageType__c1_PR_spare1
} DL_DCCH_MessageType__c1_PR;

/* DL-DCCH-MessageType */
typedef struct DL_DCCH_MessageType {
	DL_DCCH_MessageType_PR present;
	union DL_DCCH_MessageType_u {
		struct DL_DCCH_MessageType__c1 {
			DL_DCCH_MessageType__c1_PR present;
			union DL_DCCH_MessageType__c1_u {
				CSFBParametersResponseCDMA2000_t	 csfbParametersResponseCDMA2000;
				DLInformationTransfer_t	 dlInformationTransfer;
				HandoverFromEUTRAPreparationRequest_t	 handoverFromEUTRAPreparationRequest;
				MobilityFromEUTRACommand_t	 mobilityFromEUTRACommand;
				RRCConnectionReconfiguration_t	 rrcConnectionReconfiguration;
				RRCConnectionRelease_t	 rrcConnectionRelease;
				SecurityModeCommand_t	 securityModeCommand;
				UECapabilityEnquiry_t	 ueCapabilityEnquiry;
				CounterCheck_t	 counterCheck;
				NULL_t	 spare7;
				NULL_t	 spare6;
				NULL_t	 spare5;
				NULL_t	 spare4;
				NULL_t	 spare3;
				NULL_t	 spare2;
				NULL_t	 spare1;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} c1;
		struct DL_DCCH_MessageType__messageClassExtension {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_DCCH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_DCCH_MessageType;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_DCCH_MessageType_H_ */
#include <asn_internal.h>
