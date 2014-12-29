/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/openAir/rel_0.1_26.10.2014/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_BandClassInfoCDMA2000_H_
#define	_BandClassInfoCDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BandclassCDMA2000.h"
#include "CellReselectionPriority.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BandClassInfoCDMA2000 */
typedef struct BandClassInfoCDMA2000 {
	BandclassCDMA2000_t	 bandClass;
	CellReselectionPriority_t	*cellReselectionPriority	/* OPTIONAL */;
	long	 threshX_High;
	long	 threshX_Low;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandClassInfoCDMA2000_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandClassInfoCDMA2000;

#ifdef __cplusplus
}
#endif

#endif	/* _BandClassInfoCDMA2000_H_ */
#include <asn_internal.h>
