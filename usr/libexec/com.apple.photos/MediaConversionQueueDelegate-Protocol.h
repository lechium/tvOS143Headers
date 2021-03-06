//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MediaConversionQueue, MediaConversionQueueEntry;

@protocol MediaConversionQueueDelegate <NSObject>
- (void)conversionQueue:(MediaConversionQueue *)arg1 processNextEntry:(MediaConversionQueueEntry *)arg2;

@optional
- (void)conversionQueueDidFinishProcessingEntry:(MediaConversionQueue *)arg1;
- (void)conversionQueue:(MediaConversionQueue *)arg1 cancelCurrentlyProcessingEntry:(MediaConversionQueueEntry *)arg2;
@end

