//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FinishDownloadStepOperation.h"

#import "ISOperationDelegate-Protocol.h"

@class NSString;

@interface InstallSoftwareDownloadOperation : FinishDownloadStepOperation <ISOperationDelegate>
{
}

- (id)_newSoftwarePropertiesWithDownload:(id)arg1;	// IMP=0x00000001001e42fc
- (void)_monitorForTerminationOfBundleID:(id)arg1;	// IMP=0x00000001001e3e74
- (_Bool)_downloadSecondaryAssets:(id *)arg1;	// IMP=0x00000001001e3cb8
- (void)operation:(id)arg1 updatedProgress:(id)arg2;	// IMP=0x00000001001e3c08
- (void)run;	// IMP=0x00000001001e21e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
