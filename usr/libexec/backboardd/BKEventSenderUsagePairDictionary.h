//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BKEventSenderUsagePairDictionary : NSObject
{
    NSMutableDictionary *_usagePairsPerSenderID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000912c
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100009120
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000001000090cc
- (id)succinctDescriptionBuilder;	// IMP=0x000000010000902c
- (id)succinctDescription;	// IMP=0x0000000100008fd8
- (id)description;	// IMP=0x0000000100008fc8
- (id)popObjectForSenderID:(unsigned long long)arg1 page:(unsigned short)arg2 usage:(unsigned short)arg3;	// IMP=0x0000000100008edc
- (void)enumerateAllObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100008d3c
- (void)enumerateObjectsForSenderID:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008c4c
- (void)removeAllObjectsForSenderID:(unsigned long long)arg1;	// IMP=0x0000000100008bf8
- (void)removeObjectForSenderID:(unsigned long long)arg1 page:(unsigned short)arg2 usage:(unsigned short)arg3;	// IMP=0x0000000100008b30
- (void)_removeObjectFromDictionary:(id)arg1 senderIDKey:(id)arg2 usagePairKey:(id)arg3;	// IMP=0x0000000100008a84
- (void)setObject:(id)arg1 forSenderID:(unsigned long long)arg2 page:(unsigned short)arg3 usage:(unsigned short)arg4;	// IMP=0x0000000100008948
- (id)objectForSenderID:(unsigned long long)arg1 page:(unsigned short)arg2 usage:(unsigned short)arg3;	// IMP=0x0000000100008874

@end

