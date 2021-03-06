//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface SECC2MPGenericEvent : PBCodable <NSCopying>
{
    unsigned long long _timestampEnd;	// 8 = 0x8
    unsigned long long _timestampStart;	// 16 = 0x10
    NSMutableArray *_metrics;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    int _type;	// 40 = 0x28
    struct {
        unsigned int timestampEnd:1;
        unsigned int timestampStart:1;
        unsigned int type:1;
    } _has;	// 44 = 0x2c
}

+ (Class)metricType;	// IMP=0x0000000100099ed0
- (void).cxx_destruct;	// IMP=0x0000000100099a48
@property(retain, nonatomic) NSMutableArray *metrics; // @synthesize metrics=_metrics;
@property(nonatomic) unsigned long long timestampEnd; // @synthesize timestampEnd=_timestampEnd;
@property(nonatomic) unsigned long long timestampStart; // @synthesize timestampStart=_timestampStart;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100099810
- (unsigned long long)hash;	// IMP=0x0000000100099738
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000995d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000993bc
- (void)copyTo:(id)arg1;	// IMP=0x0000000100099254
- (void)writeTo:(id)arg1;	// IMP=0x00000001000990a4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010009909c
- (id)dictionaryRepresentation;	// IMP=0x0000000100098d2c
- (id)description;	// IMP=0x0000000100098c78
- (id)metricAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100098c60
- (unsigned long long)metricsCount;	// IMP=0x0000000100098c48
- (void)addMetric:(id)arg1;	// IMP=0x0000000100098bd4
- (void)clearMetrics;	// IMP=0x0000000100098bbc
@property(nonatomic) _Bool hasTimestampEnd;
@property(nonatomic) _Bool hasTimestampStart;
@property(readonly, nonatomic) _Bool hasName;
- (int)StringAsType:(id)arg1;	// IMP=0x0000000100098a30
- (id)typeAsString:(int)arg1;	// IMP=0x000000010009899c
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

