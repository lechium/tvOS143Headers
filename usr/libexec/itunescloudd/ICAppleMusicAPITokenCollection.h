//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface ICAppleMusicAPITokenCollection : PBCodable <NSCopying>
{
    NSString *_developerToken;	// 8 = 0x8
    NSString *_userToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000a9d94
@property(retain, nonatomic) NSString *userToken; // @synthesize userToken=_userToken;
@property(retain, nonatomic) NSString *developerToken; // @synthesize developerToken=_developerToken;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000a9ce0
- (unsigned long long)hash;	// IMP=0x00000001000a9c84
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000a9bb0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000a9b00
- (void)writeTo:(id)arg1;	// IMP=0x00000001000a9a9c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000a9a94
- (id)dictionaryRepresentation;	// IMP=0x00000001000a983c
- (id)description;	// IMP=0x00000001000a9788
@property(readonly, nonatomic) _Bool hasUserToken;
@property(readonly, nonatomic) _Bool hasDeveloperToken;
- (id)privacyConsciousDescription;	// IMP=0x000000010001ad98
- (id)privacyConsciousDictionaryRepresentation;	// IMP=0x000000010001ac20

@end

