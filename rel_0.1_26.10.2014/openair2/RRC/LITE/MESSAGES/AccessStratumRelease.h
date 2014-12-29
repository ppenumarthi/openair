/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/openAir/rel_0.1_26.10.2014/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_AccessStratumRelease_H_
#define	_AccessStratumRelease_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AccessStratumRelease {
	AccessStratumRelease_rel8	= 0,
	AccessStratumRelease_spare7	= 1,
	AccessStratumRelease_spare6	= 2,
	AccessStratumRelease_spare5	= 3,
	AccessStratumRelease_spare4	= 4,
	AccessStratumRelease_spare3	= 5,
	AccessStratumRelease_spare2	= 6,
	AccessStratumRelease_spare1	= 7
	/*
	 * Enumeration is extensible
	 */
} e_AccessStratumRelease;

/* AccessStratumRelease */
typedef long	 AccessStratumRelease_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AccessStratumRelease;
asn_struct_free_f AccessStratumRelease_free;
asn_struct_print_f AccessStratumRelease_print;
asn_constr_check_f AccessStratumRelease_constraint;
ber_type_decoder_f AccessStratumRelease_decode_ber;
der_type_encoder_f AccessStratumRelease_encode_der;
xer_type_decoder_f AccessStratumRelease_decode_xer;
xer_type_encoder_f AccessStratumRelease_encode_xer;
per_type_decoder_f AccessStratumRelease_decode_uper;
per_type_encoder_f AccessStratumRelease_encode_uper;
per_type_decoder_f AccessStratumRelease_decode_aper;
per_type_encoder_f AccessStratumRelease_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _AccessStratumRelease_H_ */
#include <asn_internal.h>
