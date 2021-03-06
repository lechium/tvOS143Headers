//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxySetTaskDescription : PBCodable <NSCopying>
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
    NSString *_taskDescription;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100032160
@property(retain, nonatomic) NSString *taskDescription; // @synthesize taskDescription=_taskDescription;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100032094
- (unsigned long long)hash;	// IMP=0x0000000100032038
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100031f64
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100031eb4
- (void)copyTo:(id)arg1;	// IMP=0x0000000100031e48
- (void)writeTo:(id)arg1;	// IMP=0x0000000100031de4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100031bd0
- (id)dictionaryRepresentation;	// IMP=0x0000000100031b18
- (id)description;	// IMP=0x0000000100031a64
@property(readonly, nonatomic) _Bool hasTaskDescription;
@property(readonly, nonatomic) _Bool hasTask;

@end

