/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/openAir/rel_0.1_26.10.2014/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_CarrierBandwidthEUTRA_H_
#define	_CarrierBandwidthEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CarrierBandwidthEUTRA__dl_Bandwidth {
	CarrierBandwidthEUTRA__dl_Bandwidth_n6	= 0,
	CarrierBandwidthEUTRA__dl_Bandwidth_n15	= 1,
	CarrierBandwidthEUTRA__dl_Bandwidth_n25	= 2,
	CarrierBandwidthEUTRA__dl_Bandwidth_n50	= 3,
	CarrierBandwidthEUTRA__dl_Bandwidth_n75	= 4,
	CarrierBandwidthEUTRA__dl_Bandwidth_n100	= 5,
	CarrierBandwidthEUTRA__dl_Bandwidth_spare10	= 6,
	CarrierBandwidthEUTRA__dl_Bandwidth_spare9	= 7,
	CarrierBandwidthEUTRA__dl_Bandwidth_spare8	= 8,
	CarrierBandwidthEUTRA__dl_Bandwidth_spare7	= 9,
	CarrierBandwidthEUTRA__dl_Bandwidth_spare6	= 10,
	CarrierBandwidthEUTRA__dl_Bandwidth_spare5	= 11,
	CarrierBandwidthEUTRA__dl_Bandwidth_spare4	= 12,
	CarrierBandwidthEUTRA__dl_Bandwidth_spare3	= 13,
	CarrierBandwidthEUTRA__dl_Bandwidth_spare2	= 14,
	CarrierBandwidthEUTRA__dl_Bandwidth_spare1	= 15
} e_CarrierBandwidthEUTRA__dl_Bandwidth;
typedef enum CarrierBandwidthEUTRA__ul_Bandwidth {
	CarrierBandwidthEUTRA__ul_Bandwidth_n6	= 0,
	CarrierBandwidthEUTRA__ul_Bandwidth_n15	= 1,
	CarrierBandwidthEUTRA__ul_Bandwidth_n25	= 2,
	CarrierBandwidthEUTRA__ul_Bandwidth_n50	= 3,
	CarrierBandwidthEUTRA__ul_Bandwidth_n75	= 4,
	CarrierBandwidthEUTRA__ul_Bandwidth_n100	= 5,
	CarrierBandwidthEUTRA__ul_Bandwidth_spare10	= 6,
	CarrierBandwidthEUTRA__ul_Bandwidth_spare9	= 7,
	CarrierBandwidthEUTRA__ul_Bandwidth_spare8	= 8,
	CarrierBandwidthEUTRA__ul_Bandwidth_spare7	= 9,
	CarrierBandwidthEUTRA__ul_Bandwidth_spare6	= 10,
	CarrierBandwidthEUTRA__ul_Bandwidth_spare5	= 11,
	CarrierBandwidthEUTRA__ul_Bandwidth_spare4	= 12,
	CarrierBandwidthEUTRA__ul_Bandwidth_spare3	= 13,
	CarrierBandwidthEUTRA__ul_Bandwidth_spare2	= 14,
	CarrierBandwidthEUTRA__ul_Bandwidth_spare1	= 15
} e_CarrierBandwidthEUTRA__ul_Bandwidth;

/* CarrierBandwidthEUTRA */
typedef struct CarrierBandwidthEUTRA {
	long	 dl_Bandwidth;
	long	*ul_Bandwidth	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CarrierBandwidthEUTRA_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dl_Bandwidth_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ul_Bandwidth_19;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CarrierBandwidthEUTRA;

#ifdef __cplusplus
}
#endif

#endif	/* _CarrierBandwidthEUTRA_H_ */
#include <asn_internal.h>
