//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSMutableArray;

@interface IDSProtoKeyTransparencyTrustedDevice : PBCodable <NSCopying>
{
    NSData *_pushToken;	// 8 = 0x8
    NSMutableArray *_trustedServices;	// 16 = 0x10
}

+ (Class)trustedServicesType;	// IMP=0x00000001001a79dc
- (void).cxx_destruct;	// IMP=0x00000001001a8f00
@property(retain, nonatomic) NSMutableArray *trustedServices; // @synthesize trustedServices=_trustedServices;
@property(retain, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001001a8c24
- (unsigned long long)hash;	// IMP=0x00000001001a8ba0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001a89dc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001a874c
- (void)copyTo:(id)arg1;	// IMP=0x00000001001a85f0
- (void)writeTo:(id)arg1;	// IMP=0x00000001001a83fc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001001a838c
- (id)dictionaryRepresentation;	// IMP=0x00000001001a7af4
- (id)description;	// IMP=0x00000001001a7a0c
- (id)trustedServicesAtIndex:(unsigned long long)arg1;	// IMP=0x00000001001a798c
- (unsigned long long)trustedServicesCount;	// IMP=0x00000001001a7944
- (void)addTrustedServices:(id)arg1;	// IMP=0x00000001001a787c
- (void)clearTrustedServices;	// IMP=0x00000001001a7834
@property(readonly, nonatomic) _Bool hasPushToken;

@end

