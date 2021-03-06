//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface TFGetImageUploadUrlsResponse : PBCodable <NSCopying>
{
    unsigned long long _expiresTimeMillis;	// 8 = 0x8
    NSMutableArray *_uploadUrls;	// 16 = 0x10
    struct {
        unsigned int expiresTimeMillis:1;
    } _has;	// 24 = 0x18
}

+ (Class)uploadUrlsType;	// IMP=0x000000010023938c
- (void).cxx_destruct;	// IMP=0x0000000100239eb8
@property(nonatomic) unsigned long long expiresTimeMillis; // @synthesize expiresTimeMillis=_expiresTimeMillis;
@property(retain, nonatomic) NSMutableArray *uploadUrls; // @synthesize uploadUrls=_uploadUrls;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100239d1c
- (unsigned long long)hash;	// IMP=0x0000000100239cb4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100239bd8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100239a2c
- (void)copyTo:(id)arg1;	// IMP=0x000000010023992c
- (void)writeTo:(id)arg1;	// IMP=0x00000001002397d8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001002397d0
- (id)dictionaryRepresentation;	// IMP=0x00000001002394a0
- (id)description;	// IMP=0x00000001002393ec
@property(nonatomic) _Bool hasExpiresTimeMillis;
- (id)uploadUrlsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100239374
- (unsigned long long)uploadUrlsCount;	// IMP=0x000000010023935c
- (void)addUploadUrls:(id)arg1;	// IMP=0x00000001002392e8
- (void)clearUploadUrls;	// IMP=0x00000001002392d0

@end

