//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKListEntryCacheObject.h"

@class NSNumber, NSOrderedSet, NSString;

@interface GKCompatibilityEntryCacheObject : GKListEntryCacheObject
{
}

+ (id)entityName;	// IMP=0x0000000100054010
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x000000010005444c
- (id)internalRepresentation;	// IMP=0x000000010005401c

// Remaining properties
@property(retain, nonatomic) NSNumber *adamID; // @dynamic adamID;
@property(retain, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(retain, nonatomic) NSNumber *platform; // @dynamic platform;
@property(retain, nonatomic) NSOrderedSet *shortVersions; // @dynamic shortVersions;
@property(retain, nonatomic) NSOrderedSet *versions; // @dynamic versions;

@end
