/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "/home/rshacham/e2sm-kpm-v01.02.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_DU_Usage_Report_CellResourceReportItem_H_
#define	_DU_Usage_Report_CellResourceReportItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NRCGI.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DU_Usage_Report_UeResourceReportItem;

/* DU-Usage-Report-CellResourceReportItem */
typedef struct DU_Usage_Report_CellResourceReportItem {
	NRCGI_t	 nRCGI;
	struct DU_Usage_Report_CellResourceReportItem__ueResourceReportList {
		A_SEQUENCE_OF(struct DU_Usage_Report_UeResourceReportItem) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ueResourceReportList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DU_Usage_Report_CellResourceReportItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DU_Usage_Report_CellResourceReportItem;
extern asn_SEQUENCE_specifics_t asn_SPC_DU_Usage_Report_CellResourceReportItem_specs_1;
extern asn_TYPE_member_t asn_MBR_DU_Usage_Report_CellResourceReportItem_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DU-Usage-Report-UeResourceReportItem.h"

#endif	/* _DU_Usage_Report_CellResourceReportItem_H_ */
#include <asn_internal.h>
