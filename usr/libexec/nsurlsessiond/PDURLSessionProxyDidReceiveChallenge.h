//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyAuthChallenge, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDidReceiveChallenge : PBCodable <NSCopying>
{
    PDURLSessionProxyAuthChallenge *_challenge;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000448ec
@property(retain, nonatomic) PDURLSessionProxyAuthChallenge *challenge; // @synthesize challenge=_challenge;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100044808
- (unsigned long long)hash;	// IMP=0x00000001000447ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000446d8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100044628
- (void)copyTo:(id)arg1;	// IMP=0x00000001000445bc
- (void)writeTo:(id)arg1;	// IMP=0x0000000100044558
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100044320
- (id)dictionaryRepresentation;	// IMP=0x0000000100044240
- (id)description;	// IMP=0x000000010004418c
@property(readonly, nonatomic) _Bool hasChallenge;
@property(readonly, nonatomic) _Bool hasTask;

@end

