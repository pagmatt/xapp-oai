/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "/home/rshacham/e2sm-kpm-v01.02.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_SlicePerPlmnPerCellListItem_H_
#define	_SlicePerPlmnPerCellListItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SNSSAI.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FQIPERSlicesPerPlmnPerCellListItem;

/* SlicePerPlmnPerCellListItem */
typedef struct SlicePerPlmnPerCellListItem {
	SNSSAI_t	 sliceID;
	struct SlicePerPlmnPerCellListItem__fQIPERSlicesPerPlmnPerCellList {
		A_SEQUENCE_OF(struct FQIPERSlicesPerPlmnPerCellListItem) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} fQIPERSlicesPerPlmnPerCellList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SlicePerPlmnPerCellListItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SlicePerPlmnPerCellListItem;
extern asn_SEQUENCE_specifics_t asn_SPC_SlicePerPlmnPerCellListItem_specs_1;
extern asn_TYPE_member_t asn_MBR_SlicePerPlmnPerCellListItem_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FQIPERSlicesPerPlmnPerCellListItem.h"

#endif	/* _SlicePerPlmnPerCellListItem_H_ */
#include <asn_internal.h>
