/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSectionedDataSourceManager.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>

@protocol PXDeferrableDataSourceManagerDelegate;
@class PXSectionedDataSourceManager, PXSectionedDataSource, NSArray, NSString;

@interface PXDeferrableDataSourceManager : PXSectionedDataSourceManager <PXSectionedDataSourceManagerObserver> {

	PXSectionedDataSourceManager* _underlyingDataSourceManager;
	BOOL _hasInitialDataSource;
	BOOL _clientIsHandlingDataSourceTransition;
	PXSectionedDataSource* _pendingDataSource;
	NSArray* _pendingDataSourceChangeDetails;
	id<PXDeferrableDataSourceManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PXDeferrableDataSourceManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PXDeferrableDataSourceManagerDelegate>)delegate;
-(void)setDelegate:(id<PXDeferrableDataSourceManagerDelegate>)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)initWithDataSourceManager:(id)arg1 ;
-(id)createInitialDataSource;
-(id)changeDetailsFromDataSource:(id)arg1 toDataSource:(id)arg2 ;
-(void)setDataSource:(id)arg1 changeDetails:(id)arg2 ;
-(void)setDataSource:(id)arg1 changeDetailsArray:(id)arg2 ;
-(void)_finishTransitionToDataSource:(id)arg1 changeDetailsArray:(id)arg2 ;
-(void)_internal_setDataSource:(id)arg1 changeDetailsArray:(id)arg2 ;
-(BOOL)_canAttemptDataSourceChanges;
-(void)_setPendingDataSource:(id)arg1 changeDetailsArray:(id)arg2 ;
-(void)resumeDataSourceChanges;
@end

