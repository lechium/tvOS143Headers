//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FinishDownloadStepOperation.h"

@interface InstallDocumentDownloadOperation : FinishDownloadStepOperation
{
    _Bool _isSharedMDMDownload;	// 91 = 0x5b
    _Bool _isSharedODRDownload;	// 92 = 0x5c
}

- (id)_sharedContainerPath:(id)arg1;	// IMP=0x000000010018c630
- (id)_sharedContainerPath;	// IMP=0x000000010018c5c8
- (id)_sharedAssetStagingPath:(id)arg1;	// IMP=0x000000010018c1c8
- (_Bool)_moveSharedAssetFromPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;	// IMP=0x000000010018bc48
- (void)run;	// IMP=0x000000010018a33c

@end
