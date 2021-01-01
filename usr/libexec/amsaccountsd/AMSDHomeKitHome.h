//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMSDHome-Protocol.h"

@class AMSDHomeKitDataSource, HMHome, NSArray, NSString, NSUUID;
@protocol AMSDHomeUser;

@interface AMSDHomeKitHome : NSObject <AMSDHome>
{
    HMHome *_home;	// 8 = 0x8
    AMSDHomeKitDataSource *_dataSource;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100018ce4
@property(retain, nonatomic) AMSDHomeKitDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
- (unsigned long long)mediaProfileEnabledForUser:(id)arg1;	// IMP=0x0000000100018950
@property(readonly, nonatomic) NSArray *users;
@property(readonly, nonatomic) id <AMSDHomeUser> owner;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic, getter=isMultiUserEnabled) _Bool multiUserEnabled;
@property(readonly, nonatomic, getter=isPrimary) _Bool primary;
@property(readonly, nonatomic) NSUUID *identifier;
@property(readonly, nonatomic) id <AMSDHomeUser> currentUser;
@property(readonly, nonatomic, getter=isCurrentUserOwner) _Bool currentUserOwner;
@property(readonly, nonatomic, getter=isCurrentDeviceAccessory) _Bool currentDeviceAccessory;
@property(readonly, nonatomic) NSString *hashedDescription;
- (id)initWithHome:(id)arg1 dataSource:(id)arg2;	// IMP=0x00000001000181c8

// Remaining properties
@property(readonly, nonatomic) _Bool currentUserNeedsTokenRepair;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
