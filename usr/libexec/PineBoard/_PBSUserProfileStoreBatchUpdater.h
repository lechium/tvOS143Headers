//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBSUserProfileStoreBatchUpdater-Protocol.h"

@class NSDictionary, NSString, PBUserProfileStore;

@interface _PBSUserProfileStoreBatchUpdater : NSObject <PBSUserProfileStoreBatchUpdater>
{
    PBUserProfileStore *_userProfileStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000968dc
@property(nonatomic) __weak PBUserProfileStore *userProfileStore; // @synthesize userProfileStore=_userProfileStore;
- (id)updateUserProfileWithIdentifier:(id)arg1 attributes:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000967a0
- (id)updateUserProfileWithIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x00000001000966c8
- (id)createUserProfileWithAttributes:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100096624
- (_Bool)addUserProfile:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100096584
- (void)updateUserProfileWithIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000964c0
- (void)removeUserProfileWithIdentifier:(id)arg1;	// IMP=0x0000000100096404
- (void)addUserProfile:(id)arg1;	// IMP=0x000000010009637c
@property(readonly, nonatomic) NSString *selectedUserProfileIdentifier;
@property(readonly, nonatomic) NSString *primaryUserProfileIdentifier;
@property(readonly, nonatomic) NSDictionary *userProfiles;

@end

