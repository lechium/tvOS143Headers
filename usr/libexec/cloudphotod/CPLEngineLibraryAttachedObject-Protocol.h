//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CPLEngineLibrary, CPLResource, CPLResourceTransferTask, NSError, NSString;

@protocol CPLEngineLibraryAttachedObject <NSObject>
- (NSString *)displayableNameForEngineLibrary:(CPLEngineLibrary *)arg1;
- (void)engineLibrary:(CPLEngineLibrary *)arg1 pushAllChangesWithCompletionHandler:(void (^)(NSError *))arg2;
- (void)engineLibrary:(CPLEngineLibrary *)arg1 didCloseWithError:(NSError *)arg2;
- (void)engineLibrary:(CPLEngineLibrary *)arg1 sizeOfResourcesToUploadDidChangeToSize:(unsigned long long)arg2 sizeOfOriginalResourcesToUpload:(unsigned long long)arg3 numberOfImages:(unsigned long long)arg4 numberOfVideos:(unsigned long long)arg5 numberOfOtherItems:(unsigned long long)arg6;
- (void)engineLibrary:(CPLEngineLibrary *)arg1 uploadTask:(CPLResourceTransferTask *)arg2 didFinishWithError:(NSError *)arg3;
- (void)engineLibrary:(CPLEngineLibrary *)arg1 uploadTask:(CPLResourceTransferTask *)arg2 didProgress:(float)arg3;
- (void)engineLibrary:(CPLEngineLibrary *)arg1 didStartUploadTask:(CPLResourceTransferTask *)arg2;
- (void)engineLibrary:(CPLEngineLibrary *)arg1 didFailBackgroundDownloadOfResource:(CPLResource *)arg2;
- (void)engineLibrary:(CPLEngineLibrary *)arg1 didDownloadResourceInBackground:(CPLResource *)arg2;
- (void)engineLibraryHasStatusChanges:(CPLEngineLibrary *)arg1;
- (void)engineLibraryHasChangesInPullQueue:(CPLEngineLibrary *)arg1;
- (_Bool)isLibraryManagerForEngineLibrary:(CPLEngineLibrary *)arg1;
@end

