//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ADDomainObjectCache : NSObject
{
    NSMutableDictionary *_cacheEntriesByAceKey;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000d2390
- (void)reset;	// IMP=0x00000001000d2380
- (id)oldIdForKey:(id)arg1;	// IMP=0x00000001000d2328
- (void)setDomainObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001000d22d4
- (void)setDomainObject:(id)arg1 withOldId:(id)arg2 forKey:(id)arg3;	// IMP=0x00000001000d21cc
- (id)domainObjectForKey:(id)arg1;	// IMP=0x00000001000d2174
- (id)init;	// IMP=0x00000001000d2110

@end

