//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BLStoreDownloadQueueResponse, NSArray;

__attribute__((visibility("hidden")))
@interface BLRestoreDownloadItemsResponse : NSObject
{
    NSArray *_requestItems;	// 8 = 0x8
    BLStoreDownloadQueueResponse *_serverResponse;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010006cd20
@property(retain, nonatomic) BLStoreDownloadQueueResponse *serverResponse; // @synthesize serverResponse=_serverResponse;
@property(copy, nonatomic) NSArray *requestItems; // @synthesize requestItems=_requestItems;
- (void)setServerResponseWithError:(id)arg1;	// IMP=0x000000010006cc90

@end
