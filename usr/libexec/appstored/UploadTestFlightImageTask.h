//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TestFlightUploadSubTask.h"

@class TFImageUpload, TFPendingImageUpload;

@interface UploadTestFlightImageTask : TestFlightUploadSubTask
{
    TFPendingImageUpload *_pendingUpload;	// 8 = 0x8
    TFImageUpload *_successfulUpload;	// 16 = 0x10
}

+ (id)taskWithPendingImageUpload:(id)arg1 andEntity:(id)arg2;	// IMP=0x0000000100091120
- (void).cxx_destruct;	// IMP=0x000000010009190c
@property(retain, nonatomic) TFImageUpload *successfulUpload; // @synthesize successfulUpload=_successfulUpload;
@property(retain, nonatomic) TFPendingImageUpload *pendingUpload; // @synthesize pendingUpload=_pendingUpload;
- (void)_handleResult:(id)arg1;	// IMP=0x000000010009157c
- (id)contentTypeHeaderValue;	// IMP=0x0000000100091570
- (id)acceptHeaderValue;	// IMP=0x0000000100091568
- (void)main;	// IMP=0x0000000100091190

@end

