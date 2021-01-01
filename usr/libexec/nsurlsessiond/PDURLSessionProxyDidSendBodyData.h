//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDidSendBodyData : PBCodable <NSCopying>
{
    unsigned long long _bytesSent;	// 8 = 0x8
    unsigned long long _totalBytesExpectedToSend;	// 16 = 0x10
    unsigned long long _totalBytesSent;	// 24 = 0x18
    PDURLSessionProxyTaskMessage *_task;	// 32 = 0x20
    struct {
        unsigned int bytesSent:1;
        unsigned int totalBytesExpectedToSend:1;
        unsigned int totalBytesSent:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100041688
@property(nonatomic) unsigned long long totalBytesExpectedToSend; // @synthesize totalBytesExpectedToSend=_totalBytesExpectedToSend;
@property(nonatomic) unsigned long long totalBytesSent; // @synthesize totalBytesSent=_totalBytesSent;
@property(nonatomic) unsigned long long bytesSent; // @synthesize bytesSent=_bytesSent;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100041550
- (unsigned long long)hash;	// IMP=0x00000001000414a8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010004137c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100041280
- (void)copyTo:(id)arg1;	// IMP=0x00000001000411b4
- (void)writeTo:(id)arg1;	// IMP=0x00000001000410f0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100040cec
- (id)dictionaryRepresentation;	// IMP=0x0000000100040b48
- (id)description;	// IMP=0x0000000100040a94
@property(nonatomic) _Bool hasTotalBytesExpectedToSend;
@property(nonatomic) _Bool hasTotalBytesSent;
@property(nonatomic) _Bool hasBytesSent;
@property(readonly, nonatomic) _Bool hasTask;

@end
