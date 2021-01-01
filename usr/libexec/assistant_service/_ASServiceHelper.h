//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFInvalidating-Protocol.h"
#import "AFServiceHelper-Protocol.h"

@class AFCommandExecutionInfo, ASServiceClient, NSDictionary, NSString;

@interface _ASServiceHelper : NSObject <AFServiceHelper, AFInvalidating>
{
    NSString *_commandClassName;	// 8 = 0x8
    NSDictionary *_commandInfoDictionary;	// 16 = 0x10
    AFCommandExecutionInfo *_commandExecutionInfo;	// 24 = 0x18
    _Bool _isInvalid;	// 32 = 0x20
    ASServiceClient *_serviceClient;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100009320
- (id)_synchronousProviderServiceDelegateWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100009224
- (id)_providerServiceDelegateWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100009128
- (id)peerInfoForCurrentCommand;	// IMP=0x00000001000090c0
- (_Bool)isTimeoutSuspended;	// IMP=0x0000000100008f60
- (void)fetchContextsForKeys:(id)arg1 includesNearbyDevices:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008dc4
- (void)prepareForAudioHandoffWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100008b50
- (void)prepareForAudioHandoffFailedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100008910
- (void)handleCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000853c
- (_Bool)isDeviceInStarkMode;	// IMP=0x00000001000083dc
- (_Bool)isDeviceInCarDND;	// IMP=0x000000010000827c
- (_Bool)isDeviceLockedWithPasscode;	// IMP=0x000000010000811c
- (id)assistantLocalizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3;	// IMP=0x0000000100008058
- (void)dismissAssistant;	// IMP=0x0000000100007fd4
- (_Bool)openSensitiveURL:(id)arg1;	// IMP=0x0000000100007d20
- (void)invalidate;	// IMP=0x0000000100007c5c
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000100007b34
- (id)initWithCommandClassName:(id)arg1 infoDictionary:(id)arg2 executionInfo:(id)arg3 serviceClient:(id)arg4;	// IMP=0x00000001000079e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
