//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSCKRecordHolder.h"

@class CKKSTLKShare, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKKSTLKShareRecord : CKKSCKRecordHolder
{
    CKKSTLKShare *_share;	// 8 = 0x8
}

+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x0000000100160030
+ (id)sqlColumns;	// IMP=0x0000000100160024
+ (id)sqlTable;	// IMP=0x0000000100160018
+ (id)ckrecordPrefix;	// IMP=0x000000010016000c
+ (id)tryFromDatabaseFromCKRecordID:(id)arg1 error:(id *)arg2;	// IMP=0x000000010015fab0
+ (id)allInZone:(id)arg1 error:(id *)arg2;	// IMP=0x000000010015f98c
+ (id)allForUUID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x000000010015f7dc
+ (id)allFor:(id)arg1 keyUUID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x000000010015f600
+ (id)tryFromDatabase:(id)arg1 receiverPeerID:(id)arg2 senderPeerID:(id)arg3 zoneID:(id)arg4 error:(id *)arg5;	// IMP=0x000000010015f354
+ (id)fromDatabase:(id)arg1 receiverPeerID:(id)arg2 senderPeerID:(id)arg3 zoneID:(id)arg4 error:(id *)arg5;	// IMP=0x000000010015f0a8
+ (id)share:(id)arg1 as:(id)arg2 to:(id)arg3 epoch:(long long)arg4 poisoned:(long long)arg5 error:(id *)arg6;	// IMP=0x000000010015ed40
- (void).cxx_destruct;	// IMP=0x000000010015ed2c
@property(retain) CKKSTLKShare *share; // @synthesize share=_share;
- (id)sqlValues;	// IMP=0x000000010015e6ac
- (id)whereClauseToFindSelf;	// IMP=0x000000010015e4c4
- (void)setFromCKRecord:(id)arg1;	// IMP=0x000000010015dfa0
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x000000010015de54
- (id)updateCKRecord:(id)arg1 zoneID:(id)arg2;	// IMP=0x000000010015d6e4
- (id)CKRecordName;	// IMP=0x000000010015d5ac
- (id)recoverTLK:(id)arg1 trustedPeers:(id)arg2 error:(id *)arg3;	// IMP=0x000000010015d4a0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010015d3c4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010015d320
- (_Bool)signatureVerifiesWithPeerSet:(id)arg1 error:(id *)arg2;	// IMP=0x000000010015d274
- (_Bool)verifySignature:(id)arg1 verifyingPeer:(id)arg2 error:(id *)arg3;	// IMP=0x000000010015d1a4
- (id)signRecord:(id)arg1 error:(id *)arg2;	// IMP=0x000000010015d0f0
- (id)dataForSigning;	// IMP=0x000000010015d064
- (id)unwrapUsing:(id)arg1 error:(id *)arg2;	// IMP=0x000000010015cfa8
@property(readonly) NSData *signature;
@property(readonly) NSData *wrappedTLK;
@property(readonly) long long poisoned;
@property(readonly) long long epoch;
@property(readonly) NSString *senderPeerID;
@property(readonly) NSString *tlkUUID;
- (id)description;	// IMP=0x000000010015cc88
- (id)initForKey:(id)arg1 senderPeerID:(id)arg2 recieverPeerID:(id)arg3 receiverEncPublicKeySPKI:(id)arg4 curve:(long long)arg5 version:(unsigned long long)arg6 epoch:(long long)arg7 poisoned:(long long)arg8 wrappedKey:(id)arg9 signature:(id)arg10 zoneID:(id)arg11 encodedCKRecord:(id)arg12;	// IMP=0x000000010015cb0c
- (id)init:(id)arg1 sender:(id)arg2 receiver:(id)arg3 curve:(long long)arg4 version:(unsigned long long)arg5 epoch:(long long)arg6 poisoned:(long long)arg7 zoneID:(id)arg8 encodedCKRecord:(id)arg9;	// IMP=0x000000010015c9ac
- (id)init:(id)arg1 zoneID:(id)arg2 encodedCKRecord:(id)arg3;	// IMP=0x000000010015c8f8

@end

