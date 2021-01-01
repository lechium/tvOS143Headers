/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct _NSZone* NSZoneRef;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_IP1;

typedef struct {
	SCD_Struct_IP1 start;
	SCD_Struct_IP1 duration;
} SCD_Struct_IP2;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_IP6;

typedef struct PFIntSize_st {
	unsigned long long width;
	unsigned long long height;
} PFIntSize_st;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct CGImageMetadata* CGImageMetadataRef;

typedef struct __CFString* CFStringRef;

typedef struct Matrix4d {
	double m[16];
} Matrix4d;

typedef struct Vector2d {
	double X;
	double Y;
} Vector2d;

typedef struct Quad2d {
	Vector2d V0;
	Vector2d V1;
	Vector2d V2;
	Vector2d V3;
} Quad2d;

