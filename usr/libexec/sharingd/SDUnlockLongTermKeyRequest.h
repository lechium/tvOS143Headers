//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface SDUnlockLongTermKeyRequest : PBRequest <NSCopying>
{
    NSData *_longTermKey;	// 8 = 0x8
    NSString *_requestID;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    CDStruct_f20694ce _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000010005fc34
@property(retain, nonatomic) NSData *longTermKey; // @synthesize longTermKey=_longTermKey;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010005fb44
- (unsigned long long)hash;	// IMP=0x000000010005fab8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010005f9ac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010005f8d0
- (void)copyTo:(id)arg1;	// IMP=0x000000010005f838
- (void)writeTo:(id)arg1;	// IMP=0x000000010005f7ac
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010005f7a4
- (id)dictionaryRepresentation;	// IMP=0x000000010005f434
- (id)description;	// IMP=0x000000010005f380
@property(readonly, nonatomic) _Bool hasLongTermKey;
@property(readonly, nonatomic) _Bool hasRequestID;
@property(nonatomic) _Bool hasVersion;

@end

