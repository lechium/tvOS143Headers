//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UWLLiveActivityEventChannel : PBCodable <NSCopying>
{
    NSString *_channelBrandId;	// 8 = 0x8
    NSString *_channelCanonicalId;	// 16 = 0x10
    NSString *_channelExternalLiveServiceId;	// 24 = 0x18
    NSString *_channelInternalLegId;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010000c704
@property(retain, nonatomic) NSString *channelInternalLegId; // @synthesize channelInternalLegId=_channelInternalLegId;
@property(retain, nonatomic) NSString *channelExternalLiveServiceId; // @synthesize channelExternalLiveServiceId=_channelExternalLiveServiceId;
@property(retain, nonatomic) NSString *channelBrandId; // @synthesize channelBrandId=_channelBrandId;
@property(retain, nonatomic) NSString *channelCanonicalId; // @synthesize channelCanonicalId=_channelCanonicalId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010000c5c8
- (unsigned long long)hash;	// IMP=0x000000010000c53c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000c410
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000c310
- (void)copyTo:(id)arg1;	// IMP=0x000000010000c264
- (void)writeTo:(id)arg1;	// IMP=0x000000010000c1c8
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010000c1c0
- (id)dictionaryRepresentation;	// IMP=0x000000010000bf34
- (id)description;	// IMP=0x000000010000be80
@property(readonly, nonatomic) _Bool hasChannelInternalLegId;
@property(readonly, nonatomic) _Bool hasChannelExternalLiveServiceId;
@property(readonly, nonatomic) _Bool hasChannelBrandId;
@property(readonly, nonatomic) _Bool hasChannelCanonicalId;

@end
