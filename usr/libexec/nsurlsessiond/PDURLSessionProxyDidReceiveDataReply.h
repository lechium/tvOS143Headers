//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDidReceiveDataReply : PBCodable <NSCopying>
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010003d078
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010003cff0
- (unsigned long long)hash;	// IMP=0x000000010003cfd8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010003cf38
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010003cebc
- (void)copyTo:(id)arg1;	// IMP=0x000000010003ce94
- (void)writeTo:(id)arg1;	// IMP=0x000000010003ce74
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010003cc8c
- (id)dictionaryRepresentation;	// IMP=0x000000010003cc00
- (id)description;	// IMP=0x000000010003cb4c
@property(readonly, nonatomic) _Bool hasTask;

@end

