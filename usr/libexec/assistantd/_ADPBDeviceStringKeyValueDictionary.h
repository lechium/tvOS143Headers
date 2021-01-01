//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface _ADPBDeviceStringKeyValueDictionary : PBCodable <NSCopying>
{
    NSMutableArray *_pairs;	// 8 = 0x8
}

+ (Class)pairsType;	// IMP=0x0000000100292c58
+ (id)_ad_keyValueDictionaryWithDictionary:(id)arg1;	// IMP=0x0000000100298a28
- (void).cxx_destruct;	// IMP=0x0000000100293674
@property(retain, nonatomic) NSMutableArray *pairs; // @synthesize pairs=_pairs;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100293528
- (unsigned long long)hash;	// IMP=0x0000000100293510
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100293470
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001002932f8
- (void)copyTo:(id)arg1;	// IMP=0x0000000100293224
- (void)writeTo:(id)arg1;	// IMP=0x00000001002930f8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001002930f0
- (id)dictionaryRepresentation;	// IMP=0x0000000100292d18
- (id)description;	// IMP=0x0000000100292c64
- (id)pairsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100292c40
- (unsigned long long)pairsCount;	// IMP=0x0000000100292c28
- (void)addPairs:(id)arg1;	// IMP=0x0000000100292bb4
- (void)clearPairs;	// IMP=0x0000000100292b9c
- (id)_ad_dictionaryRepresentation;	// IMP=0x0000000100298bf4

@end

