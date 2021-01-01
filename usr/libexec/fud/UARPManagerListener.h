//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "UARPXPCProvider-Protocol.h"

@class NSString, NSXPCListener, UARPManager;
@protocol OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface UARPManagerListener : NSObject <NSXPCListenerDelegate, UARPXPCProvider>
{
    UARPManager *_manager;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
    NSObject<OS_os_log> *_xpcLog;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_internalQueue;	// 32 = 0x20
}

- (void)getAssetIDForAccessoryID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010002219c
- (void)updateProperty:(unsigned long long)arg1 value:(id)arg2 forAccessory:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100022130
- (void)sendUpdateFirmwareAnalyticsEventForAccessoryID:(id)arg1 assetID:(id)arg2 params:(id)arg3;	// IMP=0x0000000100022044
- (void)manifestPropertiesReceivedForAccessoryID:(id)arg1 assetTag:(unsigned int)arg2 properties:(id)arg3;	// IMP=0x0000000100021f4c
- (void)personalizationVectorForAccessoryID:(id)arg1 assetTag:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100021dec
- (void)checkForUpdate:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100021cd8
- (void)personalizeFirmwareForAccessoryID:(id)arg1 personalizationRequest:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100021cd4
- (void)firmwareUpdateProgressForAccessoryID:(id)arg1 assetID:(id)arg2 bytesSent:(unsigned long long)arg3 bytesTotal:(unsigned long long)arg4;	// IMP=0x0000000100021bcc
- (void)downloadReleaseNotesForAccessoryID:(id)arg1 assetID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100021aa0
- (void)downloadFirmwareForAccessoryID:(id)arg1 assetID:(id)arg2 userIntent:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010002194c
- (void)changeAssetLocation:(id)arg1 assetID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100021820
- (void)removeAccessoryID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010002170c
- (void)addAccessoryID:(id)arg1 assetID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000215e0
- (_Bool)xpcConnectionHasEntitlement:(id)arg1;	// IMP=0x000000010002153c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001000211e8
- (void)dealloc;	// IMP=0x0000000100021188
- (id)initWithManager:(id)arg1 dispatchQueue:(id)arg2;	// IMP=0x00000001000210cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

