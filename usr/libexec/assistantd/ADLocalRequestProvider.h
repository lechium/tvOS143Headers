//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle;
@protocol OS_dispatch_queue;

@interface ADLocalRequestProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSBundle *_bundle;	// 16 = 0x10
}

+ (id)sharedProvider;	// IMP=0x0000000100100ac8
- (void).cxx_destruct;	// IMP=0x00000001001012e4
- (void)_getLocalRequestWithType:(long long)arg1 bundle:(id)arg2 languageCode:(id)arg3 outputVoiceInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100100eac
- (id)_bundle;	// IMP=0x0000000100100e44
- (void)getLocalRequestWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100100bc8
- (id)init;	// IMP=0x0000000100100b34

@end
