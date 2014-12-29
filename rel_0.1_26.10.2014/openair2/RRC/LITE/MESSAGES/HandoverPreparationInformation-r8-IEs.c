/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/openAir/rel_0.1_26.10.2014/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "HandoverPreparationInformation-r8-IEs.h"

static ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_6 = {
	sizeof(struct HandoverPreparationInformation_r8_IEs__nonCriticalExtension),
	offsetof(struct HandoverPreparationInformation_r8_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_6 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_nonCriticalExtension_tags_6,
	sizeof(asn_DEF_nonCriticalExtension_tags_6)
		/sizeof(asn_DEF_nonCriticalExtension_tags_6[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_6,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_6)
		/sizeof(asn_DEF_nonCriticalExtension_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_HandoverPreparationInformation_r8_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverPreparationInformation_r8_IEs, ue_RadioAccessCapabilityInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_CapabilityRAT_ContainerList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-RadioAccessCapabilityInfo"
		},
	{ ATF_POINTER, 4, offsetof(struct HandoverPreparationInformation_r8_IEs, as_Config),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AS_Config,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"as-Config"
		},
	{ ATF_POINTER, 3, offsetof(struct HandoverPreparationInformation_r8_IEs, rrm_Config),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRM_Config,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrm-Config"
		},
	{ ATF_POINTER, 2, offsetof(struct HandoverPreparationInformation_r8_IEs, as_Context),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AS_Context,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"as-Context"
		},
	{ ATF_POINTER, 1, offsetof(struct HandoverPreparationInformation_r8_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtension"
		},
};
static int asn_MAP_HandoverPreparationInformation_r8_IEs_oms_1[] = { 1, 2, 3, 4 };
static ber_tlv_tag_t asn_DEF_HandoverPreparationInformation_r8_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_HandoverPreparationInformation_r8_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-RadioAccessCapabilityInfo at 2671 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* as-Config at 2672 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rrm-Config at 2673 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* as-Context at 2674 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* nonCriticalExtension at 2675 */
};
static asn_SEQUENCE_specifics_t asn_SPC_HandoverPreparationInformation_r8_IEs_specs_1 = {
	sizeof(struct HandoverPreparationInformation_r8_IEs),
	offsetof(struct HandoverPreparationInformation_r8_IEs, _asn_ctx),
	asn_MAP_HandoverPreparationInformation_r8_IEs_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_HandoverPreparationInformation_r8_IEs_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_HandoverPreparationInformation_r8_IEs = {
	"HandoverPreparationInformation-r8-IEs",
	"HandoverPreparationInformation-r8-IEs",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_HandoverPreparationInformation_r8_IEs_tags_1,
	sizeof(asn_DEF_HandoverPreparationInformation_r8_IEs_tags_1)
		/sizeof(asn_DEF_HandoverPreparationInformation_r8_IEs_tags_1[0]), /* 1 */
	asn_DEF_HandoverPreparationInformation_r8_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_HandoverPreparationInformation_r8_IEs_tags_1)
		/sizeof(asn_DEF_HandoverPreparationInformation_r8_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_HandoverPreparationInformation_r8_IEs_1,
	5,	/* Elements count */
	&asn_SPC_HandoverPreparationInformation_r8_IEs_specs_1	/* Additional specs */
};

