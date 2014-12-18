/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#include "S1ap-UESecurityCapabilities.h"

static asn_TYPE_member_t asn_MBR_S1ap_UESecurityCapabilities_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_UESecurityCapabilities, encryptionAlgorithms),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_EncryptionAlgorithms,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"encryptionAlgorithms"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_UESecurityCapabilities, integrityProtectionAlgorithms),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_IntegrityProtectionAlgorithms,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"integrityProtectionAlgorithms"
		},
	{ ATF_POINTER, 1, offsetof(struct S1ap_UESecurityCapabilities, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_IE_Extensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static int asn_MAP_S1ap_UESecurityCapabilities_oms_1[] = { 2 };
static ber_tlv_tag_t asn_DEF_S1ap_UESecurityCapabilities_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_S1ap_UESecurityCapabilities_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* encryptionAlgorithms at 1371 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* integrityProtectionAlgorithms at 1372 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions at 1374 */
};
static asn_SEQUENCE_specifics_t asn_SPC_S1ap_UESecurityCapabilities_specs_1 = {
	sizeof(struct S1ap_UESecurityCapabilities),
	offsetof(struct S1ap_UESecurityCapabilities, _asn_ctx),
	asn_MAP_S1ap_UESecurityCapabilities_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_S1ap_UESecurityCapabilities_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_UESecurityCapabilities = {
	"S1ap-UESecurityCapabilities",
	"S1ap-UESecurityCapabilities",
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
	asn_DEF_S1ap_UESecurityCapabilities_tags_1,
	sizeof(asn_DEF_S1ap_UESecurityCapabilities_tags_1)
		/sizeof(asn_DEF_S1ap_UESecurityCapabilities_tags_1[0]), /* 1 */
	asn_DEF_S1ap_UESecurityCapabilities_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_UESecurityCapabilities_tags_1)
		/sizeof(asn_DEF_S1ap_UESecurityCapabilities_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_S1ap_UESecurityCapabilities_1,
	3,	/* Elements count */
	&asn_SPC_S1ap_UESecurityCapabilities_specs_1	/* Additional specs */
};

