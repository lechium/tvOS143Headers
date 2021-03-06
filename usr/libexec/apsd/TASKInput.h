//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class TASKEdgeDnsInput;

@interface TASKInput : PBCodable <NSCopying>
{
    TASKEdgeDnsInput *_edgeDNS;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010003e028
@property(retain, nonatomic) TASKEdgeDnsInput *edgeDNS; // @synthesize edgeDNS=_edgeDNS;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010003dfa0
- (unsigned long long)hash;	// IMP=0x000000010003df88
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010003dee8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010003de6c
- (void)copyTo:(id)arg1;	// IMP=0x000000010003de44
- (void)writeTo:(id)arg1;	// IMP=0x000000010003de24
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010003de1c
- (id)dictionaryRepresentation;	// IMP=0x000000010003dba8
- (id)description;	// IMP=0x000000010003daf4
@property(readonly, nonatomic) _Bool hasEdgeDNS;

@end

