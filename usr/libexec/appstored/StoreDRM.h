//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, StoreSinfArray;

@interface StoreDRM : NSObject
{
    NSArray *_storeSinfs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001001caa54
- (id)_sinfsArrayWithDataKey:(id)arg1;	// IMP=0x00000001001ca964
- (id)firstDataForSinfDataKey:(id)arg1;	// IMP=0x00000001001ca7b4
@property(readonly) StoreSinfArray *sinfsArray;
- (id)initWithSinfsArray:(id)arg1;	// IMP=0x00000001001ca690

@end

