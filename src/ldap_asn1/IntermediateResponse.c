/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "Lightweight-Directory-Access-Protocol-V3"
 * 	found in "simple_ldap_asn1.asn"
 */

#include "IntermediateResponse.h"

static asn_TYPE_member_t asn_MBR_IntermediateResponse_1[] = {
	{ ATF_POINTER, 2, offsetof(struct IntermediateResponse, responseName),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ResponseName,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"responseName"
		},
	{ ATF_POINTER, 1, offsetof(struct IntermediateResponse, responseValue),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"responseValue"
		},
};
static ber_tlv_tag_t asn_DEF_IntermediateResponse_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (25 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_IntermediateResponse_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* responseName at 377 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* responseValue at 378 */
};
static asn_SEQUENCE_specifics_t asn_SPC_IntermediateResponse_specs_1 = {
	sizeof(struct IntermediateResponse),
	offsetof(struct IntermediateResponse, _asn_ctx),
	asn_MAP_IntermediateResponse_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_IntermediateResponse = {
	"IntermediateResponse",
	"IntermediateResponse",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_IntermediateResponse_tags_1,
	sizeof(asn_DEF_IntermediateResponse_tags_1)
		/sizeof(asn_DEF_IntermediateResponse_tags_1[0]) - 1, /* 1 */
	asn_DEF_IntermediateResponse_tags_1,	/* Same as above */
	sizeof(asn_DEF_IntermediateResponse_tags_1)
		/sizeof(asn_DEF_IntermediateResponse_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_IntermediateResponse_1,
	2,	/* Elements count */
	&asn_SPC_IntermediateResponse_specs_1	/* Additional specs */
};

