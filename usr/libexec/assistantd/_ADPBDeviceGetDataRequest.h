//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@interface _ADPBDeviceGetDataRequest : PBRequest <NSCopying>
{
}

+ (unsigned short)_ADPBDeviceRequestType;	// IMP=0x000000010008ddf0
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010020c1b4
- (unsigned long long)hash;	// IMP=0x000000010020c1ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010020c158
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010020c120
- (void)copyTo:(id)arg1;	// IMP=0x000000010020c11c
- (void)writeTo:(id)arg1;	// IMP=0x000000010020c118
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010020c110
- (id)dictionaryRepresentation;	// IMP=0x000000010020bfb4
- (id)description;	// IMP=0x000000010020bf00
- (void)_ad_performWithSharedDataRemote:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000aa578
- (void)_ad_performWithCloudService:(id)arg1 fromPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001201b0

@end
