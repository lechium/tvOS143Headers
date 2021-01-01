//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AsyncTask.h"

#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSOrderedSet, NSString, NSURL, NSURLSession, XPCRequestToken;

@interface UPPManifestDownloadTask : AsyncTask <NSURLSessionTaskDelegate>
{
    NSOrderedSet *_downloadIDs;	// 8 = 0x8
    NSURL *_manifestURL;	// 16 = 0x10
    NSString *_receivedDigest;	// 24 = 0x18
    NSURLSession *_session;	// 32 = 0x20
    _Bool _shouldHideUserPrompts;	// 40 = 0x28
    NSString *_clientID;	// 48 = 0x30
    NSString *_manifestDigest;	// 56 = 0x38
    XPCRequestToken *_requestToken;	// 64 = 0x40
}

+ (id)_newPackageForExternalAssets:(id)arg1 withVariantDescriptor:(id)arg2;	// IMP=0x000000010012743c
+ (id)_newInstallForItem:(id)arg1 manifestURL:(id)arg2 manifestDigest:(id)arg3 withError:(id *)arg4;	// IMP=0x0000000100126934
+ (_Bool)_isSupportedPlatformIdentifier:(id)arg1;	// IMP=0x0000000100126918
+ (id)_enterpriseInstallationURL:(id)arg1 withDigest:(id)arg2;	// IMP=0x0000000100126708
+ (_Bool)_enterpriseInstallationAllowedForBundleID:(id)arg1 withName:(id)arg2 error:(id *)arg3;	// IMP=0x00000001001264e8
+ (id)_determineCanonicalAssetsForExternalItem:(id)arg1 matchedVariantDescriptor:(id *)arg2;	// IMP=0x0000000100125e08
+ (id)_createCoordinatorForInstall:(id)arg1;	// IMP=0x000000010012586c
- (void).cxx_destruct;	// IMP=0x0000000100129b94
@property _Bool shouldHideUserPrompts; // @synthesize shouldHideUserPrompts=_shouldHideUserPrompts;
@property(retain) XPCRequestToken *requestToken; // @synthesize requestToken=_requestToken;
@property(retain) NSString *manifestDigest; // @synthesize manifestDigest=_manifestDigest;
@property(retain) NSString *clientID; // @synthesize clientID=_clientID;
- (void)_showError:(id)arg1;	// IMP=0x0000000100129a08
- (_Bool)_showConfirmationPromptForInstalls:(id)arg1 response:(id)arg2;	// IMP=0x0000000100129568
- (_Bool)_promptToUnlockDeviceByOpeningSpringBoard;	// IMP=0x0000000100129360
- (void)_runWithURLRequest:(id)arg1;	// IMP=0x0000000100128ff0
- (void)_requestManifestInstallationOnActivePairedWatch;	// IMP=0x0000000100128fec
- (_Bool)_isSecureURL:(id)arg1;	// IMP=0x0000000100128f64
- (_Bool)_isExternalURL:(id)arg1;	// IMP=0x0000000100128dc4
- (id)_importInstalls:(id)arg1;	// IMP=0x0000000100128614
- (void)_handleResponse:(id)arg1 withData:(id)arg2;	// IMP=0x0000000100128084
- (id)_newInstallsForUPPManifest:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000100127ac0
- (void)main;	// IMP=0x00000001001254e0
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100124de0
- (id)initWithManifestURL:(id)arg1 requestToken:(id)arg2 shouldHideUserPrompts:(_Bool)arg3;	// IMP=0x0000000100124d40
- (id)initWithManifestURL:(id)arg1;	// IMP=0x0000000100124c84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
