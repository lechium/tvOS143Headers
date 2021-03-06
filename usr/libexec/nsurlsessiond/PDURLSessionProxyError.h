//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface PDURLSessionProxyError : PBCodable <NSCopying>
{
    unsigned long long _code;	// 8 = 0x8
    NSString *_domain;	// 16 = 0x10
    NSData *_userInfo;	// 24 = 0x18
    unsigned int _version;	// 32 = 0x20
    struct {
        unsigned int code:1;
        unsigned int version:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x00000001000451ac
@property(retain, nonatomic) NSData *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) unsigned long long code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100045080
- (unsigned long long)hash;	// IMP=0x0000000100044fc8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100044e8c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100044d8c
- (void)copyTo:(id)arg1;	// IMP=0x0000000100044cc8
- (void)writeTo:(id)arg1;	// IMP=0x0000000100044c14
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100044c0c
- (id)dictionaryRepresentation;	// IMP=0x0000000100044ac4
- (id)description;	// IMP=0x0000000100044a10
@property(readonly, nonatomic) _Bool hasUserInfo;
@property(nonatomic) _Bool hasCode;
@property(readonly, nonatomic) _Bool hasDomain;
@property(nonatomic) _Bool hasVersion;

@end

