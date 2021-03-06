//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSUUID;

@interface MSDResolveService : NSObject
{
    NSUUID *_homeUserUUID;	// 8 = 0x8
    NSString *_homeID;	// 16 = 0x10
    NSUUID *_homeUUID;	// 24 = 0x18
    NSArray *_usersInHome;	// 32 = 0x20
    NSString *_serviceBundleID;	// 40 = 0x28
    NSString *_homeUserID;	// 48 = 0x30
}

+ (void)getNowPlayingServiceInfoAndUser:(CDUnknownBlockType)arg1;	// IMP=0x000000010000630c
- (void).cxx_destruct;	// IMP=0x0000000100006a14
@property(copy, nonatomic) NSString *homeUserID; // @synthesize homeUserID=_homeUserID;
@property(copy, nonatomic) NSString *serviceBundleID; // @synthesize serviceBundleID=_serviceBundleID;
- (_Bool)defaultAccountUserBelongsInHome:(id)arg1;	// IMP=0x0000000100006078
- (_Bool)_getUseInHomeSettingForUser:(id)arg1;	// IMP=0x0000000100005e5c
- (id)_getHomeOwnerInfo;	// IMP=0x0000000100005c50
- (_Bool)_checkValidityOfService:(id)arg1;	// IMP=0x0000000100005a44
- (id)_getServiceAccountInfoForDefaultService:(id)arg1 servicesConfigured:(id)arg2;	// IMP=0x00000001000056d4
- (void)_resolveAccountForRemainingHomeUsers:(id)arg1 servicesConfigured:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100004b78
- (void)_resolveServiceForPrimaryUser:(id)arg1 servicesConfigured:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000486c
- (void)_resolveServiceForDefaultAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004390
- (void)_resolveAccountForUnspecifiedService:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004084
- (void)_resolveUnrecognizedUserServiceUnspecified:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004034
- (void)_resolveRecognizedUserServiceUnspecified:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100003da0
- (void)_resolveAccountForMemberAccountWithService:(id)arg1 homeUserIDS:(id)arg2 servicesConfigured:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100003794
- (void)_resolveAccountForSpecifiedService:(id)arg1 servicesConfigured:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100003420
- (void)_resolveUnrecognizedUserServiceSpecified:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000307c
- (void)_resolveRecognizedUserServiceSpecified:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100002bd8
- (void)performResolution:(CDUnknownBlockType)arg1;	// IMP=0x00000001000028ac
- (id)initWithBundleID:(id)arg1 homeUserID:(id)arg2;	// IMP=0x00000001000024c8

@end

