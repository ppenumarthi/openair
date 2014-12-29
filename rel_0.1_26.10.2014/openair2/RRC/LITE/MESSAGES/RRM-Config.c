/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/openAir/rel_0.1_26.10.2014/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "RRM-Config.h"

static int
ue_InactiveTime_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
ue_InactiveTime_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	td->aper_decoder   = asn_DEF_NativeEnumerated.aper_decoder;
	td->aper_encoder   = asn_DEF_NativeEnumerated.aper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
ue_InactiveTime_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	ue_InactiveTime_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
ue_InactiveTime_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	ue_InactiveTime_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
ue_InactiveTime_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	ue_InactiveTime_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
ue_InactiveTime_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ue_InactiveTime_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
ue_InactiveTime_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	ue_InactiveTime_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
ue_InactiveTime_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ue_InactiveTime_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
ue_InactiveTime_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	ue_InactiveTime_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
ue_InactiveTime_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	ue_InactiveTime_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
ue_InactiveTime_2_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	ue_InactiveTime_2_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
ue_InactiveTime_2_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	ue_InactiveTime_2_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_per_constraints_t asn_PER_type_ue_InactiveTime_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_ue_InactiveTime_value2enum_2[] = {
	{ 0,	2,	"s1" },
	{ 1,	2,	"s2" },
	{ 2,	2,	"s3" },
	{ 3,	2,	"s5" },
	{ 4,	2,	"s7" },
	{ 5,	3,	"s10" },
	{ 6,	3,	"s15" },
	{ 7,	3,	"s20" },
	{ 8,	3,	"s25" },
	{ 9,	3,	"s30" },
	{ 10,	3,	"s40" },
	{ 11,	3,	"s50" },
	{ 12,	4,	"min1" },
	{ 13,	8,	"min1s20c" },
	{ 14,	7,	"min1s40" },
	{ 15,	4,	"min2" },
	{ 16,	7,	"min2s30" },
	{ 17,	4,	"min3" },
	{ 18,	7,	"min3s30" },
	{ 19,	4,	"min4" },
	{ 20,	4,	"min5" },
	{ 21,	4,	"min6" },
	{ 22,	4,	"min7" },
	{ 23,	4,	"min8" },
	{ 24,	4,	"min9" },
	{ 25,	5,	"min10" },
	{ 26,	5,	"min12" },
	{ 27,	5,	"min14" },
	{ 28,	5,	"min17" },
	{ 29,	5,	"min20" },
	{ 30,	5,	"min24" },
	{ 31,	5,	"min28" },
	{ 32,	5,	"min33" },
	{ 33,	5,	"min38" },
	{ 34,	5,	"min44" },
	{ 35,	5,	"min50" },
	{ 36,	3,	"hr1" },
	{ 37,	8,	"hr1min30" },
	{ 38,	3,	"hr2" },
	{ 39,	8,	"hr2min30" },
	{ 40,	3,	"hr3" },
	{ 41,	8,	"hr3min30" },
	{ 42,	3,	"hr4" },
	{ 43,	3,	"hr5" },
	{ 44,	3,	"hr6" },
	{ 45,	3,	"hr8" },
	{ 46,	4,	"hr10" },
	{ 47,	4,	"hr13" },
	{ 48,	4,	"hr16" },
	{ 49,	4,	"hr20" },
	{ 50,	4,	"day1" },
	{ 51,	8,	"day1hr12" },
	{ 52,	4,	"day2" },
	{ 53,	8,	"day2hr12" },
	{ 54,	4,	"day3" },
	{ 55,	4,	"day4" },
	{ 56,	4,	"day5" },
	{ 57,	4,	"day7" },
	{ 58,	5,	"day10" },
	{ 59,	5,	"day14" },
	{ 60,	5,	"day19" },
	{ 61,	5,	"day24" },
	{ 62,	5,	"day30" },
	{ 63,	13,	"dayMoreThan30" }
};
static unsigned int asn_MAP_ue_InactiveTime_enum2value_2[] = {
	50,	/* day1(50) */
	58,	/* day10(58) */
	59,	/* day14(59) */
	60,	/* day19(60) */
	51,	/* day1hr12(51) */
	52,	/* day2(52) */
	61,	/* day24(61) */
	53,	/* day2hr12(53) */
	54,	/* day3(54) */
	62,	/* day30(62) */
	55,	/* day4(55) */
	56,	/* day5(56) */
	57,	/* day7(57) */
	63,	/* dayMoreThan30(63) */
	36,	/* hr1(36) */
	46,	/* hr10(46) */
	47,	/* hr13(47) */
	48,	/* hr16(48) */
	37,	/* hr1min30(37) */
	38,	/* hr2(38) */
	49,	/* hr20(49) */
	39,	/* hr2min30(39) */
	40,	/* hr3(40) */
	41,	/* hr3min30(41) */
	42,	/* hr4(42) */
	43,	/* hr5(43) */
	44,	/* hr6(44) */
	45,	/* hr8(45) */
	12,	/* min1(12) */
	25,	/* min10(25) */
	26,	/* min12(26) */
	27,	/* min14(27) */
	28,	/* min17(28) */
	13,	/* min1s20c(13) */
	14,	/* min1s40(14) */
	15,	/* min2(15) */
	29,	/* min20(29) */
	30,	/* min24(30) */
	31,	/* min28(31) */
	16,	/* min2s30(16) */
	17,	/* min3(17) */
	32,	/* min33(32) */
	33,	/* min38(33) */
	18,	/* min3s30(18) */
	19,	/* min4(19) */
	34,	/* min44(34) */
	20,	/* min5(20) */
	35,	/* min50(35) */
	21,	/* min6(21) */
	22,	/* min7(22) */
	23,	/* min8(23) */
	24,	/* min9(24) */
	0,	/* s1(0) */
	5,	/* s10(5) */
	6,	/* s15(6) */
	1,	/* s2(1) */
	7,	/* s20(7) */
	8,	/* s25(8) */
	2,	/* s3(2) */
	9,	/* s30(9) */
	10,	/* s40(10) */
	3,	/* s5(3) */
	11,	/* s50(11) */
	4	/* s7(4) */
};
static asn_INTEGER_specifics_t asn_SPC_ue_InactiveTime_specs_2 = {
	asn_MAP_ue_InactiveTime_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_ue_InactiveTime_enum2value_2,	/* N => "tag"; sorted by N */
	64,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_ue_InactiveTime_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ue_InactiveTime_2 = {
	"ue-InactiveTime",
	"ue-InactiveTime",
	ue_InactiveTime_2_free,
	ue_InactiveTime_2_print,
	ue_InactiveTime_2_constraint,
	ue_InactiveTime_2_decode_ber,
	ue_InactiveTime_2_encode_der,
	ue_InactiveTime_2_decode_xer,
	ue_InactiveTime_2_encode_xer,
	ue_InactiveTime_2_decode_uper,
	ue_InactiveTime_2_encode_uper,
	ue_InactiveTime_2_decode_aper,
	ue_InactiveTime_2_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ue_InactiveTime_tags_2,
	sizeof(asn_DEF_ue_InactiveTime_tags_2)
		/sizeof(asn_DEF_ue_InactiveTime_tags_2[0]) - 1, /* 1 */
	asn_DEF_ue_InactiveTime_tags_2,	/* Same as above */
	sizeof(asn_DEF_ue_InactiveTime_tags_2)
		/sizeof(asn_DEF_ue_InactiveTime_tags_2[0]), /* 2 */
	&asn_PER_type_ue_InactiveTime_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ue_InactiveTime_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRM_Config_1[] = {
	{ ATF_POINTER, 1, offsetof(struct RRM_Config, ue_InactiveTime),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ue_InactiveTime_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-InactiveTime"
		},
};
static int asn_MAP_RRM_Config_oms_1[] = { 0 };
static ber_tlv_tag_t asn_DEF_RRM_Config_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RRM_Config_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* ue-InactiveTime at 2737 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRM_Config_specs_1 = {
	sizeof(struct RRM_Config),
	offsetof(struct RRM_Config, _asn_ctx),
	asn_MAP_RRM_Config_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_RRM_Config_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	0,	/* Start extensions */
	2	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RRM_Config = {
	"RRM-Config",
	"RRM-Config",
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
	asn_DEF_RRM_Config_tags_1,
	sizeof(asn_DEF_RRM_Config_tags_1)
		/sizeof(asn_DEF_RRM_Config_tags_1[0]), /* 1 */
	asn_DEF_RRM_Config_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRM_Config_tags_1)
		/sizeof(asn_DEF_RRM_Config_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RRM_Config_1,
	1,	/* Elements count */
	&asn_SPC_RRM_Config_specs_1	/* Additional specs */
};

