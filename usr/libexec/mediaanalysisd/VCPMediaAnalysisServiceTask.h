//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VCPMADTaskProtocol-Protocol.h"

@class NSArray, PHPhotoLibrary;

@interface VCPMediaAnalysisServiceTask : NSObject <VCPMADTaskProtocol>
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    NSArray *_localIdentifiers;	// 16 = 0x10
    _Bool _cancel;	// 24 = 0x18
    _Bool _noResultStrip;	// 25 = 0x19
    CDUnknownBlockType _progressHandler;	// 32 = 0x20
    CDUnknownBlockType _completionHandler;	// 40 = 0x28
    _Bool _realTime;	// 48 = 0x30
}

+ (id)taskForPhotoLibrary:(id)arg1 withAssetLocalIdentifiers:(id)arg2 realTime:(_Bool)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010002b00c
- (void).cxx_destruct;	// IMP=0x000000010002c168
@property(readonly) _Bool realTime; // @synthesize realTime=_realTime;
- (int)run;	// IMP=0x000000010002bc8c
- (int)analyzeAsset:(id)arg1 analyses:(id)arg2 cancel:(CDUnknownBlockType)arg3;	// IMP=0x000000010002b33c
- (double)totalProgressWeight:(id)arg1;	// IMP=0x000000010002b1c8
- (double)progressWeight:(id)arg1;	// IMP=0x000000010002b110
- (void)cancel;	// IMP=0x000000010002b104
- (float)resourceRequirement;	// IMP=0x000000010002b0fc
- (id)initWithPhotoLibrary:(id)arg1 withAssetLocalIdentifiers:(id)arg2 realTime:(_Bool)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010002aea0

@end

