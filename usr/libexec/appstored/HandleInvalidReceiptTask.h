//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AsyncTask.h"

@class NSString, NSURL;

@interface HandleInvalidReceiptTask : AsyncTask
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSURL *_bundleURL;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000ef810
@property(retain, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)_presentSystemDialogWithTitle:(id)arg1 dialogMessage:(id)arg2 actionURL:(id)arg3;	// IMP=0x00000001000ef44c
- (id)productURLForAppWithID:(id)arg1;	// IMP=0x00000001000ef3d0
- (void)terminateApplicationWithBundleIdentifier:(id)arg1;	// IMP=0x00000001000ef350
- (id)dialogRequestWithTitle:(id)arg1 dialogMessage:(id)arg2;	// IMP=0x00000001000ef178
- (void)main;	// IMP=0x00000001000eebf8
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x00000001000eeb78
- (id)initWithBundleIdentifier:(id)arg1 bundleURL:(id)arg2;	// IMP=0x00000001000eeac4

@end

