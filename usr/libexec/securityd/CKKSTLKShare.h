//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class CKRecordZoneID, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKKSTLKShare : NSObject <NSCopying, NSSecureCoding>
{
    long long _curve;	// 8 = 0x8
    unsigned long long _version;	// 16 = 0x10
    NSString *_tlkUUID;	// 24 = 0x18
    NSString *_receiverPeerID;	// 32 = 0x20
    NSData *_receiverPublicEncryptionKeySPKI;	// 40 = 0x28
    NSString *_senderPeerID;	// 48 = 0x30
    long long _epoch;	// 56 = 0x38
    long long _poisoned;	// 64 = 0x40
    NSData *_wrappedTLK;	// 72 = 0x48
    NSData *_signature;	// 80 = 0x50
    CKRecordZoneID *_zoneID;	// 88 = 0x58
}

+ (id)share:(id)arg1 as:(id)arg2 to:(id)arg3 epoch:(long long)arg4 poisoned:(long long)arg5 error:(id *)arg6;	// IMP=0x00000001000735ac
+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000735a4
- (void).cxx_destruct;	// IMP=0x0000000100073538
@property(retain) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(retain) NSData *signature; // @synthesize signature=_signature;
@property(retain) NSData *wrappedTLK; // @synthesize wrappedTLK=_wrappedTLK;
@property long long poisoned; // @synthesize poisoned=_poisoned;
@property long long epoch; // @synthesize epoch=_epoch;
@property(retain) NSString *senderPeerID; // @synthesize senderPeerID=_senderPeerID;
@property(retain) NSData *receiverPublicEncryptionKeySPKI; // @synthesize receiverPublicEncryptionKeySPKI=_receiverPublicEncryptionKeySPKI;
@property(retain) NSString *receiverPeerID; // @synthesize receiverPeerID=_receiverPeerID;
@property(retain) NSString *tlkUUID; // @synthesize tlkUUID=_tlkUUID;
@property unsigned long long version; // @synthesize version=_version;
@property long long curve; // @synthesize curve=_curve;
- (id)recoverTLK:(id)arg1 trustedPeers:(id)arg2 ckrecord:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100073028
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000729a4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100072730
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010007249c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000721e4
- (_Bool)signatureVerifiesWithPeerSet:(id)arg1 ckrecord:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100071db8
- (_Bool)verifySignature:(id)arg1 verifyingPeer:(id)arg2 ckrecord:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100071a78
- (id)signRecord:(id)arg1 ckrecord:(id)arg2 error:(id *)arg3;	// IMP=0x000000010007190c
- (id)dataForSigning:(id)arg1;	// IMP=0x0000000100071208
- (id)unwrapUsing:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100071020
- (id)wrap:(id)arg1 publicKey:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100070ec8
- (id)description;	// IMP=0x0000000100070dfc
- (id)initForKey:(id)arg1 senderPeerID:(id)arg2 recieverPeerID:(id)arg3 receiverEncPublicKeySPKI:(id)arg4 curve:(long long)arg5 version:(unsigned long long)arg6 epoch:(long long)arg7 poisoned:(long long)arg8 wrappedKey:(id)arg9 signature:(id)arg10 zoneID:(id)arg11;	// IMP=0x0000000100070c54
- (id)init:(id)arg1 sender:(id)arg2 receiver:(id)arg3 curve:(long long)arg4 version:(unsigned long long)arg5 epoch:(long long)arg6 poisoned:(long long)arg7 zoneID:(id)arg8;	// IMP=0x0000000100070aa8

@end

