//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MTAddPodcastParams : NSObject
{
    _Bool _userInitiated;	// 8 = 0x8
    NSString *_url;	// 16 = 0x10
    NSString *_location;	// 24 = 0x18
    long long _storeCollectionId;	// 32 = 0x20
    CDUnknownBlockType _completion;	// 40 = 0x28
    CDUnknownBlockType _processingCompletion;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001001496b0
@property(copy, nonatomic) CDUnknownBlockType processingCompletion; // @synthesize processingCompletion=_processingCompletion;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool userInitiated; // @synthesize userInitiated=_userInitiated;
@property(nonatomic) long long storeCollectionId; // @synthesize storeCollectionId=_storeCollectionId;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (id)init;	// IMP=0x000000010014937c

@end

