/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MSDKManagedDeviceDelegate, OS_xpc_object;
@class NSObject, NSMutableDictionary;

@interface MSDKManagedDevice : NSObject {

	id<MSDKManagedDeviceDelegate> _delegate;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_xpc_object> _helperConnection;
	NSMutableDictionary* _xpc_cache;

}

@property (retain) NSObject*<OS_xpc_object> connection;                                  //@synthesize connection=_connection - In the implementation block
@property (retain) NSObject*<OS_xpc_object> helperConnection;                            //@synthesize helperConnection=_helperConnection - In the implementation block
@property (retain) NSMutableDictionary * xpc_cache;                                      //@synthesize xpc_cache=_xpc_cache - In the implementation block
@property (assign,nonatomic,__weak) id<MSDKManagedDeviceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id<MSDKManagedDeviceDelegate>)delegate;
-(void)setDelegate:(id<MSDKManagedDeviceDelegate>)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)handleMessage:(id)arg1 ;
-(BOOL)prepare;
-(BOOL)cancelOperation;
-(BOOL)setupConnection;
-(NSObject*<OS_xpc_object>)helperConnection;
-(void)setHelperConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setXpc_cache:(NSMutableDictionary *)arg1 ;
-(BOOL)isDeviceClassSupported;
-(NSMutableDictionary *)xpc_cache;
-(int)readDemoMode;
-(id)getCacheIdentifier;
-(BOOL)setupConnection:(id)arg1 withMachService:(id)arg2 ;
-(void)handleContentUpdateStatus:(const char*)arg1 event:(id)arg2 ;
-(id)errorWithXPCDictionary:(id)arg1 ;
-(BOOL)prepareWithWiFi:(id)arg1 password:(id)arg2 ;
-(BOOL)isEnrolled;
-(BOOL)isContentFrozen_xpc;
-(unsigned long long)typeOfDemoDevice;
-(long long)getDemoInstallState;
-(BOOL)isContentFrozen;
-(BOOL)lockDemoContent;
-(BOOL)unlockDemoContent;
-(BOOL)revertDemoContent;
-(BOOL)commitNewDemoContent;
-(BOOL)unenroll:(BOOL)arg1 ;
-(id)getDeviceOptions;
-(id)getStoreID;
-(id)getFriendlyDeviceName;
-(BOOL)configureWiFi:(id)arg1 password:(id)arg2 ;
-(BOOL)checkInBlockingUI;
-(BOOL)storeDataBlob:(id)arg1 ;
-(id)retrieveDataBlob;
-(BOOL)deleteDataBlob;
-(id)getPersistentWiFiSsid;
-(BOOL)needOwnershipWarning:(id*)arg1 ;
-(BOOL)clearOwnershipWarning;
-(BOOL)setupHelperConnection;
-(id)readNVRam:(id)arg1 ;
@end

