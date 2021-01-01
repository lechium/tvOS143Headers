//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDAirDropHandler.h"

@class LSBundleProxy, NSArray, NSOperationQueue, SDAirDropHandleriCloudDrive;

__attribute__((visibility("hidden")))
@interface SDAirDropHandlerGenericFiles : SDAirDropHandler
{
    NSOperationQueue *_workOperationsQueue;	// 8 = 0x8
    SDAirDropHandleriCloudDrive *_icloudDriveHandler;	// 16 = 0x10
    SDAirDropHandler *_selectedHandler;	// 24 = 0x18
    LSBundleProxy *_selectedProxy;	// 32 = 0x20
    NSArray *_availableApplications;	// 40 = 0x28
    LSBundleProxy *_selectedApplication;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000d993c
@property(retain, nonatomic) LSBundleProxy *selectedApplication; // @synthesize selectedApplication=_selectedApplication;
@property(copy, nonatomic) NSArray *availableApplications; // @synthesize availableApplications=_availableApplications;
- (id)cancelActionTitleToAccompanyActions:(id)arg1;	// IMP=0x00000001000d9870
- (void)updatePossibleActions;	// IMP=0x00000001000d9560
- (id)suitableContentsDescription;	// IMP=0x00000001000d93b4
- (long long)transferTypes;	// IMP=0x00000001000d937c
- (_Bool)canHandleTransfer;	// IMP=0x00000001000d92a4
- (id)initWithTransfer:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x00000001000d91c4
- (id)initWithTransfer:(id)arg1;	// IMP=0x00000001000d91b4

@end
