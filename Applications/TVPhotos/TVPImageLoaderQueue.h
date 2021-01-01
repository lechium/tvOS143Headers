//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface TVPImageLoaderQueue : NSObject
{
    _Bool _randomized;	// 8 = 0x8
    _Bool _pauseImageLoad;	// 9 = 0x9
    NSArray *_imageProxies;	// 16 = 0x10
    long long _preloadCount;	// 24 = 0x18
    CDUnknownBlockType _preloadCompletionHandler;	// 32 = 0x20
    long long _queueSize;	// 40 = 0x28
    long long _concurrentDownloadCount;	// 48 = 0x30
    long long _nextIndex;	// 56 = 0x38
    NSMutableArray *_pendingImageProxies;	// 64 = 0x40
    NSMutableArray *_loadingImageProxies;	// 72 = 0x48
    NSMutableArray *_finishedImages;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000001000866d0
@property(retain, nonatomic) NSMutableArray *finishedImages; // @synthesize finishedImages=_finishedImages;
@property(retain, nonatomic) NSMutableArray *loadingImageProxies; // @synthesize loadingImageProxies=_loadingImageProxies;
@property(retain, nonatomic) NSMutableArray *pendingImageProxies; // @synthesize pendingImageProxies=_pendingImageProxies;
@property(nonatomic) long long nextIndex; // @synthesize nextIndex=_nextIndex;
@property(nonatomic) long long concurrentDownloadCount; // @synthesize concurrentDownloadCount=_concurrentDownloadCount;
@property(nonatomic) long long queueSize; // @synthesize queueSize=_queueSize;
@property(copy, nonatomic) CDUnknownBlockType preloadCompletionHandler; // @synthesize preloadCompletionHandler=_preloadCompletionHandler;
@property(nonatomic) long long preloadCount; // @synthesize preloadCount=_preloadCount;
@property(nonatomic) _Bool pauseImageLoad; // @synthesize pauseImageLoad=_pauseImageLoad;
@property(nonatomic, getter=isRandomized) _Bool randomized; // @synthesize randomized=_randomized;
@property(copy, nonatomic) NSArray *imageProxies; // @synthesize imageProxies=_imageProxies;
- (void)_checkForPreloadCompletion;	// IMP=0x00000001000865c0
- (void)_imageProxyDidFail:(id)arg1 withError:(id)arg2;	// IMP=0x00000001000864c8
- (void)_imageProxyDidLoad:(id)arg1 withImage:(id)arg2;	// IMP=0x00000001000863fc
- (void)_loadPendingImages;	// IMP=0x0000000100086078
- (id)_imageProxyToLoadNext;	// IMP=0x0000000100085fc4
- (void)_fillQueue;	// IMP=0x0000000100085ec0
- (long long)_currentQueueSize;	// IMP=0x0000000100085e64
- (id)popNextImage;	// IMP=0x0000000100085dc0
- (void)preloadImageCount:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100085d64
- (void)dealloc;	// IMP=0x0000000100085c64
- (id)init;	// IMP=0x0000000100085b88

@end

