/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct _NSZone* NSZoneRef;

typedef struct CC_SHA256state_st {
	unsigned count[2];
	unsigned hash[8];
	unsigned wbuf[16];
} CC_SHA256state_st;

typedef struct CC_SHA512state_st {
	unsigned long long count[2];
	unsigned long long hash[8];
	unsigned long long wbuf[16];
} CC_SHA512state_st;

typedef struct {
	unsigned type : 1;
} SCD_Struct_TP3;

typedef struct {
	unsigned candidateEpoch : 1;
	unsigned myEpoch : 1;
} SCD_Struct_TP4;

typedef struct {
	unsigned clock : 1;
	unsigned flexiblePolicyVersion : 1;
	unsigned frozenPolicyVersion : 1;
	unsigned userControllableViewStatus : 1;
} SCD_Struct_TP5;

