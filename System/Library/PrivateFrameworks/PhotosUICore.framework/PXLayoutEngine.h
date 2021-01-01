/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXMutableLayoutEngine.h>

@protocol OS_dispatch_queue, PXLayoutEngineDelegate, PXLayoutEngineDataSourceSnapshot, PXLayoutItem, PXLayoutDataSourceChangeDetails;
@class NSObject, PXLayoutSnapshot, PXLayoutGenerator, NSString;

@interface PXLayoutEngine : NSObject <PXMutableLayoutEngine> {

	NSObject*<OS_dispatch_queue> _internalWorkQueue;
	SCD_Struct_PX58 _needsUpdateFlags;
	id<PXLayoutEngineDelegate> _delegate;
	PXLayoutSnapshot* _layoutSnapshot;
	id<PXLayoutEngineDataSourceSnapshot> _dataSourceSnapshot;
	id<PXLayoutItem> _seedItem;
	PXLayoutGenerator* _layoutGenerator;
	id<PXLayoutDataSourceChangeDetails> _changeDetails;

}

@property (nonatomic,retain) id<PXLayoutDataSourceChangeDetails> changeDetails;                      //@synthesize changeDetails=_changeDetails - In the implementation block
@property (nonatomic,retain) PXLayoutGenerator * layoutGenerator;                                    //@synthesize layoutGenerator=_layoutGenerator - In the implementation block
@property (nonatomic,retain) PXLayoutSnapshot * layoutSnapshot;                                      //@synthesize layoutSnapshot=_layoutSnapshot - In the implementation block
@property (assign,nonatomic,__weak) id<PXLayoutEngineDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<PXLayoutEngineDataSourceSnapshot> dataSourceSnapshot;              //@synthesize dataSourceSnapshot=_dataSourceSnapshot - In the implementation block
@property (nonatomic,readonly) id<PXLayoutItem> seedItem;                                            //@synthesize seedItem=_seedItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PXLayoutEngineDelegate>)delegate;
-(void)setDelegate:(id<PXLayoutEngineDelegate>)arg1 ;
-(BOOL)_needsUpdate;
-(void)_updateIfNeeded;
-(void)_setNeedsUpdate;
-(id<PXLayoutDataSourceChangeDetails>)changeDetails;
-(void)setChangeDetails:(id<PXLayoutDataSourceChangeDetails>)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)setLayoutSnapshot:(PXLayoutSnapshot *)arg1 ;
-(PXLayoutSnapshot *)layoutSnapshot;
-(id<PXLayoutEngineDataSourceSnapshot>)dataSourceSnapshot;
-(void)setDataSourceSnapshot:(id<PXLayoutEngineDataSourceSnapshot>)arg1 ;
-(void)_publishChanges;
-(void)setDataSourceSnapshot:(id)arg1 withChangeDetails:(id)arg2 ;
-(id<PXLayoutItem>)seedItem;
-(void)setSeedItem:(id<PXLayoutItem>)arg1 ;
-(id)initWithLayoutGenerator:(id)arg1 dataSourceSnapshot:(id)arg2 ;
-(id)performChangesAndWait:(/*^block*/id)arg1 ;
-(void)invalidateLayoutSnapshot;
-(void)_updateLayoutSnapshotIfNeeded;
-(void)invalidateLayoutData;
-(void)_updateLayoutDataIfNeeded;
-(BOOL)canComputeLayoutSnapshot;
-(void)updateLayoutDataWithChangeDetails:(id)arg1 ;
-(id)computeLayoutSnapshot;
-(PXLayoutGenerator *)layoutGenerator;
-(void)setLayoutGenerator:(PXLayoutGenerator *)arg1 ;
@end

