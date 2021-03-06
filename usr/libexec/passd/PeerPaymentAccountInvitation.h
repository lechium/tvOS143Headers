//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PeerPaymentAccountInvitation : SQLiteEntity
{
}

+ (id)_propertySettersForPeerPaymentAccountInvitation;	// IMP=0x000000010002f2b4
+ (id)_peerPaymentAccountInvitationsWithQuery:(id)arg1;	// IMP=0x000000010002f0f0
+ (id)_predicateForPeerPaymentAccountPID:(long long)arg1;	// IMP=0x000000010002ef0c
+ (id)invitationsForPeerPaymentAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010002ecb0
+ (void)deleteInvitationsForPeerPaymentAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010002ec10
+ (id)insertInvitations:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x000000010002ea44
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x000000010002ea0c
+ (id)databaseTable;	// IMP=0x000000010002ea00
- (id)peerPaymentAccountInvitation;	// IMP=0x000000010002ef80
- (id)initWithInvitation:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x000000010002ed68

@end

