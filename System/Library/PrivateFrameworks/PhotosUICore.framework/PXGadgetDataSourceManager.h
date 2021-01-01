/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSectionedDataSourceManager.h>
#import <libobjc.A.dylib/PXGadgetProviderDelegate.h>
#import <libobjc.A.dylib/PXGadgetDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_group, PXGadgetDelegate;
@class NSObject, NSMutableArray, NSArray, PXGadgetDataSource, NSString, PXGadgetNavigationHelper;

@interface PXGadgetDataSourceManager : PXSectionedDataSourceManager <PXGadgetProviderDelegate, PXGadgetDelegate> {

	NSObject*<OS_dispatch_queue> _lookupQueue;
	NSMutableArray* _lookupQueue_loadedProviders;
	NSObject*<OS_dispatch_group> _deferredGadgetLoadingGroup;
	NSObject*<OS_dispatch_queue> _deferredGadgetQueue;
	BOOL _isPerformingChanges;
	BOOL _dataSourceNeedsUpdate;
	BOOL _canLoadRemainingDataForProviders;
	BOOL _hasLoadedPriorities;
	BOOL _loadingInitialGadgets;
	BOOL _needsToLoadAllProviders;
	id<PXGadgetDelegate> _nextGadgetResponder;
	NSArray* _cachedProviders;

}

@property (nonatomic,copy) NSArray * cachedProviders;                                        //@synthesize cachedProviders=_cachedProviders - In the implementation block
@property (assign,nonatomic) BOOL hasLoadedPriorities;                                       //@synthesize hasLoadedPriorities=_hasLoadedPriorities - In the implementation block
@property (assign,nonatomic) BOOL loadingInitialGadgets;                                     //@synthesize loadingInitialGadgets=_loadingInitialGadgets - In the implementation block
@property (assign,nonatomic) BOOL needsToLoadAllProviders;                                   //@synthesize needsToLoadAllProviders=_needsToLoadAllProviders - In the implementation block
@property (nonatomic,readonly) NSArray * gadgetProviders; 
@property (nonatomic,readonly) id gadgetSortComparator; 
@property (nonatomic,readonly) id gadgetProviderSortComparator; 
@property (nonatomic,readonly) PXGadgetDataSource * dataSource; 
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> nextGadgetResponder;                //@synthesize nextGadgetResponder=_nextGadgetResponder - In the implementation block
@property (assign,nonatomic) BOOL canLoadRemainingDataForProviders;                          //@synthesize canLoadRemainingDataForProviders=_canLoadRemainingDataForProviders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<PXGadgetTransition> gadgetTransition; 
@property (nonatomic,readonly) PXGadgetNavigationHelper * rootNavigationHelper; 
+(id)gadgetDataSourceManagerLog;
-(id)init;
-(id)initWithQueueName:(id)arg1 ;
-(id)createInitialDataSource;
-(id)gadgetViewControllerHostingGadget:(id)arg1 ;
-(void)gadget:(id)arg1 animateChanges:(/*^block*/id)arg2 ;
-(void)gadget:(id)arg1 didChange:(unsigned long long)arg2 ;
-(id<PXGadgetDelegate>)nextGadgetResponder;
-(void)setNextGadgetResponder:(id<PXGadgetDelegate>)arg1 ;
-(BOOL)gadget:(id)arg1 transitionToViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentGadgetViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissGadgetViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id<PXGadgetTransition>)gadgetTransition;
-(PXGadgetNavigationHelper *)rootNavigationHelper;
-(void)didPerformChanges;
-(void)_updateDataSource;
-(void)removeCachedProviders;
-(NSArray *)gadgetProviders;
-(id)_dataSourceSnapshot;
-(id)gadgetSortComparator;
-(void)invalidateGadgets;
-(void)willPerformChanges;
-(void)didLoadDataForPriorities;
-(id)gadgetProviderSortComparator;
-(id)hiddenGadgetProviders;
-(id)noContentGadget;
-(void)beginLoadingInitialGadgets:(unsigned long long)arg1 ;
-(void)loadRemainingGadgetsIfNeeded;
-(void)loadRemainingGadgetsIfNeeded:(/*^block*/id)arg1 ;
-(void)loadRemainingGadgetsIfNeededWithGenerateGadgetFinishedBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCanLoadRemainingDataForProviders:(BOOL)arg1 ;
-(NSArray *)cachedProviders;
-(void)_loadPriorityForProviders:(id)arg1 ;
-(void)_loadDataFromProviders:(id)arg1 withGadgetMinimum:(unsigned long long)arg2 ;
-(BOOL)canLoadRemainingDataForProviders;
-(void)setCachedProviders:(NSArray *)arg1 ;
-(BOOL)hasLoadedPriorities;
-(void)setHasLoadedPriorities:(BOOL)arg1 ;
-(BOOL)loadingInitialGadgets;
-(void)setLoadingInitialGadgets:(BOOL)arg1 ;
-(BOOL)needsToLoadAllProviders;
-(void)setNeedsToLoadAllProviders:(BOOL)arg1 ;
@end
