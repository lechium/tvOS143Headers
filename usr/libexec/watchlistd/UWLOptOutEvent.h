//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UWLOptOutEvent : PBCodable <NSCopying>
{
    NSString *_brandId;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000a2f0
@property(retain, nonatomic) NSString *brandId; // @synthesize brandId=_brandId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010000a2ac
- (unsigned long long)hash;	// IMP=0x000000010000a294
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000a1f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000a178
- (void)copyTo:(id)arg1;	// IMP=0x000000010000a150
- (void)writeTo:(id)arg1;	// IMP=0x000000010000a130
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010000a128
- (id)dictionaryRepresentation;	// IMP=0x0000000100009f2c
- (id)description;	// IMP=0x0000000100009e78
@property(readonly, nonatomic) _Bool hasBrandId;

@end

