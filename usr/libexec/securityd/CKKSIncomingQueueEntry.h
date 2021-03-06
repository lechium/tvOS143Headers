//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSSQLDatabaseObject.h"

@class CKKSItem, NSString;

__attribute__((visibility("hidden")))
@interface CKKSIncomingQueueEntry : CKKSSQLDatabaseObject
{
    CKKSItem *_item;	// 8 = 0x8
    NSString *_action;	// 16 = 0x10
    NSString *_state;	// 24 = 0x18
}

+ (long long)countByState:(id)arg1 zone:(id)arg2 error:(id *)arg3;	// IMP=0x000000010005f0fc
+ (id)countsByStateInZone:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005ef20
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x000000010005eddc
+ (id)sqlColumns;	// IMP=0x000000010005ed78
+ (id)sqlTable;	// IMP=0x000000010005ed6c
+ (id)fetch:(long long)arg1 startingAtUUID:(id)arg2 state:(id)arg3 action:(id)arg4 zoneID:(id)arg5 error:(id *)arg6;	// IMP=0x000000010005eae8
+ (id)tryFromDatabase:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x000000010005e938
+ (id)fromDatabase:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x000000010005e788
- (void).cxx_destruct;	// IMP=0x000000010005e734
@property(retain) NSString *state; // @synthesize state=_state;
@property(retain) NSString *action; // @synthesize action=_action;
@property(retain) CKKSItem *item; // @synthesize item=_item;
- (id)sqlValues;	// IMP=0x000000010005e5e8
- (id)whereClauseToFindSelf;	// IMP=0x000000010005e594
@property(retain) NSString *uuid;
- (id)initWithCKKSItem:(id)arg1 action:(id)arg2 state:(id)arg3;	// IMP=0x000000010005e3ec
- (id)description;	// IMP=0x000000010005e260

@end

