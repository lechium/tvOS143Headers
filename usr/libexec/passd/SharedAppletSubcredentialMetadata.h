//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface SharedAppletSubcredentialMetadata : SQLiteEntity
{
}

+ (id)databaseTable;	// IMP=0x0000000100239c78
+ (id)_propertySetters;	// IMP=0x0000000100239990
+ (id)dictionaryFromSharedCredentialMetadata:(id)arg1;	// IMP=0x0000000100239684
+ (id)_predicateForSharedCredentialInvitationReceiptWithPID:(long long)arg1;	// IMP=0x000000010023932c
+ (id)_predicateForSharedCredentialWithPID:(long long)arg1;	// IMP=0x00000001002392b8
+ (id)insertSharedCredentialMetadata:(id)arg1 withAssociatedSharedCredentialReceiptPid:(unsigned long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001002391bc
+ (id)insertOrUpdateSharedCredentialMetadata:(id)arg1 withAssociatedSharedCredentialPid:(unsigned long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001002390c0
+ (id)sharedCredentialMetadataInDatabase:(id)arg1 forSharedCredentialInvitationReceiptWithPID:(long long)arg2;	// IMP=0x0000000100238d4c
+ (id)sharedCredentialMetadataInDatabase:(id)arg1 forSharedCredentialWithPID:(long long)arg2;	// IMP=0x00000001002389c0
- (id)metadata;	// IMP=0x000000010023954c
- (_Bool)updateWithMetadata:(id)arg1 associatedSharedCredentialPid:(long long)arg2;	// IMP=0x0000000100239498
- (id)initWithMetadata:(id)arg1 associatedSharedCredentialPid:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001002393a0

@end

