//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@interface TransformEnumerator : NSEnumerator
{
    NSEnumerator *_enumerator;	// 8 = 0x8
    CDUnknownBlockType _transform;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001001eb674
- (id)nextObject;	// IMP=0x00000001001eb540
- (id)initWithEnumerator:(id)arg1 transform:(CDUnknownBlockType)arg2;	// IMP=0x00000001001eb480

@end

