//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASCJSClientObjectExports-Protocol.h"

@class ACAccount, ACAccountStore, NSString;

@interface ASCJSClientObject : NSObject <ASCJSClientObjectExports>
{
    ACAccountStore *_accountStore;	// 8 = 0x8
    ACAccount *_activeiTunesAccount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010001cce0
@property(retain) ACAccount *activeiTunesAccount; // @synthesize activeiTunesAccount=_activeiTunesAccount;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (_Bool)isAutomaticDownloadingEnabled;	// IMP=0x000000010001cc44
- (_Bool)deletableSystemAppCanBeInstalledOnWatchWithBundleID:(id)arg1;	// IMP=0x000000010001cc3c
- (id)isPairedSystemVersionAtLeast:(id)arg1;	// IMP=0x000000010001cb90
- (_Bool)isActivePairedWatchSystemVersionAtLeastMajorVersion:(id)arg1 minorVersion:(id)arg2 patchVersion:(id)arg3;	// IMP=0x000000010001cb88
- (_Bool)deviceHasCapabilities:(id)arg1;	// IMP=0x000000010001cb68
@property(readonly) _Bool supportsHEIF;
@property(readonly) _Bool isTinkerWatch;
@property(readonly) _Bool isSidepackingEnabled;
@property(readonly) _Bool isElectrocardiogramInstallationAllowed;
@property(readonly) _Bool isActivityAvailable;
@property(readonly) NSString *buildType;
@property(readonly) NSString *deviceType;
@property(readonly) _Bool newPaymentMethodEnabled;
@property(readonly, copy) NSString *storefrontIdentifier;
@property(readonly, copy) NSString *guid;
@property(readonly) double screenCornerRadius;
@property(readonly) struct CGSize screenSize;
@property(readonly, copy) NSString *activePairedWatchSystemVersion;
@property(readonly, copy) NSString *thinnedApplicationVariantIdentifier;
- (void)accountStoreDidChange:(id)arg1;	// IMP=0x000000010001c908
- (void)dealloc;	// IMP=0x000000010001c890
- (id)initWithAccountStore:(id)arg1;	// IMP=0x000000010001c7a0

@end
