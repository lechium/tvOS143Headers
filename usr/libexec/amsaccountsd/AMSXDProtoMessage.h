//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface AMSXDProtoMessage : PBCodable <NSCopying>
{
    NSString *_logKey;	// 8 = 0x8
    NSData *_messageData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100031628
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain, nonatomic) NSData *messageData; // @synthesize messageData=_messageData;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100031574
- (unsigned long long)hash;	// IMP=0x0000000100031518
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100031444
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100031394
- (void)copyTo:(id)arg1;	// IMP=0x0000000100031330
- (void)writeTo:(id)arg1;	// IMP=0x00000001000312cc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000312c4
- (id)dictionaryRepresentation;	// IMP=0x0000000100031068
- (id)description;	// IMP=0x0000000100030fb4
@property(readonly, nonatomic) _Bool hasLogKey;

@end

