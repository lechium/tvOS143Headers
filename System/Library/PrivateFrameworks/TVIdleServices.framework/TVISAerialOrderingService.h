/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVIdleServices.framework/TVIdleServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class TVISAerialServiceConfiguration, TVISAerialStore, NSObject, NSArray, TVISIndexSetMuxer;

@interface TVISAerialOrderingService : NSObject {

	TVISAerialServiceConfiguration* _configuration;
	TVISAerialStore* _store;
	NSObject*<OS_dispatch_queue> _workQ;
	NSArray* _sortedAssetIDs;
	TVISIndexSetMuxer* _indexSetMuxer;

}

@property (nonatomic,readonly) TVISAerialServiceConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) TVISAerialStore * store;                                     //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQ;                          //@synthesize workQ=_workQ - In the implementation block
@property (nonatomic,readonly) NSArray * sortedAssetIDs;                                    //@synthesize sortedAssetIDs=_sortedAssetIDs - In the implementation block
@property (nonatomic,readonly) TVISIndexSetMuxer * indexSetMuxer;                           //@synthesize indexSetMuxer=_indexSetMuxer - In the implementation block
-(TVISAerialServiceConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 ;
-(TVISAerialStore *)store;
-(NSObject*<OS_dispatch_queue>)workQ;
-(id)initWithConfiguration:(id)arg1 store:(id)arg2 ;
-(void)_setUpWithCurrentAssetStore;
-(BOOL)_orderNeedsUpdate;
-(id)_synchronouslyFindOptimalPlayOrder;
-(void)updatePlayOrderIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)sortedAssetIDs;
-(TVISIndexSetMuxer *)indexSetMuxer;
@end

