//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURLSessionTask.h>

@interface NSURLSessionTask (Daemon)
- (void)setITunesStoreDataConsumer:(id)arg1;	// IMP=0x000000010014b70c
- (id)ITunesStoreDataConsumer;	// IMP=0x000000010014b700
- (long long)ITunesStoreCancelReason;	// IMP=0x000000010014b6b4
- (id)ITunesStoreCancelError;	// IMP=0x000000010014b6a8
- (void)cancelWithITunesStoreReason:(long long)arg1 error:(id)arg2;	// IMP=0x000000010014b604
@end
