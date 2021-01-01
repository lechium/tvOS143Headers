//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface SDAutoUnlockEscrowSecretInfo : PBCodable <NSCopying>
{
    NSString *_pairingID;	// 8 = 0x8
    NSData *_secret;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000e3808
@property(retain, nonatomic) NSString *pairingID; // @synthesize pairingID=_pairingID;
@property(retain, nonatomic) NSData *secret; // @synthesize secret=_secret;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000e3754
- (unsigned long long)hash;	// IMP=0x00000001000e36f8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000e3624
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000e3574
- (void)copyTo:(id)arg1;	// IMP=0x00000001000e3508
- (void)writeTo:(id)arg1;	// IMP=0x00000001000e34a4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000e349c
- (id)dictionaryRepresentation;	// IMP=0x00000001000e3240
- (id)description;	// IMP=0x00000001000e318c
@property(readonly, nonatomic) _Bool hasPairingID;
@property(readonly, nonatomic) _Bool hasSecret;

@end

