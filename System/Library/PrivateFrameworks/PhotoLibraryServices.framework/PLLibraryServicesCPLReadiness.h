/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
@class PLLibraryServicesManager, NSObject, NSMutableArray;

@interface PLLibraryServicesCPLReadiness : NSObject {

	PLLibraryServicesManager* _libraryServicesManager;
	NSObject*<OS_dispatch_source> _photoLibraryCPLReadinessTimer;
	NSMutableArray* _photoLibraryCPLReadinessBlocks;

}
-(void)invalidate;
-(id)libraryServicesManager;
-(BOOL)isReadyForCloudPhotoLibraryWithStatus:(id*)arg1 ;
-(id)initWithLibraryServicesManager:(id)arg1 ;
-(void)performOnceLibraryIsReadyForCPLManager:(/*^block*/id)arg1 ;
-(void)pauseCloudPhotos:(BOOL)arg1 reason:(short)arg2 ;
-(void)processCloudPhotosLibraryStateChange:(BOOL)arg1 ;
-(BOOL)_isAssetsdReadyForCPLManagerWithStatus:(id*)arg1 ;
-(void)cancelCPLReadinessBlocksAndStopWaiting;
-(void)_stopWaitingForCPLReadiness;
-(void)_callOutstandingCPLReadinessBlocks;
-(BOOL)_checkForCPLReadinessAndCallBlocks;
-(void)_setupCPLReadinessTimerAndEventHandlerIfNeeded;
@end

