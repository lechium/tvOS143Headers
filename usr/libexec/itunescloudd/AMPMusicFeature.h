//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface AMPMusicFeature : PBCodable <NSCopying>
{
    struct {
        float *list;
        unsigned long long count;
        unsigned long long size;
    } _values;	// 8 = 0x8
    NSString *_key;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100056c68
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100056b94
- (unsigned long long)hash;	// IMP=0x0000000100056b48
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100056a98
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100056a08
- (void)copyTo:(id)arg1;	// IMP=0x0000000100056934
- (void)writeTo:(id)arg1;	// IMP=0x00000001000568a8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000568a0
- (id)dictionaryRepresentation;	// IMP=0x0000000100056554
- (id)description;	// IMP=0x00000001000564a0
- (void)setValues:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000100056488
- (float)valueAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000563b0
- (void)addValue:(float)arg1;	// IMP=0x00000001000563a0
- (void)clearValues;	// IMP=0x0000000100056390
@property(readonly, nonatomic) float *values;
@property(readonly, nonatomic) unsigned long long valuesCount;
@property(readonly, nonatomic) _Bool hasKey;
- (void)dealloc;	// IMP=0x0000000100056304

@end

