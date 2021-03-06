//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDidReceiveData : PBCodable <NSCopying>
{
    NSData *_receivedData;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100030ab8
@property(retain, nonatomic) NSData *receivedData; // @synthesize receivedData=_receivedData;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000309ec
- (unsigned long long)hash;	// IMP=0x0000000100030990
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000308bc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010003080c
- (void)copyTo:(id)arg1;	// IMP=0x00000001000307a0
- (void)writeTo:(id)arg1;	// IMP=0x000000010003073c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100030528
- (id)dictionaryRepresentation;	// IMP=0x0000000100030470
- (id)description;	// IMP=0x00000001000303bc
@property(readonly, nonatomic) _Bool hasReceivedData;
@property(readonly, nonatomic) _Bool hasTask;

@end

