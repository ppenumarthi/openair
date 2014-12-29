/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/openAir/rel_0.1_26.10.2014/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "SystemInformationBlockType8.h"

static int
memb_longCodeState1XRTT_constraint_7(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 42)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_searchWindowSize_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_longCodeState1XRTT_constr_9 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  42,  42 }	/* (SIZE(42..42)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_searchWindowSize_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_parametersHRPD_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType8__parametersHRPD, preRegistrationInfoHRPD),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PreRegistrationInfoHRPD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"preRegistrationInfoHRPD"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType8__parametersHRPD, cellReselectionParametersHRPD),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellReselectionParametersCDMA2000,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellReselectionParametersHRPD"
		},
};
static int asn_MAP_parametersHRPD_oms_4[] = { 1 };
static ber_tlv_tag_t asn_DEF_parametersHRPD_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_parametersHRPD_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* preRegistrationInfoHRPD at 1012 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cellReselectionParametersHRPD at 1013 */
};
static asn_SEQUENCE_specifics_t asn_SPC_parametersHRPD_specs_4 = {
	sizeof(struct SystemInformationBlockType8__parametersHRPD),
	offsetof(struct SystemInformationBlockType8__parametersHRPD, _asn_ctx),
	asn_MAP_parametersHRPD_tag2el_4,
	2,	/* Count of tags in the map */
	asn_MAP_parametersHRPD_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_parametersHRPD_4 = {
	"parametersHRPD",
	"parametersHRPD",
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
	asn_DEF_parametersHRPD_tags_4,
	sizeof(asn_DEF_parametersHRPD_tags_4)
		/sizeof(asn_DEF_parametersHRPD_tags_4[0]) - 1, /* 1 */
	asn_DEF_parametersHRPD_tags_4,	/* Same as above */
	sizeof(asn_DEF_parametersHRPD_tags_4)
		/sizeof(asn_DEF_parametersHRPD_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_parametersHRPD_4,
	2,	/* Elements count */
	&asn_SPC_parametersHRPD_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_parameters1XRTT_7[] = {
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType8__parameters1XRTT, csfb_RegistrationParam1XRTT),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSFB_RegistrationParam1XRTT,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"csfb-RegistrationParam1XRTT"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType8__parameters1XRTT, longCodeState1XRTT),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_longCodeState1XRTT_constraint_7,
		&asn_PER_memb_longCodeState1XRTT_constr_9,
		0,
		"longCodeState1XRTT"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType8__parameters1XRTT, cellReselectionParameters1XRTT),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellReselectionParametersCDMA2000,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellReselectionParameters1XRTT"
		},
};
static int asn_MAP_parameters1XRTT_oms_7[] = { 0, 1, 2 };
static ber_tlv_tag_t asn_DEF_parameters1XRTT_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_parameters1XRTT_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* csfb-RegistrationParam1XRTT at 1016 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* longCodeState1XRTT at 1017 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cellReselectionParameters1XRTT at 1018 */
};
static asn_SEQUENCE_specifics_t asn_SPC_parameters1XRTT_specs_7 = {
	sizeof(struct SystemInformationBlockType8__parameters1XRTT),
	offsetof(struct SystemInformationBlockType8__parameters1XRTT, _asn_ctx),
	asn_MAP_parameters1XRTT_tag2el_7,
	3,	/* Count of tags in the map */
	asn_MAP_parameters1XRTT_oms_7,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_parameters1XRTT_7 = {
	"parameters1XRTT",
	"parameters1XRTT",
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
	asn_DEF_parameters1XRTT_tags_7,
	sizeof(asn_DEF_parameters1XRTT_tags_7)
		/sizeof(asn_DEF_parameters1XRTT_tags_7[0]) - 1, /* 1 */
	asn_DEF_parameters1XRTT_tags_7,	/* Same as above */
	sizeof(asn_DEF_parameters1XRTT_tags_7)
		/sizeof(asn_DEF_parameters1XRTT_tags_7[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_parameters1XRTT_7,
	3,	/* Elements count */
	&asn_SPC_parameters1XRTT_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SystemInformationBlockType8_1[] = {
	{ ATF_POINTER, 4, offsetof(struct SystemInformationBlockType8, systemTimeInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemTimeInfoCDMA2000,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"systemTimeInfo"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType8, searchWindowSize),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_searchWindowSize_constraint_1,
		&asn_PER_memb_searchWindowSize_constr_3,
		0,
		"searchWindowSize"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType8, parametersHRPD),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_parametersHRPD_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"parametersHRPD"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType8, parameters1XRTT),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_parameters1XRTT_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"parameters1XRTT"
		},
};
static int asn_MAP_SystemInformationBlockType8_oms_1[] = { 0, 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_SystemInformationBlockType8_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType8_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* systemTimeInfo at 1009 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* searchWindowSize at 1010 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* parametersHRPD at 1012 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* parameters1XRTT at 1016 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType8_specs_1 = {
	sizeof(struct SystemInformationBlockType8),
	offsetof(struct SystemInformationBlockType8, _asn_ctx),
	asn_MAP_SystemInformationBlockType8_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType8_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	3,	/* Start extensions */
	5	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType8 = {
	"SystemInformationBlockType8",
	"SystemInformationBlockType8",
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
	asn_DEF_SystemInformationBlockType8_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType8_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType8_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType8_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType8_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType8_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SystemInformationBlockType8_1,
	4,	/* Elements count */
	&asn_SPC_SystemInformationBlockType8_specs_1	/* Additional specs */
};

