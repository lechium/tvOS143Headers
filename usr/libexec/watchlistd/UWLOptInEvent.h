//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UWLOptInEvent : PBCodable <NSCopying>
{
    NSString *_brandId;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000a794
@property(retain, nonatomic) NSString *brandId; // @synthesize brandId=_brandId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010000a750
- (unsigned long long)hash;	// IMP=0x000000010000a738
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000a698
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000a61c
- (void)copyTo:(id)arg1;	// IMP=0x000000010000a5f4
- (void)writeTo:(id)arg1;	// IMP=0x000000010000a5d4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010000a5cc
- (id)dictionaryRepresentation;	// IMP=0x000000010000a3d0
- (id)description;	// IMP=0x000000010000a31c
@property(readonly, nonatomic) _Bool hasBrandId;

@end
