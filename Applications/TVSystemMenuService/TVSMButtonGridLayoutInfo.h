//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface TVSMButtonGridLayoutInfo : NSObject <NSCopying>
{
    NSString *_identifier;	// 8 = 0x8
    long long _style;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100006968
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;	// IMP=0x0000000100006914
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100006848
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000067c4
- (id)initWithIdentifier:(id)arg1 style:(long long)arg2;	// IMP=0x0000000100006734

@end

