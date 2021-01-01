//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface SDUnlockSetupSessionCreated : PBCodable <NSCopying>
{
    unsigned int _errorCode;	// 8 = 0x8
    unsigned int _failureReasons;	// 12 = 0xc
    NSData *_longTermKey;	// 16 = 0x10
    NSData *_ltkHash;	// 24 = 0x18
    unsigned int _sessionID;	// 32 = 0x20
    NSData *_token;	// 40 = 0x28
    unsigned int _version;	// 48 = 0x30
    int _watchNewLTKSyncStatus;	// 52 = 0x34
    int _watchOldLTKSyncStatus;	// 56 = 0x38
    _Bool _ltkSyncing;	// 60 = 0x3c
    struct {
        unsigned int errorCode:1;
        unsigned int failureReasons:1;
        unsigned int sessionID:1;
        unsigned int version:1;
        unsigned int watchNewLTKSyncStatus:1;
        unsigned int watchOldLTKSyncStatus:1;
        unsigned int ltkSyncing:1;
    } _has;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001001645f8
@property(retain, nonatomic) NSData *ltkHash; // @synthesize ltkHash=_ltkHash;
@property(nonatomic) int watchNewLTKSyncStatus; // @synthesize watchNewLTKSyncStatus=_watchNewLTKSyncStatus;
@property(nonatomic) int watchOldLTKSyncStatus; // @synthesize watchOldLTKSyncStatus=_watchOldLTKSyncStatus;
@property(nonatomic) _Bool ltkSyncing; // @synthesize ltkSyncing=_ltkSyncing;
@property(nonatomic) unsigned int failureReasons; // @synthesize failureReasons=_failureReasons;
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSData *longTermKey; // @synthesize longTermKey=_longTermKey;
@property(retain, nonatomic) NSData *token; // @synthesize token=_token;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100164370
- (unsigned long long)hash;	// IMP=0x0000000100164200
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100163fc8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100163dd8
- (void)copyTo:(id)arg1;	// IMP=0x0000000100163c2c
- (void)writeTo:(id)arg1;	// IMP=0x0000000100163aa8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100163aa0
- (id)dictionaryRepresentation;	// IMP=0x00000001001630fc
- (id)description;	// IMP=0x0000000100163048
@property(readonly, nonatomic) _Bool hasLtkHash;
@property(nonatomic) _Bool hasWatchNewLTKSyncStatus;
@property(nonatomic) _Bool hasWatchOldLTKSyncStatus;
@property(nonatomic) _Bool hasLtkSyncing;
@property(nonatomic) _Bool hasFailureReasons;
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasLongTermKey;
@property(readonly, nonatomic) _Bool hasToken;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasVersion;

@end

