//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableDictionary;

@interface ContextObject : NSObject <NSCopying>
{
    NSMutableDictionary *_dictionary;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001001d2780
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001001d2708
- (id)objectForKey:(id)arg1;	// IMP=0x00000001001d2698
- (id)copyDictionaryRepresentation;	// IMP=0x00000001001d2650
- (id)description;	// IMP=0x00000001001d2600
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001d2578
- (id)init;	// IMP=0x00000001001d2510

@end

