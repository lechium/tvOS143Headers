//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PeerPaymentAccountAdditionalPushTopics : SQLiteEntity
{
}

+ (id)_propertySettersForPeerPaymentAccountAdditionalPushTopics;	// IMP=0x000000010018aa14
+ (id)_predicateForAccountPID:(long long)arg1;	// IMP=0x000000010018a8d4
+ (void)updatePeerPaymentAccountAdditionalPushTopics:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x000000010018a78c
+ (void)deletePeerPaymentAccountAdditionalPushTopicsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010018a6ec
+ (id)insertPeerPaymentAccountAdditionalPushTopics:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x000000010018a670
+ (id)peerPaymentAccountAdditionalPushTopicsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010018a4cc
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x000000010018a494
+ (id)databaseTable;	// IMP=0x000000010018a488
- (id)peerPaymentAccountAdditionalPushTopics;	// IMP=0x000000010018ab20
- (id)_commonDictionaryForPushTopics:(id)arg1;	// IMP=0x000000010018a948
- (void)updatePeerPaymentAccountAdditionalPushTopics:(id)arg1;	// IMP=0x000000010018a888
- (id)initWithPeerPaymentAccountAdditionalPushTopics:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x000000010018a580

@end

