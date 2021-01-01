/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct _NSZone* NSZoneRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	float field4;
	float field5;
	CGPoint field6;
	unsigned field7;
	void field8;
} SCD_Struct_AX2;

typedef struct {
	int field1;
	unsigned short field2;
	unsigned short field3;
	float field4;
	float field5;
	float field6;
	float field7;
	float field8;
	float field9;
	unsigned char field10;
	unsigned char field11;
	unsigned char field12;
	SCD_Struct_AX2 field13[0];
} SCD_Struct_AX3;

typedef struct {
	unsigned val[8];
} SCD_Struct_AX4;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct __IOHIDEventSystemClient* IOHIDEventSystemClientRef;

typedef struct __IOHIDEvent* IOHIDEventRef;

typedef struct {
	int field1;
	int field2;
	CGPoint field3;
	CGPoint field4;
	unsigned field5;
	unsigned long long field6;
	void field7;
	int field8;
	int field9;
	unsigned field10;
	unsigned long long field11;
	unsigned char field12[0];
} SCD_Struct_AX8;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct {
	unsigned field1[2];
} SCD_Struct_AX10;

typedef struct __CFMachPort* CFMachPortRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __IOHIDManager* IOHIDManagerRef;

typedef struct __IOHIDDevice* IOHIDDeviceRef;

typedef struct objc_method* objc_methodRef;

typedef struct CGPath* CGPathRef;

typedef struct __IOHIDValue* IOHIDValueRef;

typedef struct {
	int field1;
	float field2;
} SCD_Struct_AX18;

typedef struct __GSKeyboard* GSKeyboardRef;

typedef struct __IOHIDServiceClient* IOHIDServiceClientRef;

typedef struct __GSEvent* GSEventRef;

typedef struct __CFString* CFStringRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct AXEventDataStorage {
	long long eventSenderIdentifier;
} AXEventDataStorage;

typedef struct AXLogColorTheme {
	long long errorColor;
	long long warningColor;
	long long infoColor;
	long long debugColor;
} AXLogColorTheme;

