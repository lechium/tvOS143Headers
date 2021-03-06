//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BLBaseBookInstallOperation, BLBookInstallManager, BLDownload, NSString;
@protocol BLOperationProgress;

@protocol BLBookInstallManagerProgressDelegate <NSObject>
- (void)installManager:(BLBookInstallManager *)arg1 didFinishInstallForOperation:(BLBaseBookInstallOperation *)arg2;
- (void)installManager:(BLBookInstallManager *)arg1 updatedProgress:(id <BLOperationProgress>)arg2 forInstallOperation:(BLBaseBookInstallOperation *)arg3;
- (void)installManager:(BLBookInstallManager *)arg1 didStartInstallWithOperation:(BLBaseBookInstallOperation *)arg2 forDownloadID:(NSString *)arg3;
- (void)installManager:(BLBookInstallManager *)arg1 willRestartInstallForDownload:(BLDownload *)arg2;
@end

