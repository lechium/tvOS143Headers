//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDidReceiveResponseReply : PBCodable <NSCopying>
{
    int _disposition;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
    CDStruct_cc6d6311 _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010003ab44
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010003aa90
- (unsigned long long)hash;	// IMP=0x000000010003aa28
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010003a94c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010003a8a4
- (void)copyTo:(id)arg1;	// IMP=0x000000010003a82c
- (void)writeTo:(id)arg1;	// IMP=0x000000010003a7bc
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010003a51c
- (id)dictionaryRepresentation;	// IMP=0x000000010003a3e0
- (id)description;	// IMP=0x000000010003a32c
- (int)StringAsDisposition:(id)arg1;	// IMP=0x000000010003a28c
- (id)dispositionAsString:(int)arg1;	// IMP=0x000000010003a214
@property(nonatomic) _Bool hasDisposition;
@property(nonatomic) int disposition; // @synthesize disposition=_disposition;
@property(readonly, nonatomic) _Bool hasTask;

@end

