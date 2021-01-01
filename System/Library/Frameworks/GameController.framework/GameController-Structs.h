/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSObject<OS_xpc_object>;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __IOHIDServiceClient* IOHIDServiceClientRef;

typedef struct __IOHIDEvent* IOHIDEventRef;

typedef struct __IOHIDDevice* IOHIDDeviceRef;

typedef struct {
	int field1;
	int field2;
	int field3;
	int field4;
	int field5;
	int field6;
	int field7;
	int field8;
	int field9;
	int field10;
	int field11;
	int field12;
	int field13;
	int field14;
	int field15;
} SCD_Struct_GC4;

typedef struct {
	double x;
	double y;
	double z;
} SCD_Struct_GC5;

typedef struct GCQuaternion {
	double x;
	double y;
	double z;
	double w;
} GCQuaternion;

typedef struct __IOHIDEventSystemClient* IOHIDEventSystemClientRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct __IOHIDManager* IOHIDManagerRef;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct _NSZone* NSZoneRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct {
	int field1;
	BOOL field2;
	float field3;
} SCD_Struct_GC14;

typedef struct {
	int field1;
	int field2;
	int field3;
	int field4;
} SCD_Struct_GC15;

typedef struct {
	id field1;
	BOOL field2;
	BOOL( field3;
	/*function pointer*/void* field4;
	= field5;
	SCD_Struct_GC14 field6;
	SCD_Struct_GC15) field7;
	int field8;
	BOOL field9;
	BOOL field10;
	BOOL field11;
	id field12;
	id field13;
} SCD_Struct_GC16;

typedef struct {
	SCD_Struct_GC16 field1[16];
	BOOL field2;
	BOOL field3;
} SCD_Struct_GC17;

typedef struct {
	unsigned long long mask;
	float buttons[41];
} SCD_Struct_GC18;

typedef struct BTSessionImpl* BTSessionImplRef;

typedef struct BTPairingAgentImpl* BTPairingAgentImplRef;

typedef struct BTDiscoveryAgentImpl* BTDiscoveryAgentImplRef;

typedef struct UsagePage_Usage_Pair {
	long long usagePage;
	long long usage;
} UsagePage_Usage_Pair;

typedef struct {
	unsigned val[8];
} SCD_Struct_GC23;

typedef struct HapticSharedMemory {
	/*function pointer*/void* _vptr$SharableMemoryBase;
	BOOL mIsOwner;
	BOOL mWasMapped;
	unsigned long long mSize;
	void mBuffer;
	unsigned mPort;
	int mFileDesc;
	int mSerial;
	NSObject<OS_xpc_object>* mXPCObject;
} HapticSharedMemory;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

