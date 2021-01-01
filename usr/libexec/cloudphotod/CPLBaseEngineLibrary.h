//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

#import "CPLEngineLibraryImplementation-Protocol.h"

@class NSString;

@interface CPLBaseEngineLibrary : CPLPlatformObject <CPLEngineLibraryImplementation>
{
}

- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003b89c
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003b828
- (id)componentName;	// IMP=0x000000010003b81c
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003b80c
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003b784
- (_Bool)createLibraryWithError:(id *)arg1;	// IMP=0x000000010003b6c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

