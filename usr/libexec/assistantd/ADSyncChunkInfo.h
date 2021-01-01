//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ADSyncChunkInfo : NSObject
{
    NSString *_pre;	// 8 = 0x8
    NSString *_post;	// 16 = 0x10
    NSString *_validity;	// 24 = 0x18
    NSArray *_toAdd;	// 32 = 0x20
    NSArray *_toRemove;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001001b5000
@property(retain, nonatomic) NSArray *toRemove; // @synthesize toRemove=_toRemove;
@property(retain, nonatomic) NSArray *toAdd; // @synthesize toAdd=_toAdd;
@property(copy, nonatomic) NSString *validity; // @synthesize validity=_validity;
@property(copy, nonatomic) NSString *post; // @synthesize post=_post;
@property(copy, nonatomic) NSString *pre; // @synthesize pre=_pre;

@end
