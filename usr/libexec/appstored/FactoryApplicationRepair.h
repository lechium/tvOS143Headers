//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMSURLProtocolDelegate-Protocol.h"
#import "ASDBagConsumer-Protocol.h"
#import "ApplicationRepair-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"

@class ApplicationProxy, NSArray, NSString, UnfairLock;
@protocol AMSBagProtocol, ApplicationRepairDelegate;

@interface FactoryApplicationRepair : NSObject <NSURLSessionDelegate, AMSURLProtocolDelegate, ApplicationRepair, ASDBagConsumer>
{
    ApplicationProxy *_application;	// 8 = 0x8
    id <AMSBagProtocol> _bag;	// 16 = 0x10
    UnfairLock *_lock;	// 24 = 0x18
    NSString *_logUUID;	// 32 = 0x20
    _Bool _establishesActiveAccount;	// 40 = 0x28
    _Bool _ignoresPreviousClaimAttempts;	// 41 = 0x29
    id <ApplicationRepairDelegate> _delegate;	// 48 = 0x30
    NSArray *_repairedBundleIDs;	// 56 = 0x38
}

+ (void)_setClaimBuildVersion:(id)arg1 forAccount:(id)arg2;	// IMP=0x00000001002ad628
+ (id)_requestParametersWithAccount:(id)arg1 unclaimedApps:(id)arg2 logUUID:(id)arg3;	// IMP=0x00000001002ad46c
+ (id)_lastClaimBuildVersionWithAccount:(id)arg1;	// IMP=0x00000001002ad0c0
+ (_Bool)_isFactoryInstallAppProxy:(id)arg1 logUUID:(id)arg2;	// IMP=0x00000001002ac928
+ (id)_copyUnclaimedApplicationsWithLogUUID:(id)arg1;	// IMP=0x00000001002ac4fc
+ (void)addRequiredBagKeysToAggregator:(id)arg1;	// IMP=0x00000001002abe4c
+ (id)bagKeySet;	// IMP=0x00000001002abd68
+ (_Bool)shouldAttemptToRepairApplication:(id)arg1 options:(id)arg2 logUUID:(id)arg3;	// IMP=0x00000001002ab054
- (void).cxx_destruct;	// IMP=0x00000001002ae940
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001002ae748
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001002ae4a0
- (id)_updateAppsUsingResponseDictionary:(id)arg1 account:(id)arg2;	// IMP=0x00000001002ad728
- (id)_performClaimForAccount:(id)arg1 unclaimedApplications:(id)arg2 error:(id *)arg3;	// IMP=0x00000001002ad1dc
- (id)_attemptAuthenticationWithRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00000001002abf30
- (_Bool)repairApplication:(id)arg1 error:(id *)arg2;	// IMP=0x00000001002ab188
- (void)setRepairedBundleIDs:(id)arg1;	// IMP=0x00000001002aaf98
@property(readonly, nonatomic) NSArray *repairedBundleIDs; // @synthesize repairedBundleIDs=_repairedBundleIDs;
@property(retain, nonatomic) NSString *logUUID; // @synthesize logUUID=_logUUID;
@property(nonatomic) __weak id <ApplicationRepairDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool ignoresPreviousClaimAttempts; // @synthesize ignoresPreviousClaimAttempts=_ignoresPreviousClaimAttempts;
@property(nonatomic) _Bool establishesActiveAccount; // @synthesize establishesActiveAccount=_establishesActiveAccount;
- (id)initWithApplication:(id)arg1;	// IMP=0x00000001002aa824
- (id)init;	// IMP=0x00000001002aa78c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
