//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface _ADPBLocationSetPeerLocationRequest : PBRequest <NSCopying>
{
    NSData *_codedLocation;	// 8 = 0x8
}

+ (unsigned short)_ADPBLocationRequestType;	// IMP=0x00000001002124e0
- (void).cxx_destruct;	// IMP=0x00000001000f6810
@property(retain, nonatomic) NSData *codedLocation; // @synthesize codedLocation=_codedLocation;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000f67cc
- (unsigned long long)hash;	// IMP=0x00000001000f67b4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000f6714
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000f6698
- (void)copyTo:(id)arg1;	// IMP=0x00000001000f6670
- (void)writeTo:(id)arg1;	// IMP=0x00000001000f6650
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000f6648
- (id)dictionaryRepresentation;	// IMP=0x00000001000f644c
- (id)description;	// IMP=0x00000001000f6398
@property(readonly, nonatomic) _Bool hasCodedLocation;
- (void)_ad_performForPeerLocationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e1b6c
- (void)ad_setLocation:(id)arg1;	// IMP=0x00000001001aaec8
- (id)ad_location;	// IMP=0x00000001001aae08

@end
