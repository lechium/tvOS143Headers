//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSURLRequest;

@interface _GKURLRequestDictionaryKey : NSObject <NSCopying>
{
    NSURLRequest *_request;	// 8 = 0x8
}

+ (id)keyWithRequest:(id)arg1;	// IMP=0x000000010009a8c4
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void)dealloc;	// IMP=0x000000010009ab04
- (unsigned long long)hash;	// IMP=0x000000010009aadc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010009a97c
- (id)description;	// IMP=0x000000010009a8f8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010009a8f4
- (id)initWithRequest:(id)arg1;	// IMP=0x000000010009a864

@end

