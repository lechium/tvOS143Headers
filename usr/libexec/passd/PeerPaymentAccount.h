//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PeerPaymentAccount : SQLiteEntity
{
}

+ (id)_propertySettersForPeerPaymentAccount;	// IMP=0x000000010011ccd0
+ (id)anyInDatabase:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x000000010011c288
+ (id)anyInDatabase:(id)arg1 withTransactionSourcePID:(long long)arg2;	// IMP=0x000000010011c1b0
+ (id)anyInDatabase:(id)arg1 withPersistentID:(long long)arg2;	// IMP=0x000000010011c0d8
+ (id)anyInDatabase:(id)arg1;	// IMP=0x000000010011c040
+ (void)_deleteAssociatedPeerPaymentAccountForPeerPaymentAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010011bfa0
+ (id)insertOrUpdatePeerPaymentAccount:(id)arg1 inDatabase:(id)arg2;	// IMP=0x000000010011be94
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x000000010011bb40
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x000000010011bae8
+ (id)databaseTable;	// IMP=0x000000010011badc
+ (id)associatedPeerPaymentAccountForPeerPaymentAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010011b8ac
+ (id)_predicateForAssociatedPeerPaymentAccountIdentifier:(id)arg1;	// IMP=0x000000010011aee4
+ (id)_predicateForAssociatedPeerPaymentAccountPID:(long long)arg1;	// IMP=0x000000010011ae70
+ (void)_insertOrUpdateAssociatedPeerPaymentAccounts:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 accountIdentifier:(id)arg3 inDatabase:(id)arg4;	// IMP=0x000000010011a4a0
- (id)_dictionaryForPeerPaymentAccount:(id)arg1;	// IMP=0x000000010011c41c
- (id)_passForPeerPaymentAccount:(id)arg1 database:(id)arg2;	// IMP=0x000000010011c314
- (_Bool)deleteFromDatabase;	// IMP=0x000000010011bc68
- (id)transactionSourceIdentifier;	// IMP=0x000000010011b7e0
- (id)identifier;	// IMP=0x000000010011b7cc
- (id)associatedPassUniqueID;	// IMP=0x000000010011b748
- (id)associatedPassSerialNumber;	// IMP=0x000000010011b6fc
- (id)associatedPassTypeIdentifier;	// IMP=0x000000010011b6b0
- (unsigned long long)state;	// IMP=0x000000010011b65c
- (id)associatedAccountInformation;	// IMP=0x000000010011b2d8
- (id)currentBalance;	// IMP=0x000000010011b1b8
- (id)peerPaymentAccount;	// IMP=0x000000010011af04
- (void)updateWithPeerPaymentAccount:(id)arg1;	// IMP=0x000000010011a9e0
- (id)_commonInitForPeerPaymentAccount:(id)arg1 dictionary:(id)arg2 inDatabase:(id)arg3;	// IMP=0x000000010011a20c
- (id)initWithPeerPaymentAccount:(id)arg1 inDatabase:(id)arg2 associatedPeerPaymentAccountPID:(long long)arg3;	// IMP=0x000000010011a138
- (id)initWithPeerPaymentAccount:(id)arg1 inDatabase:(id)arg2;	// IMP=0x000000010011a080

@end

