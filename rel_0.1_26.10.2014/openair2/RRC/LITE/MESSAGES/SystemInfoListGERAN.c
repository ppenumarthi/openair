/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/openAir/rel_0.1_26.10.2014/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "SystemInfoListGERAN.h"

static int
memb_OCTET_STRING_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 23)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_Member_constr_2 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  23 }	/* (SIZE(1..23)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_SystemInfoListGERAN_constr_1 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  10 }	/* (SIZE(1..10)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_SystemInfoListGERAN_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_OCTET_STRING,
		memb_OCTET_STRING_constraint_1,
		&asn_PER_memb_Member_constr_2,
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_SystemInfoListGERAN_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_SystemInfoListGERAN_specs_1 = {
	sizeof(struct SystemInfoListGERAN),
	offsetof(struct SystemInfoListGERAN, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_SystemInfoListGERAN = {
	"SystemInfoListGERAN",
	"SystemInfoListGERAN",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	SEQUENCE_OF_decode_aper,
	SEQUENCE_OF_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SystemInfoListGERAN_tags_1,
	sizeof(asn_DEF_SystemInfoListGERAN_tags_1)
		/sizeof(asn_DEF_SystemInfoListGERAN_tags_1[0]), /* 1 */
	asn_DEF_SystemInfoListGERAN_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInfoListGERAN_tags_1)
		/sizeof(asn_DEF_SystemInfoListGERAN_tags_1[0]), /* 1 */
	&asn_PER_type_SystemInfoListGERAN_constr_1,
	asn_MBR_SystemInfoListGERAN_1,
	1,	/* Single element */
	&asn_SPC_SystemInfoListGERAN_specs_1	/* Additional specs */
};

