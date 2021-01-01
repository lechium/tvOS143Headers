//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKFriendPlayerInternal.h"

@class NSArray, NSNumber, NSString;

@interface GKLocalPlayerInternal : GKFriendPlayerInternal
{
    NSString *_accountName;	// 232 = 0xe8
    NSArray *_emailAddresses;	// 240 = 0xf0
    NSString *_facebookUserID;	// 248 = 0xf8
    NSNumber *_iCloudUserID;	// 256 = 0x100
    unsigned short _numberOfRequests;	// 264 = 0x108
    unsigned short _numberOfTurns;	// 266 = 0x10a
    unsigned short _numberOfChallenges;	// 268 = 0x10c
    unsigned long long _loginStatus;	// 272 = 0x110
}

+ (id)secureCodedPropertyKeys;	// IMP=0x00000001001311e8
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100131160
+ (id)propertiesToFetch;	// IMP=0x0000000100143084
+ (id)archivedProfileForEnvironment:(long long)arg1;	// IMP=0x000000010015e798
+ (void)archiveProfile:(id)arg1 environment:(long long)arg2;	// IMP=0x000000010015e62c
+ (id)_profileArchiveURLForEnvironment:(long long)arg1;	// IMP=0x000000010015e5d8
@property unsigned long long loginStatus; // @synthesize loginStatus=_loginStatus;
- (void)setNumberOfChallenges:(unsigned short)arg1;	// IMP=0x0000000100131968
- (unsigned short)numberOfChallenges;	// IMP=0x0000000100131958
- (void)setNumberOfTurns:(unsigned short)arg1;	// IMP=0x0000000100131948
- (unsigned short)numberOfTurns;	// IMP=0x0000000100131938
- (void)setNumberOfRequests:(unsigned short)arg1;	// IMP=0x0000000100131928
- (unsigned short)numberOfRequests;	// IMP=0x0000000100131918
- (id)iCloudUserID;	// IMP=0x0000000100131908
- (void)setFacebookUserID:(id)arg1;	// IMP=0x00000001001318fc
- (id)facebookUserID;	// IMP=0x00000001001318ec
- (void)setEmailAddresses:(id)arg1;	// IMP=0x00000001001318e0
- (id)emailAddresses;	// IMP=0x00000001001318d0
- (void)setAccountName:(id)arg1;	// IMP=0x00000001001318c4
- (id)accountName;	// IMP=0x00000001001318b4
- (int)defaultFamiliarity;	// IMP=0x00000001001318ac
- (void)setICloudUserID:(id)arg1;	// IMP=0x0000000100131844
- (_Bool)isFriend;	// IMP=0x000000010013183c
- (_Bool)isLocalPlayer;	// IMP=0x0000000100131834
- (void)setPhotoPending:(_Bool)arg1;	// IMP=0x000000010013180c
- (_Bool)isPhotoPending;	// IMP=0x00000001001317f4
- (void)setFindable:(_Bool)arg1;	// IMP=0x00000001001317cc
- (_Bool)isFindable;	// IMP=0x00000001001317b4
- (void)setUnderage:(_Bool)arg1;	// IMP=0x000000010013178c
- (_Bool)isUnderage;	// IMP=0x0000000100131730
- (void)setDefaultPrivacyVisibility:(_Bool)arg1;	// IMP=0x0000000100131708
- (_Bool)isDefaultPrivacyVisibility;	// IMP=0x00000001001316f0
- (void)setDefaultNickname:(_Bool)arg1;	// IMP=0x00000001001316c8
- (_Bool)isDefaultNickname;	// IMP=0x00000001001316b0
- (void)setPurpleBuddyAccount:(_Bool)arg1;	// IMP=0x0000000100131688
- (_Bool)isPurpleBuddyAccount;	// IMP=0x0000000100131670
- (id)minimalInternal;	// IMP=0x000000010013148c
- (void)dealloc;	// IMP=0x0000000100131168
- (void)updateWithProperties:(id)arg1;	// IMP=0x000000010014337c
- (void)updateWithCacheObject:(id)arg1;	// IMP=0x0000000100142cd8

@end

