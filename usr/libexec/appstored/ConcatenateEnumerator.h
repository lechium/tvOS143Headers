//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@interface ConcatenateEnumerator : NSEnumerator
{
    NSEnumerator *_prefixEnumerator;	// 8 = 0x8
    NSEnumerator *_suffixEnumerator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001001eb440
- (id)nextObject;	// IMP=0x00000001001eb3e0
- (id)initWithPrefix:(id)arg1 suffix:(id)arg2;	// IMP=0x00000001001eb32c

@end

