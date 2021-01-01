//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface XDCProgress : PBCodable <NSCopying>
{
    long long _completedUnitCount;	// 8 = 0x8
    long long _totalUnitCount;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010013dfc8
@property(nonatomic) long long totalUnitCount; // @synthesize totalUnitCount=_totalUnitCount;
@property(nonatomic) long long completedUnitCount; // @synthesize completedUnitCount=_completedUnitCount;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010013def8
- (unsigned long long)hash;	// IMP=0x000000010013de94
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010013ddcc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010013dd30
- (void)writeTo:(id)arg1;	// IMP=0x000000010013dcb4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010013dcac
- (id)dictionaryRepresentation;	// IMP=0x000000010013d8ac
- (id)description;	// IMP=0x000000010013d7f8

@end

