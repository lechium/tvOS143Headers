//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface XDCCancelInstallRequest : PBRequest <NSCopying>
{
    NSString *_bundleID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100190190
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010019014c
- (unsigned long long)hash;	// IMP=0x0000000100190134
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100190094
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100190018
- (void)writeTo:(id)arg1;	// IMP=0x0000000100190000
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010018fff8
- (id)dictionaryRepresentation;	// IMP=0x000000010018fdfc
- (id)description;	// IMP=0x000000010018fd48

@end
