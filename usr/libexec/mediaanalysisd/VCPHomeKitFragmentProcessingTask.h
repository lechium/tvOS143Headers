//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VCPMADTaskProtocol-Protocol.h"

@class HMIVideoAnalyzer, NSData, NSDictionary;

@interface VCPHomeKitFragmentProcessingTask : NSObject <VCPMADTaskProtocol>
{
    struct atomic<bool> _started;	// 8 = 0x8
    struct atomic<bool> _cancel;	// 9 = 0x9
    NSData *_assetData;	// 16 = 0x10
    HMIVideoAnalyzer *_analyzer;	// 24 = 0x18
    NSDictionary *_options;	// 32 = 0x20
    CDUnknownBlockType _completionHandler;	// 40 = 0x28
}

+ (id)taskForAssetData:(id)arg1 withAnalyzer:(id)arg2 withOptions:(id)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010000f994
- (void).cxx_destruct;	// IMP=0x0000000100010264
- (int)run;	// IMP=0x000000010000fc5c
- (void)cancel;	// IMP=0x000000010000fc4c
- (float)resourceRequirement;	// IMP=0x000000010000fc44
- (void)dealloc;	// IMP=0x000000010000fa88
- (id)initWithAssetData:(id)arg1 analyzer:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010000f844
- (id)init;	// IMP=0x000000010000f82c

@end

