//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface SDAutoUnlockStartAdvertising : PBCodable <NSCopying>
{
    unsigned int _version;	// 8 = 0x8
    CDStruct_f20694ce _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010016cbf0
- (unsigned long long)hash;	// IMP=0x000000010016cbbc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010016cb10
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010016caa4
- (void)copyTo:(id)arg1;	// IMP=0x000000010016ca74
- (void)writeTo:(id)arg1;	// IMP=0x000000010016ca48
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010016ca40
- (id)dictionaryRepresentation;	// IMP=0x000000010016c778
- (id)description;	// IMP=0x000000010016c6c4
@property(nonatomic) _Bool hasVersion;

@end

