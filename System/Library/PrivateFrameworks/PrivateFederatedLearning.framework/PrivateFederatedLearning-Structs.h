/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSOutputStream, NSData, NSString, GPBMessage, GPBEnumDescriptor;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned clippingNormMax : 1;
	unsigned normBinCount : 1;
} SCD_Struct_PF1;

typedef struct {
	unsigned accuracy : 1;
	unsigned flattenedPrivatizedWeightCount : 1;
	unsigned loss : 1;
	unsigned modelVersion : 1;
} SCD_Struct_PF2;

typedef struct {
	unsigned epochs : 1;
	unsigned learningRate : 1;
	unsigned validationSplit : 1;
} SCD_Struct_PF3;

typedef struct {
	unsigned success : 1;
} SCD_Struct_PF4;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct GPBOutputBufferState {
	char* bytes;
	unsigned long long size;
	unsigned long long position;
	NSOutputStream* output;
} GPBOutputBufferState;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_GP7;

typedef union {
	BOOL valueBool;
	int valueInt32;
	long long valueInt64;
	unsigned valueUInt32;
	unsigned long long valueUInt64;
	float valueFloat;
	double valueDouble;
	NSData* valueData;
	NSString* valueString;
	GPBMessage* valueMessage;
	int valueEnum;
} SCD_Union_GP8;

typedef union {
	GPBEnumDescriptor* enumDescriptor_;
	/*function pointer*/void* enumVerifier_;
} SCD_Union_GP9;

typedef struct GPBCodedInputStreamState {
	char* bytes;
	unsigned long long bufferSize;
	unsigned long long bufferPos;
	unsigned long long currentLimit;
	int lastTag;
	unsigned long long recursionDepth;
} GPBCodedInputStreamState;

