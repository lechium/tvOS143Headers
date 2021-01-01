//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface SDUnlockSetupRequest : PBRequest <NSCopying>
{
    NSData *_longTermKey;	// 8 = 0x8
    NSData *_ltkHash;	// 16 = 0x10
    unsigned int _sessionID;	// 24 = 0x18
    unsigned int _version;	// 28 = 0x1c
    _Bool _remoteNeedsLTK;	// 32 = 0x20
    struct {
        unsigned int sessionID:1;
        unsigned int version:1;
        unsigned int remoteNeedsLTK:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x00000001000e012c
@property(nonatomic) _Bool remoteNeedsLTK; // @synthesize remoteNeedsLTK=_remoteNeedsLTK;
@property(retain, nonatomic) NSData *ltkHash; // @synthesize ltkHash=_ltkHash;
@property(retain, nonatomic) NSData *longTermKey; // @synthesize longTermKey=_longTermKey;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000dffcc
- (unsigned long long)hash;	// IMP=0x00000001000dfef4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000dfd8c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000dfc68
- (void)copyTo:(id)arg1;	// IMP=0x00000001000dfb80
- (void)writeTo:(id)arg1;	// IMP=0x00000001000dfaac
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000dfaa4
- (id)dictionaryRepresentation;	// IMP=0x00000001000df520
- (id)description;	// IMP=0x00000001000df46c
@property(nonatomic) _Bool hasRemoteNeedsLTK;
@property(readonly, nonatomic) _Bool hasLtkHash;
@property(readonly, nonatomic) _Bool hasLongTermKey;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasVersion;

@end

