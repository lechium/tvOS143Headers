//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKClientProxy, GKDataTransport, GKPlayerCredential, GKPlayerInternal;

@interface GKService : NSObject
{
    GKClientProxy *_clientProxy;	// 8 = 0x8
    GKDataTransport *_transport;	// 16 = 0x10
    GKPlayerInternal *_localPlayer;	// 24 = 0x18
    GKPlayerCredential *_credential;	// 32 = 0x20
}

+ (Class)interfaceClass;	// IMP=0x000000010015ba08
+ (unsigned long long)requiredEntitlements;	// IMP=0x000000010015b8d0
+ (id)serviceForBundleID:(id)arg1 localPlayer:(id)arg2;	// IMP=0x000000010015b884
+ (id)serviceFromService:(id)arg1;	// IMP=0x000000010015b7e0
+ (id)serviceWithTransport:(id)arg1 forClient:(id)arg2 localPlayer:(id)arg3;	// IMP=0x000000010015b790
+ (id)serviceWithTransport:(id)arg1 forClient:(id)arg2 credential:(id)arg3;	// IMP=0x000000010015b728
@property(retain) GKPlayerCredential *credential; // @synthesize credential=_credential;
@property(retain) GKPlayerInternal *localPlayer; // @synthesize localPlayer=_localPlayer;
@property(retain) GKDataTransport *transport; // @synthesize transport=_transport;
@property(retain) GKClientProxy *clientProxy; // @synthesize clientProxy=_clientProxy;
- (id)transactionGroupForPlayerInternal:(id)arg1;	// IMP=0x000000010015bb40
- (id)transactionGroup;	// IMP=0x000000010015baf4
- (_Bool)requiresAuthenticationForSelector:(SEL)arg1;	// IMP=0x000000010015bae8
- (_Bool)requiresAuthentication;	// IMP=0x000000010015bae0
- (void)dealloc;	// IMP=0x000000010015b9a8
- (id)initWithTransport:(id)arg1 forClient:(id)arg2 localPlayer:(id)arg3 credential:(id)arg4;	// IMP=0x000000010015b590
- (id)initWithoutCredentialWithTransport:(id)arg1 forClient:(id)arg2;	// IMP=0x000000010015b518
- (void)_coreInitWithTransport:(id)arg1 forClient:(id)arg2 localPlayer:(id)arg3 credential:(id)arg4;	// IMP=0x000000010015b418

@end
