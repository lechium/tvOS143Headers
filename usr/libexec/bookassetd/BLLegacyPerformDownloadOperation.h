//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class _BLPerformDownloadOperation;

__attribute__((visibility("hidden")))
@interface BLLegacyPerformDownloadOperation : ISOperation
{
    _BLPerformDownloadOperation *_operation;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000100038fcc
@property(retain, nonatomic) _BLPerformDownloadOperation *operation; // @synthesize operation=_operation;
- (void)run;	// IMP=0x0000000100038f68
- (id)initWithBLDownloadPipeline:(id)arg1 response:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100038e94

@end
