//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyOpenBodyStream : PBCodable <NSCopying>
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100040954
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000408cc
- (unsigned long long)hash;	// IMP=0x00000001000408b4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100040814
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100040798
- (void)copyTo:(id)arg1;	// IMP=0x0000000100040770
- (void)writeTo:(id)arg1;	// IMP=0x0000000100040750
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100040568
- (id)dictionaryRepresentation;	// IMP=0x00000001000404dc
- (id)description;	// IMP=0x0000000100040428
@property(readonly, nonatomic) _Bool hasTask;

@end
