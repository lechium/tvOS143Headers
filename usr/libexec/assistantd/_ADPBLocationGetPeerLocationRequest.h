//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@interface _ADPBLocationGetPeerLocationRequest : PBRequest <NSCopying>
{
}

+ (unsigned short)_ADPBLocationRequestType;	// IMP=0x00000001002124d8
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001001833e0
- (unsigned long long)hash;	// IMP=0x00000001001833d8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100183384
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010018334c
- (void)copyTo:(id)arg1;	// IMP=0x0000000100183348
- (void)writeTo:(id)arg1;	// IMP=0x0000000100183344
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010018333c
- (id)dictionaryRepresentation;	// IMP=0x00000001001831e0
- (id)description;	// IMP=0x000000010018312c
- (void)_ad_performWithPeerLocationManagerRemote:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000dc5fc

@end
